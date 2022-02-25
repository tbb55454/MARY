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


#include <cassert>

#include "hipSYCL/runtime/dag_expander.hpp"
#include "hipSYCL/runtime/dag_interpreter.hpp"
#include "hipSYCL/runtime/hints.hpp"

namespace hipsycl {
namespace rt {

namespace {


void add_requirements_from_node_to(const dag_node_ptr &node,
                                   const dag_expansion_result& expansion,
                                   std::vector<dag_node_ptr> &target) 
{
  for(auto req : node->get_requirements()) {
    bool is_requirement_optimized_away = false;

    if(!req->is_submitted()) {
      std::size_t node_id = node->get_node_id();
      if(expansion.node_annotations(node_id).is_optimized_away()) {
        is_requirement_optimized_away = true;
        add_requirements_from_node_to(req, expansion, target);
      }
    }

    if(!is_requirement_optimized_away)
      target.push_back(req);
  }
}

}

dag_interpreter::dag_interpreter(const dag *d, const dag_enumerator *enumerator,
                                 const dag_expansion_result *expansion_result)
    : _dag{d}, _expansion{expansion_result},
      _effective_requirements(enumerator->get_node_index_space_size()) 
{
  d->for_each_node([this](dag_node_ptr node) {
    std::size_t node_id = this->get_node_id(node);
    
    const dag_expander_annotation &node_annotation =
        _expansion->node_annotations(node_id);

    // If this is a forwarded node, add the requirements additionally
    // to the forwarding target node
    if(node_annotation.is_node_forwarded()){
      std::size_t forwarded_id =
          get_node_id(node_annotation.get_forwarding_target());

      add_requirements_from_node_to(node,
                                    *_expansion,
                                    this->_effective_requirements[forwarded_id]);
      
    }
    
    add_requirements_from_node_to(node,
                                  *_expansion,
                                  this->_effective_requirements[node_id]);
  
  });

  // Remove duplicate effective requirements
  d->for_each_node([this](dag_node_ptr node) {
    std::vector<dag_node_ptr> unique_reqs;

    this->for_each_requirement_nonunique(node, [&](dag_node_ptr req) {
      if (std::find(unique_reqs.begin(), unique_reqs.end(), req) ==
          unique_reqs.end())
        unique_reqs.push_back(req);
    });
    
    this->_effective_requirements[node->get_node_id()] = unique_reqs;
  });
}

bool dag_interpreter::is_node_optimized_away(const dag_node_ptr &node) const
{
  if(node->is_submitted())
    return false;

  std::size_t node_id = this->get_node_id(node);

  return _expansion->node_annotations(node_id).is_optimized_away();
}

bool dag_interpreter::is_node_forwarded(const dag_node_ptr& node) const
{
  if(node->is_submitted())
    return false;

  std::size_t node_id = this->get_node_id(node);

  return _expansion->node_annotations(node_id).is_node_forwarded();
}

std::size_t dag_interpreter::get_node_id(const dag_node_ptr &node) const
{
  return node->get_node_id();
}

}
}
