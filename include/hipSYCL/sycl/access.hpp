/*
 * This file is part of hipSYCL, a SYCL implementation based on CUDA/HIP
 *
 * Copyright (c) 2018 Aksel Alpay
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

#ifndef HIPSYCL_ACCESS_HPP
#define HIPSYCL_ACCESS_HPP

#include <ostream>

namespace hipsycl {
namespace sycl {
namespace access {

enum class mode {
  read = 1024,
  write,
  read_write,
  discard_write,
  discard_read_write,
  atomic
};

enum class target {
  global_buffer = 2014,
  constant_buffer,
  local,
  image,
  host_buffer,
  host_image,
  image_array
};

enum class placeholder {
  false_t,
  true_t
};

enum class fence_space : char {
  local_space,
  global_space,
  global_and_local
};

// TODO these should be moved to a common/serialization.hpp?
inline std::ostream &operator<<(std::ostream &out, const sycl::access::mode value)
{
  switch (value) {
  case sycl::access::mode::read:
    out << "R";
    break;
  case sycl::access::mode::write:
    out << "W";
    break;
  case sycl::access::mode::atomic:
    out << "atomic";
    break;
  case sycl::access::mode::read_write:
    out << "RW";
    break;
  case sycl::access::mode::discard_write:
    out << "Discard W";
    break;
  case sycl::access::mode::discard_read_write:
    out << "Discard RW";
    break;
  default:
    throw "Mode enum cannot be serialized";
    break;
  }
  return out;
}

inline std::ostream &operator<<(std::ostream &out,
                                const sycl::access::target value) {
  switch (value) {
  case sycl::access::target::image:
    out << "image";
    break;
  case sycl::access::target::constant_buffer:
    out << "constant_buffer";
    break;
  case sycl::access::target::global_buffer:
    out << "global_buffer";
    break;
  case sycl::access::target::host_buffer:
    out << "host_buffer";
    break;
  case sycl::access::target::host_image:
    out << "host_image";
    break;
  case sycl::access::target::image_array:
    out << "Image_array";
    break;
  case sycl::access::target::local:
    out << "local";
    break;
  default:
    throw "Target enum cannot be serialized";
    break;
  }
  return out;
}

inline std::ostream &operator<<(std::ostream &out,
                         const sycl::access::placeholder value)
{
  switch (value) {
  case sycl::access::placeholder::false_t:
    out << "false";
    break;
  case sycl::access::placeholder::true_t:
    out << "true";
    break;
  default:
    throw "Placeholder enum cannot be serialized";
    break;
  }
  return out;
}

inline std::ostream &operator<<(std::ostream &out,
                         const sycl::access::fence_space value) 
{
  switch (value) {
  case sycl::access::fence_space::global_and_local:
    out << "global and local";
    break;
  case sycl::access::fence_space::global_space:
    out << "global";
    break;
  case sycl::access::fence_space::local_space:
    out << "local";
    break;
  default:
    throw "fence_space enum cannot be serialized";
    break;
  }
  return out;
}

}
}
}


#endif
