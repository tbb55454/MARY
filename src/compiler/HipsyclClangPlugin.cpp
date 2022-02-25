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
#include "hipSYCL/common/config.hpp"

#include "hipSYCL/compiler/FrontendPlugin.hpp"
#include "hipSYCL/compiler/GlobalsPruningPass.hpp"

#include "clang/Frontend/FrontendPluginRegistry.h"

#include "llvm/IR/LegacyPassManager.h"
#include "llvm/Pass.h"
#include "llvm/Passes/PassBuilder.h"
#include "llvm/Passes/PassPlugin.h"

namespace hipsycl {
namespace compiler {
// Register and activate passes

static clang::FrontendPluginRegistry::Add<hipsycl::compiler::FrontendASTAction>
    HipsyclFrontendPlugin{"hipsycl_frontend", "enable hipSYCL frontend action"};

static void registerGlobalsPruningPass(const llvm::PassManagerBuilder &,
                                       llvm::legacy::PassManagerBase &PM) {
  PM.add(new GlobalsPruningPassLegacy{});
}

static llvm::RegisterStandardPasses
    RegisterGlobalsPruningPassOptLevel0(llvm::PassManagerBuilder::EP_EnabledOnOptLevel0,
                                        registerGlobalsPruningPass);

static llvm::RegisterStandardPasses
    RegisterGlobalsPruningPassOptimizerLast(llvm::PassManagerBuilder::EP_OptimizerLast,
                                            registerGlobalsPruningPass);

#if !defined(_WIN32) && LLVM_VERSION_MAJOR >= 11
#define HIPSYCL_STRINGIFY(V) #V
#define HIPSYCL_PLUGIN_VERSION_STRING                                                    \
  "v" HIPSYCL_STRINGIFY(HIPSYCL_VERSION_MAJOR) "." HIPSYCL_STRINGIFY(                    \
      HIPSYCL_VERSION_MINOR) "." HIPSYCL_STRINGIFY(HIPSYCL_VERSION_PATCH)

extern "C" LLVM_ATTRIBUTE_WEAK ::llvm::PassPluginLibraryInfo llvmGetPassPluginInfo() {
  return {LLVM_PLUGIN_API_VERSION, "hipSYCL Clang plugin", HIPSYCL_PLUGIN_VERSION_STRING,
          [](llvm::PassBuilder &PB) {
            // Note: for Clang < 12, this EP is not called for O0, but the new PM isn't
            // really used there anyways..
            PB.registerOptimizerLastEPCallback(
                [](llvm::ModulePassManager &MPM, llvm::PassBuilder::OptimizationLevel) {
                  MPM.addPass(hipsycl::compiler::GlobalsPruningPass{});
                });
          }};
}
#endif // !_WIN32 && LLVM_VERSION_MAJOR >= 11

} // namespace compiler
} // namespace hipsycl
