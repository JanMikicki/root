# Install script for directory: /home/diagoras/root_cern/root/bindings/pyroot/pythonizations

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/diagoras/root_cern/root/installdir")
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
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/__init__.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/__init__.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/_application.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/_application.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/_numbadeclare.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/_numbadeclare.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/_facade.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/_facade.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/__init__.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/__init__.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_cppinstance.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_cppinstance.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_drawables.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_drawables.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_generic.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_generic.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_rbdt.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_rbdt.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_rooabscollection.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_rooabscollection.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_rooworkspace.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_rooworkspace.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_rvec.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_rvec.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_stl_vector.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_stl_vector.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_tarray.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_tarray.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_tclonesarray.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_tclonesarray.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_tcollection.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_tcollection.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_tcomplex.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_tcomplex.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_tdirectory.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_tdirectory.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_tdirectoryfile.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_tdirectoryfile.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_tfile.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_tfile.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_tgraph.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_tgraph.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_th1.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_th1.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_titer.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_titer.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_tobject.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_tobject.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_tobjstring.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_tobjstring.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_tree_inference.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_tree_inference.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_tseqcollection.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_tseqcollection.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_tstring.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_tstring.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_ttree.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_ttree.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_tvector3.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_tvector3.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_tvectort.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_tvectort.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_rdf_utils.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_rdf_utils.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_rdataframe.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_rdataframe.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_rtensor.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/ROOT/pythonization/_rtensor.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlibrariesx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libROOTPythonizations3_8.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libROOTPythonizations3_8.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libROOTPythonizations3_8.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/diagoras/root_cern/root/builddir/lib/libROOTPythonizations3_8.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libROOTPythonizations3_8.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libROOTPythonizations3_8.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libROOTPythonizations3_8.so"
         OLD_RPATH "/home/diagoras/root_cern/root/builddir/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libROOTPythonizations3_8.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlibrariesx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlibrariesx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE DIRECTORY FILES "/home/diagoras/root_cern/root/builddir/lib/ROOT")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xheadersx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/ROOT" TYPE FILE FILES
    "/home/diagoras/root_cern/root/bindings/pyroot/pythonizations/inc/RNumpyDS.hxx"
    "/home/diagoras/root_cern/root/bindings/pyroot/pythonizations/inc/TPyDispatcher.h"
    )
endif()

