# This file allows users to call find_package(Clang) and pick up our targets.



find_package(LLVM REQUIRED CONFIG
             HINTS "/home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/cmake/llvm")

set(CLANG_EXPORTED_TARGETS "clangBasic;clangLex;clangParse;clangAST;clangDynamicASTMatchers;clangASTMatchers;clangCrossTU;clangSema;clangCodeGen;clangAnalysis;clangEdit;clangRewrite;clangDriver;clangSerialization;clangRewriteFrontend;clangFrontend;clangFrontendTool;clangToolingCore;clangToolingInclusions;clangToolingRefactoring;clangToolingASTDiff;clangToolingSyntax;clangDependencyScanning;clangTooling;clangDirectoryWatcher;clangIndex;clangFormat;clang-cpp")
set(CLANG_CMAKE_DIR "/home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/lib/cmake/clang")
set(CLANG_INCLUDE_DIRS "/home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/include;/home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/include")

# Provide all our library targets to users.
include("/home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/lib/cmake/clang/ClangTargets.cmake")

# By creating clang-tablegen-targets here, subprojects that depend on Clang's
# tablegen-generated headers can always depend on this target whether building
# in-tree with Clang or not.
if(NOT TARGET clang-tablegen-targets)
  add_custom_target(clang-tablegen-targets)
endif()
