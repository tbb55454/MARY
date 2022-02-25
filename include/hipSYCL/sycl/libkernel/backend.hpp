/*
 * This file is part of hipSYCL, a SYCL implementation based on CUDA/HIP
 *
 * Copyright (c) 2020 Aksel Alpay
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef HIPSYCL_LIBKERNEL_BACKEND_HPP
#define HIPSYCL_LIBKERNEL_BACKEND_HPP

#include "cuda/cuda_backend.hpp"
#include "hip/hip_backend.hpp"
#include "host/host_backend.hpp"

// define (legacy?) platform identification macros
#if HIPSYCL_LIBKERNEL_COMPILER_SUPPORTS_HIP
 #define HIPSYCL_PLATFORM_ROCM
 #define HIPSYCL_PLATFORM_HIP
#endif

#if HIPSYCL_LIBKERNEL_COMPILER_SUPPORTS_CUDA
 #define HIPSYCL_PLATFORM_CUDA
#endif

#if HIPSYCL_LIBKERNEL_IS_DEVICE_PASS_HOST
 #define HIPSYCL_PLATFORM_CPU
#endif

#ifdef HIPSYCL_LIBKERNEL_DEVICE_PASS
 #define SYCL_DEVICE_ONLY
#endif

#endif
