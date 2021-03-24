# Generated by CMake

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.5)
   message(FATAL_ERROR "CMake >= 2.6.0 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.6)
#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_targetsDefined)
set(_targetsNotDefined)
set(_expectedTargets)
foreach(_expectedTarget clingInterpreter clingMetaProcessor clingUtils clingDemoPlugin)
  list(APPEND _expectedTargets ${_expectedTarget})
  if(NOT TARGET ${_expectedTarget})
    list(APPEND _targetsNotDefined ${_expectedTarget})
  endif()
  if(TARGET ${_expectedTarget})
    list(APPEND _targetsDefined ${_expectedTarget})
  endif()
endforeach()
if("${_targetsDefined}" STREQUAL "${_expectedTargets}")
  unset(_targetsDefined)
  unset(_targetsNotDefined)
  unset(_expectedTargets)
  set(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT "${_targetsDefined}" STREQUAL "")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_targetsDefined}\nTargets not yet defined: ${_targetsNotDefined}\n")
endif()
unset(_targetsDefined)
unset(_targetsNotDefined)
unset(_expectedTargets)


# Create imported target clingInterpreter
add_library(clingInterpreter STATIC IMPORTED)

set_target_properties(clingInterpreter PROPERTIES
  INTERFACE_LINK_LIBRARIES "clingUtils;clangCodeGen;clangDriver;clangFrontend;clangParse;clangSema;clangAnalysis;clangEdit;clangRewrite;clangRewriteFrontend;clangSerialization;clangAST;clangBasic;clangLex;dl;LLVMAnalysis;LLVMCore;LLVMCoroutines;LLVMCoverage;LLVMExecutionEngine;LLVMipo;LLVMLTO;LLVMMC;LLVMObject;LLVMOption;LLVMOrcJIT;LLVMRuntimeDyld;LLVMScalarOpts;LLVMSupport;LLVMTarget;LLVMTransformUtils;LLVMBinaryFormat;LLVMX86CodeGen;LLVMX86AsmParser;LLVMX86Desc;LLVMX86Disassembler;LLVMX86Info;LLVMX86Utils;LLVMNVPTXCodeGen;LLVMNVPTXDesc;LLVMNVPTXInfo"
)

# Create imported target clingMetaProcessor
add_library(clingMetaProcessor STATIC IMPORTED)

set_target_properties(clingMetaProcessor PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangLex;clangAST;clangBasic;clingInterpreter;clingUtils;LLVMCore;LLVMSupport;LLVMBinaryFormat"
)

# Create imported target clingUtils
add_library(clingUtils STATIC IMPORTED)

set_target_properties(clingUtils PROPERTIES
  INTERFACE_LINK_LIBRARIES "clangCodeGen;clangDriver;clangFrontend;clangParse;clangSema;clangAnalysis;clangEdit;clangRewrite;clangRewriteFrontend;clangSerialization;clangAST;clangBasic;clangLex;dl;LLVMAnalysis;LLVMCore;LLVMCoroutines;LLVMCoverage;LLVMExecutionEngine;LLVMipo;LLVMLTO;LLVMMC;LLVMObject;LLVMOption;LLVMOrcJIT;LLVMRuntimeDyld;LLVMScalarOpts;LLVMSupport;LLVMTarget;LLVMTransformUtils;LLVMBinaryFormat;LLVMX86CodeGen;LLVMX86AsmParser;LLVMX86Desc;LLVMX86Disassembler;LLVMX86Info;LLVMX86Utils;LLVMNVPTXCodeGen;LLVMNVPTXDesc;LLVMNVPTXInfo"
)

# Create imported target clingDemoPlugin
add_library(clingDemoPlugin SHARED IMPORTED)

set_target_properties(clingDemoPlugin PROPERTIES
  INTERFACE_LINK_LIBRARIES "-Wl,--unresolved-symbols=ignore-in-object-files"
)

# Import target "clingInterpreter" for configuration "Release"
set_property(TARGET clingInterpreter APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clingInterpreter PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/diagoras/root_cern/root/builddir/lib/libclingInterpreter.a"
  )

# Import target "clingMetaProcessor" for configuration "Release"
set_property(TARGET clingMetaProcessor APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clingMetaProcessor PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/diagoras/root_cern/root/builddir/lib/libclingMetaProcessor.a"
  )

# Import target "clingUtils" for configuration "Release"
set_property(TARGET clingUtils APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clingUtils PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "/home/diagoras/root_cern/root/builddir/lib/libclingUtils.a"
  )

# Import target "clingDemoPlugin" for configuration "Release"
set_property(TARGET clingDemoPlugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(clingDemoPlugin PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/diagoras/root_cern/root/builddir/interpreter/cling/tools/plugins/example/libclingDemoPlugin.so.9"
  IMPORTED_SONAME_RELEASE "libclingDemoPlugin.so.9"
  )

# Make sure the targets which have been exported in some other 
# export set exist.
unset(${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE_targets)
foreach(_target "clangCodeGen" "clangDriver" "clangFrontend" "clangParse" "clangSema" "clangAnalysis" "clangEdit" "clangRewrite" "clangRewriteFrontend" "clangSerialization" "clangAST" "clangBasic" "clangLex" "LLVMAnalysis" "LLVMCore" "LLVMCoroutines" "LLVMCoverage" "LLVMExecutionEngine" "LLVMipo" "LLVMLTO" "LLVMMC" "LLVMObject" "LLVMOption" "LLVMOrcJIT" "LLVMRuntimeDyld" "LLVMScalarOpts" "LLVMSupport" "LLVMTarget" "LLVMTransformUtils" "LLVMBinaryFormat" "LLVMX86CodeGen" "LLVMX86AsmParser" "LLVMX86Desc" "LLVMX86Disassembler" "LLVMX86Info" "LLVMX86Utils" "LLVMNVPTXCodeGen" "LLVMNVPTXDesc" "LLVMNVPTXInfo" )
  if(NOT TARGET "${_target}" )
    set(${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE_targets "${${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE_targets} ${_target}")
  endif()
endforeach()

if(DEFINED ${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE_targets)
  if(CMAKE_FIND_PACKAGE_NAME)
    set( ${CMAKE_FIND_PACKAGE_NAME}_FOUND FALSE)
    set( ${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE "The following imported targets are referenced, but are missing: ${${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE_targets}")
  else()
    message(FATAL_ERROR "The following imported targets are referenced, but are missing: ${${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE_targets}")
  endif()
endif()
unset(${CMAKE_FIND_PACKAGE_NAME}_NOT_FOUND_MESSAGE_targets)

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
