# Install script for directory: /home/diagoras/root_cern/root/math

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

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/diagoras/root_cern/root/builddir/math/mathcore/cmake_install.cmake")
  include("/home/diagoras/root_cern/root/builddir/math/matrix/cmake_install.cmake")
  include("/home/diagoras/root_cern/root/builddir/math/minuit/cmake_install.cmake")
  include("/home/diagoras/root_cern/root/builddir/math/fumili/cmake_install.cmake")
  include("/home/diagoras/root_cern/root/builddir/math/physics/cmake_install.cmake")
  include("/home/diagoras/root_cern/root/builddir/math/mlp/cmake_install.cmake")
  include("/home/diagoras/root_cern/root/builddir/math/quadp/cmake_install.cmake")
  include("/home/diagoras/root_cern/root/builddir/math/foam/cmake_install.cmake")
  include("/home/diagoras/root_cern/root/builddir/math/smatrix/cmake_install.cmake")
  include("/home/diagoras/root_cern/root/builddir/math/splot/cmake_install.cmake")
  include("/home/diagoras/root_cern/root/builddir/math/genvector/cmake_install.cmake")
  include("/home/diagoras/root_cern/root/builddir/math/genetic/cmake_install.cmake")
  include("/home/diagoras/root_cern/root/builddir/math/vecops/cmake_install.cmake")

endif()

