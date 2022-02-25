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
#include <cstdlib>

#include "hipSYCL/runtime/device_id.hpp"
#include "hipSYCL/runtime/omp/omp_allocator.hpp"

namespace hipsycl {
namespace rt {

omp_allocator::omp_allocator(const device_id &my_device)
    : _my_device{my_device} {}

void *omp_allocator::allocate(size_t min_alignment, size_t size_bytes) {
  if (min_alignment <= 1)
    return malloc(size_bytes);
  
  if(size_bytes % min_alignment != 0)
    return nullptr;

  // ToDo: Mac OS CI has a problem with std::aligned_alloc
  // but it's unclear if it's a Mac, or libc++, or toolchain issue
#ifdef __APPLE__
  return aligned_alloc(min_alignment, size_bytes);
#else
  return std::aligned_alloc(min_alignment, size_bytes);
#endif
}

void *omp_allocator::allocate_optimized_host(size_t min_alignment,
                                             size_t bytes) {
  return this->allocate(min_alignment, bytes);
};

void omp_allocator::free(void *mem) {
  std::free(mem);
}

void* omp_allocator::allocate_usm(size_t bytes) {
  return this->allocate(0, bytes);
}

bool omp_allocator::is_usm_accessible_from(backend_descriptor b) const {
  if(b.hw_platform == hardware_platform::cpu) {
    return true;
  }
  return false;
}

result omp_allocator::query_pointer(const void *ptr, pointer_info &out) const {
  
  // For a host device, USM is the same as host memory?
  out.is_optimized_host = true;
  out.is_usm = true;
  out.is_from_host_backend = true;
  out.dev = _my_device;

  return make_success();
}

}
}