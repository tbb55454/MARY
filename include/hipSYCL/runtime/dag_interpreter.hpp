/*
 * This file is part of hipSYCL, a SYCL implementation based on CUDA/HIP
 *
 * Copyright (c) 2019 Aksel Alpay
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef HIPSYCL_DAG_INTERPRETER_HPP
#define HIPSYCL_DAG_INTERPRETER_HPP

#include "hints.hpp"
#include "dag_expander.hpp"
#include "dag_enumerator.hpp"
#include "hipSYCL/common/debug.hpp"


namespace hipsycl {
namespace rt {

class dag_interpreter
{
public:
  dag_interpreter(const dag* d, const dag_enumerator* enumerator,
                  const dag_expansion_result *expansion_result);

  /// After dag_expansion, a node may effectively depend on more requirements
  /// than originally specified. This function iterates over all effective
  /// requirements, calling a handler function for each requirement.
  /// \param h The handler function which must have the signature
  /// \c void(dag_node_ptr).
  template<class Handler>
  void for_each_requirement(const dag_node_ptr& node, Handler h) const
  {
    assert(node->has_node_id());
    for(auto req : _effective_requirements[node->get_node_id()])
      h(req);
  }

  /// After dag_expansion, a node may be optimized away or may have been
  /// translated into multiple operations. This function iterates over all
  /// operations relevant for this node.
  /// \param h The handler function called for each operation with the signature
  /// \c void(operation*)
  template<class Handler>
  void for_each_operation(const dag_node_ptr& node, Handler h) const
  {
    std::size_t node_id = get_node_id(node);

    const dag_expander_annotation &node_annotation =
        _expansion->node_annotations(node_id);
    if(node_annotation.is_optimized_away())
      return;
    else if(node_annotation.is_operation_replaced()){
      const auto &replacement_ops =
          node_annotation.get_replacement_operations();

      for(const auto& op : replacement_ops) {
        h(op.get());
      }
    }
    else if(node_annotation.is_node_forwarded()) {
      for_each_operation(node_annotation.get_forwarding_target(), h);
    }
    else
      h(node->get_operation());
  }

  template<class Handler>
  void for_each_effective_node(Handler h) const
  {
    _dag->for_each_node([&](dag_node_ptr node){
      std::size_t node_id = get_node_id(node);

      if(!_expansion->node_annotations(node_id).is_optimized_away() &&
         !_expansion->node_annotations(node_id).is_node_forwarded())
        h(node);
    });
  }

  bool is_node_optimized_away(const dag_node_ptr& node) const;
  bool is_node_forwarded(const dag_node_ptr& node) const;
private:
  std::size_t get_node_id(const dag_node_ptr& node) const;

  const dag* _dag;
  const dag_expansion_result* _expansion;
  std::vector<std::vector<dag_node_ptr>> _effective_requirements;

  template<class Handler>
  void for_each_requirement_nonunique(const dag_node_ptr& node, Handler h) const
  {
    if(!node)
      return;
    
    // if the node has already been submitted, it should not
    // be necessary to obtain its effective dependencies.
    // e.g. it will already have at least a multi event that allows
    // waiting for its completion, even if it was optimized away.
    if(node->is_submitted()) {
      return;
    }

    std::size_t node_id = get_node_id(node);

    const dag_expander_annotation &node_annotation =
        _expansion->node_annotations(node_id);

    // If the node is forwarded, operate on the requirements of the for-
    // warding target.
    if(node_annotation.is_node_forwarded()) {
      assert(node_annotation.get_forwarding_target() != node);
      for_each_requirement_nonunique(node_annotation.get_forwarding_target(), h);
    }
    // otherwise, if this node is optimized away
    // or we are on a physical operation node, process
    // the requirements of the node
    else {
      for(dag_node_ptr req : _effective_requirements[node_id]){
        // If the requirement does not correspond to an operation,
        // recursively process the requirements
        if(req->is_submitted())
          h(req);
        else if(is_node_optimized_away(req) || is_node_forwarded(req))
          for_each_requirement_nonunique(req, h);
        else
          h(req);
      }
    }
  }
};

}
}

#endif
