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

#include "clang/Basic/SourceManager.h"
#include "clang/Lex/HeaderSearch.h"

#include <boost/filesystem.hpp>

#include "CL/sycl/detail/debug.hpp"

#include <iostream>
namespace hipsycl {
namespace transform {

class RewriteSelectorWhitelist
{
public:
  static RewriteSelectorWhitelist&
  get()
  {
    static RewriteSelectorWhitelist list;
    return list;
  }

  void addToWhitelist(const std::string& path)
  {
    whiteList.push_back(path);
  }

  bool isPathAccepted(const std::string& path) const
  {
    if(!isActivated)
      return true;

    for(const auto& dir : whiteList)
    {
      if(pathContainsFile(dir, path))
        return true;
    }

    return false;
  } 

  void enable(bool enabled = true)
  {
    this->isActivated = enabled;
  }

  bool isEnabled() const
  {
    return isActivated;
  }
private:
  bool pathContainsFile(const std::string& dir,
                        const std::string& filename) const
  {
    auto checkIfFilepathStartsWithDir = 
      [](std::string p, const std::string& f) -> bool{

      if(p.empty())
        return true;

      if(f.empty())
        return true;

      if(p.back() != '/')
        p += '/';

      return f.find(p) == 0;
    };

    try 
    {
      auto canonicalDir = boost::filesystem::canonical(dir);
      auto canonicalFile = boost::filesystem::canonical(filename);

      return checkIfFilepathStartsWithDir(canonicalDir.string(),
                                          canonicalFile.string());
    }
    catch(...)
    {
      // Happens if dir or filename do not exist -- in this case
      // we just check if the filename starts with dir
      return checkIfFilepathStartsWithDir(dir, filename);
    }
  }

  RewriteSelectorWhitelist()
  : isActivated{false}
  {}

  bool isActivated;
  std::vector<std::string> whiteList;
};

class RewriteSelector
{
public:

  bool shouldIncludeBeRewritten(
      const clang::SourceManager& mgr,
      clang::FileID includedId,
      clang::SrcMgr::CharacteristicKind FileType,
      const clang::DirectoryLookup *DirLookup) const
  {
    // Never rewrite the sycl.hpp include file
    if(mgr.getFileEntryForID(includedId)->getName().endswith("CL/sycl.hpp"))
      return false;
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
    if(mgr.getFileEntryForID(includedId)->tryGetRealPathName().endswith("CL\\sycl.hpp"))
      return false;
#endif

    auto headerName = mgr.getFileEntryForID(includedId)->getName();
    if(boost::filesystem::path{headerName}.is_relative())
    {
      HIPSYCL_DEBUG_WARNING
          << "hipsycl_rewrite_includes: Encountered "
          << "relative include path " << std::string{headerName}
          << ", this may lead to incorrect inlining of includes "
          << "if --rewrite-include-paths is used." << std::endl;
    }

    // Don't rewrite the standard library headers
    if(FileType == clang::SrcMgr::CharacteristicKind::C_System ||
       FileType == clang::SrcMgr::CharacteristicKind::C_ExternCSystem)
    {
      if(endsWithStdHeader(headerName))
        return false;
    }

    if(RewriteSelectorWhitelist::get().isPathAccepted(headerName))
      return true;

    return false;
  }

private:
  bool endsWithStdHeader(const llvm::StringRef& path) const
  {
    for(const std::string& header : getStdHeaders())
    {
      if(path.endswith(header))
        return true;
#if defined(WIN32) || defined(_WIN32) || defined(__WIN32) && !defined(__CYGWIN__)
      std::string winHeader = header;
      for(std::size_t i = 0; i winHeader.size(); ++i)
        if(winHeader[i] == '/')
          winHeader[i] = '\\';
      if(path.endswith(winHeader))
        return true;
#endif

    }
    return false;
  }

