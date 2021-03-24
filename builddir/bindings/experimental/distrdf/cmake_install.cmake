# Install script for directory: /home/diagoras/root_cern/root/bindings/experimental/distrdf

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
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/DistRDF/__init__.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/DistRDF/__init__.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/DistRDF/ComputationGraphGenerator.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/DistRDF/ComputationGraphGenerator.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/DistRDF/DataFrame.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/DistRDF/DataFrame.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/DistRDF/Node.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/DistRDF/Node.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/DistRDF/Operation.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/DistRDF/Operation.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/DistRDF/Proxy.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/DistRDF/Proxy.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/DistRDF/Backends/__init__.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/DistRDF/Backends/__init__.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/DistRDF/Backends/Base.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/DistRDF/Backends/Base.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/DistRDF/Backends/Utils.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/DistRDF/Backends/Utils.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/DistRDF/Backends/Spark/__init__.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/DistRDF/Backends/Spark/__init__.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -m py_compile /home/diagoras/root_cern/root/builddir/lib/DistRDF/Backends/Spark/Backend.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  execute_process(COMMAND /home/diagoras/miniconda3/bin/python3.8 -O -m py_compile /home/diagoras/root_cern/root/builddir/lib/DistRDF/Backends/Spark/Backend.py)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xlibrariesx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE DIRECTORY FILES "/home/diagoras/root_cern/root/builddir/lib/DistRDF")
endif()

