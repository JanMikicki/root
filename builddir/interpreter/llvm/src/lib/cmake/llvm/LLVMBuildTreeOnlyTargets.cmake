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
foreach(_expectedTarget LLVMHello FileCheck llvm-PerfectShuffle count not yaml-bench lli-child-target)
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


# Create imported target LLVMHello
add_library(LLVMHello MODULE IMPORTED)

# Create imported target FileCheck
add_executable(FileCheck IMPORTED)

# Create imported target llvm-PerfectShuffle
add_executable(llvm-PerfectShuffle IMPORTED)

# Create imported target count
add_executable(count IMPORTED)

# Create imported target not
add_executable(not IMPORTED)

# Create imported target yaml-bench
add_executable(yaml-bench IMPORTED)

# Create imported target lli-child-target
add_executable(lli-child-target IMPORTED)

# Import target "LLVMHello" for configuration "Release"
set_property(TARGET LLVMHello APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(LLVMHello PROPERTIES
  IMPORTED_COMMON_LANGUAGE_RUNTIME_RELEASE ""
  IMPORTED_LOCATION_RELEASE "/home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/LLVMHello.so"
  IMPORTED_NO_SONAME_RELEASE "TRUE"
  )

# Import target "FileCheck" for configuration "Release"
set_property(TARGET FileCheck APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(FileCheck PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/diagoras/root_cern/root/builddir/interpreter/llvm/src/bin/FileCheck"
  )

# Import target "llvm-PerfectShuffle" for configuration "Release"
set_property(TARGET llvm-PerfectShuffle APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(llvm-PerfectShuffle PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/diagoras/root_cern/root/builddir/interpreter/llvm/src/bin/llvm-PerfectShuffle"
  )

# Import target "count" for configuration "Release"
set_property(TARGET count APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(count PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/diagoras/root_cern/root/builddir/interpreter/llvm/src/bin/count"
  )

# Import target "not" for configuration "Release"
set_property(TARGET not APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(not PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/diagoras/root_cern/root/builddir/interpreter/llvm/src/bin/not"
  )

# Import target "yaml-bench" for configuration "Release"
set_property(TARGET yaml-bench APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(yaml-bench PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/diagoras/root_cern/root/builddir/interpreter/llvm/src/bin/yaml-bench"
  )

# Import target "lli-child-target" for configuration "Release"
set_property(TARGET lli-child-target APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(lli-child-target PROPERTIES
  IMPORTED_LOCATION_RELEASE "/home/diagoras/root_cern/root/builddir/interpreter/llvm/src/bin/lli-child-target"
  )

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
