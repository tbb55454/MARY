/*
 * This file is part of hipSYCL, a SYCL implementation based on CUDA/HIP
 *
 * Copyright (c) 2018-2020 Aksel Alpay and contributors
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


#include "sycl_test_suite.hpp"
#include <boost/test/unit_test_suite.hpp>

BOOST_FIXTURE_TEST_SUITE(buffer_tests, reset_device_fixture)


BOOST_AUTO_TEST_CASE(buffer_versioning) {
  namespace s = cl::sycl;
  constexpr size_t buf_size = 32;

  s::queue queue;
  s::buffer<int, 1> buf(buf_size);
  {
    auto acc = buf.get_access<s::access::mode::discard_write>();
    for(int i = 0; i < buf_size; ++i) {
      acc[i] = i;
    }
  }

  queue.submit([&](s::handler& cgh) {
    auto acc = buf.get_access<s::access::mode::discard_write>(cgh);
    cgh.parallel_for<class buffer_versioning>(buf.get_range(), [=](s::id<1> id) {
      acc[id] = buf_size - id[0];
    });
  });

  {
    auto acc = buf.get_access<s::access::mode::read>();
    for(int i = 0; i < buf_size; ++i) {
      BOOST_REQUIRE(acc[i] == buf_size - i);
    }
  }
}

// TODO: Extend this
BOOST_AUTO_TEST_CASE(buffer_api) {
  namespace s = cl::sycl;

  s::buffer<int, 1> buf_a(32);
  s::buffer<int, 1> buf_b(32);
  auto buf_c = buf_a;

  BOOST_REQUIRE(buf_a == buf_a);
  BOOST_REQUIRE(buf_a != buf_b);
  BOOST_REQUIRE(buf_a == buf_c);
}


BOOST_AUTO_TEST_SUITE_END()