  static
  const std::vector<std::string>& getStdHeaders()
  {
    static std::vector<std::string> headers{
      "assert.h",
      "complex.h",
      "ctype.h",
      "errno.h",
      "fenv.h",
      "float.h",
      "inttypes.h",
      "iso646.h",
      "limits.h",
      "locale.h",
      "math.h",
      "setjmp.h",
      "signal.h",
      "stdalign.h",
      "stdarg.h",
      "stdatomic.h",
      "stdbool.h",
      "stddef.h",
      "stdint.h",
      "stdio.h",
      "stdlib.h",
      "stdnoreturn.h",
      "string.h",
      "tgmath.h",
      "threads.h",
      "time.h",
      "uchar.h",
      "wchar.h",
      "wctype.h",
      "iostream",
      "unordered_set",
      "type_traits",
      "cstddef",
      "cerrno",
      "queue",
      "stack",
      "streambuf",
      "fenv.h",
      "cstdint",
      "future",

      "backward/hash_set",
      "backward/auto_ptr.h",
      "backward/backward_warning.h",
      "backward/strstream",
      "backward/hashtable.h",
      "backward/hash_fun.h",
      "backward/binders.h",
      "backward/hash_map",
      "iomanip",
      "memory",

      "tr1/unordered_set",
      "tr1/type_traits",
      "tr1/fenv.h",
      "tr1/cstdint",
      "tr1/memory",
      "tr1/cstdarg",
      "tr1/utility",
      "tr1/shared_ptr.h",
      "tr1/beta_function.tcc",
      "tr1/tuple",
      "tr1/cwchar",
      "tr1/stdint.h",
      "tr1/ell_integral.tcc",
      "tr1/random",
      "tr1/cfloat",
      "tr1/hashtable_policy.h",
      "tr1/unordered_set.h",
      "tr1/wctype.h",
      "tr1/cinttypes",
      "tr1/hashtable.h",
      "tr1/exp_integral.tcc",
      "tr1/complex",
      "tr1/complex.h",
      "tr1/stdlib.h",
      "tr1/stdbool.h",
      "tr1/unordered_map.h",
      "tr1/cmath",
      "tr1/cwctype",
      "tr1/ctype.h",
      "tr1/cfenv",
      "tr1/poly_hermite.tcc",
      "tr1/array",
      "tr1/random.h",
      "tr1/float.h",
      "tr1/bessel_function.tcc",
      "tr1/legendre_function.tcc",
      "tr1/stdarg.h",
      "tr1/ctime",
      "tr1/random.tcc",
      "tr1/ccomplex",
      "tr1/functional_hash.h",
      "tr1/tgmath.h",
      "tr1/regex",
      "tr1/functional",
      "tr1/riemann_zeta.tcc",
      "tr1/inttypes.h",
      "tr1/cctype",
      "tr1/cstdbool",
      "tr1/limits.h",
      "tr1/cstdio",
      "tr1/special_function_util.h",
      "tr1/ctgmath",
      "tr1/climits",
      "tr1/hypergeometric.tcc",
      "tr1/unordered_map",
      "tr1/gamma.tcc",
      "tr1/modified_bessel_func.tcc",
      "tr1/cstdlib",
      "tr1/poly_laguerre.tcc",
      "tr1/math.h",
      "tr1/stdio.h",
      "tr1/wchar.h",
      "deque",
      "cstdarg",
      "list",
      "utility",
      "tuple",
      "scoped_allocator",
      "charconv",
      "cwchar",
      "iterator",
      "random",
      "tr2",
      "tr2/type_traits",
      "tr2/bool_set",
      "tr2/dynamic_bitset",
      "tr2/bool_set.tcc",
      "tr2/ratio",
      "tr2/dynamic_bitset.tcc",
      "cstdalign",
      "cfloat",
      "codecvt",
      "decimal",
      "decimal/decimal",
      "decimal/decimal.h",
      "thread",
      "new",
      "fstream",
      "cinttypes",
      "string_view",
      "bitset",
      "ostream",
      "locale",
      "stdexcept",
      "atomic",
      "istream",
      "chrono",
      "complex",
      "complex.h",
      "stdlib.h",
      "ciso646",
      "filesystem",
      "ios",
      "cxxabi.h",
      "cmath",
      "ratio",
      "cwctype",
      "algorithm",
      "cfenv",
      "variant",
      "any",
      "valarray",
      "cassert",
      "exception",
      "set",
      "string",
      "limits",

      "debug/unordered_set",
      "debug/safe_local_iterator.tcc",
      "debug/stl_iterator.h",
      "debug/deque",
      "debug/list",
      "debug/macros.h",
      "debug/safe_sequence.tcc",
      "debug/safe_iterator.h",
      "debug/formatter.h",
      "debug/safe_unordered_container.tcc",
      "debug/bitset",
      "debug/multimap.h",
      "debug/safe_local_iterator.h",
      "debug/multiset.h",
      "debug/debug.h",
      "debug/functions.h",
      "debug/safe_iterator.tcc",
      "debug/map.h",
      "debug/set",
      "debug/string",
      "debug/array",
      "debug/map",
      "debug/assertions.h",
      "debug/set.h",
      "debug/safe_sequence.h",
      "debug/safe_base.h",
      "debug/safe_container.h",
      "debug/safe_unordered_container.h",
      "debug/vector",
      "debug/helper_functions.h",
      "debug/unordered_map",
      "debug/forward_list",
      "debug/safe_unordered_base.h",
      "numeric",
      "array",
      "cuchar",

      "bits/stl_multimap.h",
      "bits/locale_facets.tcc",
      "bits/regex_automaton.tcc",
      "bits/stl_construct.h",
      "bits/valarray_array.tcc",
      "bits/fs_path.h",
      "bits/move.h",
      "bits/parse_numbers.h",
      "bits/stl_iterator.h",
      "bits/quoted_string.h",
      "bits/stl_vector.h",
      "bits/valarray_array.h",
      "bits/regex_automaton.h",
      "bits/node_handle.h",
      "bits/shared_ptr.h",
      "bits/cpp_type_traits.h",
      "bits/stl_tempbuf.h",
      "bits/deque.tcc",
      "bits/algorithmfwd.h",
      "bits/fs_fwd.h",
      "bits/regex_scanner.tcc",
      "bits/std_function.h",
      "bits/slice_array.h",
      "bits/hashtable_policy.h",
      "bits/stl_algo.h",
      "bits/fs_ops.h",
      "bits/stl_queue.h",
      "bits/regex_constants.h",
      "bits/unordered_set.h",
      "bits/stl_set.h",
      "bits/invoke.h",
      "bits/stl_multiset.h",
      "bits/basic_ios.h",
      "bits/fs_dir.h",
      "bits/regex_executor.h",
      "bits/postypes.h",
      "bits/atomic_base.h",
      "bits/shared_ptr_atomic.h",
      "bits/ptr_traits.h",
      "bits/stringfwd.h",
      "bits/stl_algobase.h",
      "bits/istream.tcc",
      "bits/hashtable.h",
      "bits/atomic_lockfree_defines.h",
      "bits/exception.h",
      "bits/basic_string.tcc",
      "bits/unique_ptr.h",
      "bits/list.tcc",
      "bits/ios_base.h",
      "bits/regex_compiler.h",
      "bits/stl_list.h",
      "bits/std_mutex.h",
      "bits/stl_deque.h",
      "bits/cxxabi_forced.h",
      "bits/nested_exception.h",
      "bits/unordered_map.h",
      "bits/stl_heap.h",
      "bits/locale_classes.h",
      "bits/allocated_ptr.h",
      "bits/localefwd.h",
      "bits/regex_scanner.h",
      "bits/indirect_array.h",
      "bits/specfun.h",
      "bits/fstream.tcc",
      "bits/streambuf.tcc",
      "bits/predefined_ops.h",
      "bits/locale_facets_nonio.tcc",
      "bits/stl_iterator_base_funcs.h",
      "bits/atomic_futex.h",
      "bits/valarray_before.h",
      "bits/regex_executor.tcc",
      "bits/regex_error.h",
      "bits/random.h",
      "bits/stl_tree.h",
      "bits/allocator.h",
      "bits/stl_stack.h",
      "bits/concept_check.h",
      "bits/regex.h",
      "bits/stl_iterator_base_types.h",
      "bits/mask_array.h",
      "bits/locale_facets_nonio.h",
      "bits/vector.tcc",
      "bits/alloc_traits.h",
      "bits/stl_map.h",
      "bits/random.tcc",
      "bits/regex.tcc",
      "bits/range_access.h",
      "bits/functional_hash.h",
      "bits/locale_classes.tcc",
      "bits/locale_conv.h",
      "bits/enable_special_members.h",
      "bits/uniform_int_dist.h",
      "bits/basic_string.h",
      "bits/hash_bytes.h",
      "bits/exception_ptr.h",
      "bits/streambuf_iterator.h",
      "bits/stl_raw_storage_iter.h",
      "bits/std_abs.h",
      "bits/stl_numeric.h",
      "bits/stl_uninitialized.h",
      "bits/stl_relops.h",
      "bits/regex_compiler.tcc",
      "bits/functexcept.h",
      "bits/locale_facets.h",
      "bits/c++0x_warning.h",
      "bits/ostream.tcc",
      "bits/stream_iterator.h",
      "bits/boost_concept_check.h",
      "bits/forward_list.h",
      "bits/string_view.tcc",
      "bits/forward_list.tcc",
      "bits/stl_pair.h",
      "bits/memoryfwd.h",
      "bits/exception_defines.h",
      "bits/basic_ios.tcc",
      "bits/ostream_insert.h",
      "bits/stl_bvector.h",
      "bits/gslice.h",
      "bits/refwrap.h",
      "bits/shared_ptr_base.h",
      "bits/sstream.tcc",
      "bits/uses_allocator.h",
      "bits/codecvt.h",
      "bits/stl_function.h",
      "bits/cxxabi_init_exception.h",
      "bits/gslice_array.h",
      "bits/valarray_after.h",
      "bits/char_traits.h",
      "iosfwd",
      "map",
      "typeindex",
      "ctime",
      "optional",
      "ccomplex",
      "mutex",
      "initializer_list",
      "vector",
      "tgmath.h",
      "regex",
      "functional",
      "clocale",
      "system_error",
      "cctype",
      "cstdbool",
      "csignal",
      "parallel",
      "parallel/compatibility.h",
      "parallel/random_shuffle.h",
      "parallel/par_loop.h",
      "parallel/tags.h",
      "parallel/algorithmfwd.h",
      "parallel/base.h",
      "parallel/merge.h",
      "parallel/unique_copy.h",
      "parallel/multiway_mergesort.h",
      "parallel/find_selectors.h",
      "parallel/losertree.h",
      "parallel/omp_loop.h",
      "parallel/search.h",
      "parallel/equally_split.h",
      "parallel/types.h",
      "parallel/balanced_quicksort.h",
      "parallel/multiway_merge.h",
      "parallel/algorithm",
      "parallel/settings.h",
      "parallel/numeric",
      "parallel/set_operations.h",
      "parallel/workstealing.h",
      "parallel/algobase.h",
      "parallel/multiseq_selection.h",
      "parallel/for_each.h",
      "parallel/partial_sum.h",
      "parallel/quicksort.h",
      "parallel/omp_loop_static.h",
      "parallel/sort.h",
      "parallel/features.h",
      "parallel/iterator.h",
      "parallel/partition.h",
      "parallel/random_number.h",
      "parallel/basic_iterator.h",
      "parallel/for_each_selectors.h",
      "parallel/queue.h",
      "parallel/find.h",
      "parallel/numericfwd.h",
      "parallel/algo.h",
      "parallel/checkers.h",
      "parallel/list_partition.h",
      "parallel/compiletime_settings.h",
      "parallel/parallel.h",
      "cstdio",
      "ctgmath",
      "climits",
      "unordered_map",
      "forward_list",
      "sstream",
      "cstring",
      "cstdlib",
      "math.h",
      "experimental",
      "experimental/unordered_set",
      "experimental/type_traits",
      "experimental/source_location",
      "experimental/memory",
      "experimental/deque",
      "experimental/list",
      "experimental/utility",
      "experimental/tuple",
      "experimental/iterator",
      "experimental/random",
      "experimental/string_view",
      "experimental/chrono",
      "experimental/memory_resource",
      "experimental/filesystem",
      "experimental/ratio",
      "experimental/algorithm",
      "experimental/propagate_const",
      "experimental/any",
      "experimental/set",
      "experimental/string",
      "experimental/numeric",
      "experimental/array",
      "experimental/bits",
      "experimental/bits/fs_path.h",
      "experimental/bits/shared_ptr.h",
      "experimental/bits/fs_fwd.h",
      "experimental/bits/fs_ops.h",
      "experimental/bits/fs_dir.h",
      "experimental/bits/erase_if.h",
      "experimental/bits/lfts_config.h",
      "experimental/bits/string_view.tcc",
      "experimental/map",
      "experimental/optional",
      "experimental/vector",
      "experimental/regex",
      "experimental/functional",
      "experimental/system_error",
      "experimental/unordered_map",
      "experimental/forward_list",
      "shared_mutex",
      "typeinfo",
      "csetjmp",
      "condition_variable"
    };

    return headers;
  }
};

}
}
