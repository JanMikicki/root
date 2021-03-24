# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

if("/home/diagoras/root_cern/root/builtins/pcre/pcre-8.43.tar.bz2" STREQUAL "")
  message(FATAL_ERROR "LOCAL can't be empty")
endif()

if(NOT EXISTS "/home/diagoras/root_cern/root/builtins/pcre/pcre-8.43.tar.bz2")
  message(FATAL_ERROR "File not found: /home/diagoras/root_cern/root/builtins/pcre/pcre-8.43.tar.bz2")
endif()

if("SHA256" STREQUAL "")
  message(WARNING "File will not be verified since no URL_HASH specified")
  return()
endif()

if("91e762520003013834ac1adb4a938d53b22a216341c061b0cf05603b290faf6b" STREQUAL "")
  message(FATAL_ERROR "EXPECT_VALUE can't be empty")
endif()

message(STATUS "verifying file...
     file='/home/diagoras/root_cern/root/builtins/pcre/pcre-8.43.tar.bz2'")

file("SHA256" "/home/diagoras/root_cern/root/builtins/pcre/pcre-8.43.tar.bz2" actual_value)

if(NOT "${actual_value}" STREQUAL "91e762520003013834ac1adb4a938d53b22a216341c061b0cf05603b290faf6b")
  message(FATAL_ERROR "error: SHA256 hash of
  /home/diagoras/root_cern/root/builtins/pcre/pcre-8.43.tar.bz2
does not match expected value
  expected: '91e762520003013834ac1adb4a938d53b22a216341c061b0cf05603b290faf6b'
    actual: '${actual_value}'
")
endif()

message(STATUS "verifying file... done")
