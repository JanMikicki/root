# Install script for directory: /home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Release")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE-build/libpcre.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE-build/libpcreposix.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE STATIC_LIBRARY FILES "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE-build/libpcrecpp.a")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcregrep" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcregrep")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcregrep"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE-build/pcregrep")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcregrep" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcregrep")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcregrep")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcretest" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcretest")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcretest"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE-build/pcretest")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcretest" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcretest")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcretest")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcrecpp_unittest" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcrecpp_unittest")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcrecpp_unittest"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE-build/pcrecpp_unittest")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcrecpp_unittest" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcrecpp_unittest")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcrecpp_unittest")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcre_scanner_unittest" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcre_scanner_unittest")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcre_scanner_unittest"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE-build/pcre_scanner_unittest")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcre_scanner_unittest" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcre_scanner_unittest")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcre_scanner_unittest")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcre_stringpiece_unittest" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcre_stringpiece_unittest")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcre_stringpiece_unittest"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE-build/pcre_stringpiece_unittest")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcre_stringpiece_unittest" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcre_stringpiece_unittest")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/pcre_stringpiece_unittest")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE-build/pcre.h"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/pcreposix.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include" TYPE FILE FILES
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/pcrecpp.h"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/pcre_scanner.h"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE-build/pcrecpparg.h"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE-build/pcre_stringpiece.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/man/man1" TYPE FILE FILES
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcre-config.1"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcregrep.1"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcretest.1"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/man/man3" TYPE FILE FILES
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcre.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcre16.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcre32.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcre_assign_jit_stack.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcre_compile.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcre_compile2.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcre_config.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcre_copy_named_substring.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcre_copy_substring.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcre_dfa_exec.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcre_exec.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcre_free_study.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcre_free_substring.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcre_free_substring_list.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcre_fullinfo.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcre_get_named_substring.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcre_get_stringnumber.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcre_get_stringtable_entries.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcre_get_substring.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcre_get_substring_list.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcre_jit_exec.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcre_jit_stack_alloc.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcre_jit_stack_free.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcre_maketables.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcre_pattern_to_host_byte_order.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcre_refcount.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcre_study.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcre_utf16_to_host_byte_order.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcre_utf32_to_host_byte_order.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcre_version.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcreapi.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcrebuild.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcrecallout.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcrecompat.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcrecpp.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcredemo.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcrejit.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcrelimits.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcrematching.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcrepartial.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcrepattern.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcreperform.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcreposix.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcreprecompile.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcresample.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcrestack.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcresyntax.3"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/pcreunicode.3"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/doc/pcre/html" TYPE FILE FILES
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/index.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcre-config.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcre.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcre16.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcre32.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcre_assign_jit_stack.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcre_compile.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcre_compile2.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcre_config.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcre_copy_named_substring.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcre_copy_substring.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcre_dfa_exec.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcre_exec.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcre_free_study.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcre_free_substring.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcre_free_substring_list.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcre_fullinfo.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcre_get_named_substring.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcre_get_stringnumber.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcre_get_stringtable_entries.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcre_get_substring.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcre_get_substring_list.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcre_jit_exec.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcre_jit_stack_alloc.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcre_jit_stack_free.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcre_maketables.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcre_pattern_to_host_byte_order.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcre_refcount.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcre_study.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcre_utf16_to_host_byte_order.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcre_utf32_to_host_byte_order.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcre_version.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcreapi.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcrebuild.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcrecallout.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcrecompat.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcrecpp.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcredemo.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcregrep.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcrejit.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcrelimits.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcrematching.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcrepartial.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcrepattern.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcreperform.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcreposix.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcreprecompile.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcresample.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcrestack.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcresyntax.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcretest.html"
    "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE/doc/html/pcreunicode.html"
    )
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/diagoras/root_cern/root/builddir/builtins/pcre/PCRE-prefix/src/PCRE-build/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
