# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

if("/home/diagoras/root_cern/root/builtins/openui5/openui5.tar.gz" STREQUAL "")
  message(FATAL_ERROR "LOCAL can't be empty")
endif()

if(NOT EXISTS "/home/diagoras/root_cern/root/builtins/openui5/openui5.tar.gz")
  message(FATAL_ERROR "File not found: /home/diagoras/root_cern/root/builtins/openui5/openui5.tar.gz")
endif()

if("SHA256" STREQUAL "")
  message(WARNING "File will not be verified since no URL_HASH specified")
  return()
endif()

if("f40910aae22afb80f0d1a0ff07577ff8073896dd4415e4c64a125b7c29b89b0e" STREQUAL "")
  message(FATAL_ERROR "EXPECT_VALUE can't be empty")
endif()

message(STATUS "verifying file...
     file='/home/diagoras/root_cern/root/builtins/openui5/openui5.tar.gz'")

file("SHA256" "/home/diagoras/root_cern/root/builtins/openui5/openui5.tar.gz" actual_value)

if(NOT "${actual_value}" STREQUAL "f40910aae22afb80f0d1a0ff07577ff8073896dd4415e4c64a125b7c29b89b0e")
  message(FATAL_ERROR "error: SHA256 hash of
  /home/diagoras/root_cern/root/builtins/openui5/openui5.tar.gz
does not match expected value
  expected: 'f40910aae22afb80f0d1a0ff07577ff8073896dd4415e4c64a125b7c29b89b0e'
    actual: '${actual_value}'
")
endif()

message(STATUS "verifying file... done")
