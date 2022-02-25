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

#include "hipSYCL/runtime/hints.hpp"
#include "hipSYCL/runtime/operations.hpp"
#include "hipSYCL/runtime/dag_node.hpp"

namespace hipsycl {
namespace rt {

execution_hint::execution_hint(execution_hint_type type)
: _type{type}
{}

execution_hint_type execution_hint::get_hint_type() const
{
  return _type;
}

execution_hint::~execution_hint(){}

namespace hints {

bind_to_device::bind_to_device(device_id d)
: execution_hint{execution_hint_type::bind_to_device}, _dev{d}
{}

device_id bind_to_device::get_device_id() const
{ return _dev; }

} // hints

void execution_hints::add_hint(execution_hint_ptr hint)
{
  _hints.push_back(hint);
}

void execution_hints::overwrite_with(const execution_hints& other)
{
  for(const auto& hint : other._hints){
    this->overwrite_with(hint);
  }
}

void execution_hints::overwrite_with(execution_hint_ptr hint) {
  for (std::size_t i = 0; i < _hints.size(); ++i) {
    if (_hints[i]->get_hint_type() == hint->get_hint_type()) {
      _hints[i] = hint;
      return;
    }
  }
  _hints.push_back(hint);
}

bool execution_hints::has_hint(execution_hint_type type) const
{
  return get_hint(type) != nullptr;
}

execution_hint* execution_hints::get_hint(execution_hint_type type) const
{
  for(const auto& hint : _hints)
    if(hint->get_hint_type() == type)
      return hint.get();
  return nullptr;
}


}
}
