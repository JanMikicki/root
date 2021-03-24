# Install script for directory: /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdCl

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/diagoras/root_cern/root/builddir")
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
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libXrdCl.so.2.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libXrdCl.so.2"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "/home/diagoras/root_cern/root/builddir/lib")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src/XrdCl/libXrdCl.so.2.0.0"
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src/XrdCl/libXrdCl.so.2"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libXrdCl.so.2.0.0"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libXrdCl.so.2"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHANGE
           FILE "${file}"
           OLD_RPATH "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src:"
           NEW_RPATH "/home/diagoras/root_cern/root/builddir/lib")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libXrdCl.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libXrdCl.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libXrdCl.so"
         RPATH "/home/diagoras/root_cern/root/builddir/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src/XrdCl/libXrdCl.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libXrdCl.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libXrdCl.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libXrdCl.so"
         OLD_RPATH "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src:"
         NEW_RPATH "/home/diagoras/root_cern/root/builddir/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libXrdCl.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xrdfs" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xrdfs")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xrdfs"
         RPATH "/home/diagoras/root_cern/root/builddir/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src/XrdCl/xrdfs")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xrdfs" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xrdfs")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xrdfs"
         OLD_RPATH "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src/XrdCl:/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src:"
         NEW_RPATH "/home/diagoras/root_cern/root/builddir/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xrdfs")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xrdcp" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xrdcp")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xrdcp"
         RPATH "/home/diagoras/root_cern/root/builddir/lib")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src/XrdCl/xrdcp")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xrdcp" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xrdcp")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xrdcp"
         OLD_RPATH "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src/XrdCl:/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src:"
         NEW_RPATH "/home/diagoras/root_cern/root/builddir/lib")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/xrdcp")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/XrdCl" TYPE FILE FILES
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdCl/XrdClAnyObject.hh"
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdCl/XrdClBuffer.hh"
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdCl/XrdClConstants.hh"
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdCl/XrdClCopyProcess.hh"
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdCl/XrdClDefaultEnv.hh"
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdCl/XrdClEnv.hh"
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdCl/XrdClFile.hh"
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdCl/XrdClFileSystem.hh"
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdCl/XrdClMessage.hh"
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdCl/XrdClMonitor.hh"
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdCl/XrdClPostMaster.hh"
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdCl/XrdClPostMasterInterfaces.hh"
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdCl/XrdClTransportManager.hh"
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdCl/XrdClStatus.hh"
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdCl/XrdClURL.hh"
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdCl/XrdClXRootDResponses.hh"
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdCl/XrdClPlugInInterface.hh"
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdCl/XrdClPlugInManager.hh"
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdCl/XrdClPropertyList.hh"
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdCl/XrdClFileSystemUtils.hh"
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdCl/XrdClLog.hh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/xrootd/private/XrdCl" TYPE FILE FILES
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdCl/XrdClOperations.hh"
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdCl/XrdClOperationHandlers.hh"
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdCl/XrdClArg.hh"
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdCl/XrdClFwd.hh"
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdCl/XrdClParallelOperation.hh"
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdCl/XrdClFileOperations.hh"
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdCl/XrdClFileSystemOperations.hh"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/man/man1" TYPE FILE FILES
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/docs/man/xrdfs.1"
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/docs/man/xrdcp.1"
    "/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/docs/man/xrdmapc.1"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  
    EXECUTE_PROCESS(
      COMMAND ln -sf xrdcp xrdcopy
      WORKING_DIRECTORY $ENV{DESTDIR}//home/diagoras/root_cern/root/builddir/bin )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  
    EXECUTE_PROCESS(
      COMMAND ln -sf xrdcp.1 xrdcopy.1
      WORKING_DIRECTORY $ENV{DESTDIR}//home/diagoras/root_cern/root/builddir/share/man/man1 )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  
    FOREACH(MANPAGE xrdfs.1 xrdcp.1 xrdmapc.1)
      MESSAGE( "-- Processing: " $ENV{DESTDIR}//home/diagoras/root_cern/root/builddir/share/man/man1/${MANPAGE} )
      EXECUTE_PROCESS(
        COMMAND cat ${MANPAGE}
        COMMAND sed  -e "s/__VERSION__/v4.12.8/"
        OUTPUT_FILE ${MANPAGE}.new
        WORKING_DIRECTORY $ENV{DESTDIR}//home/diagoras/root_cern/root/builddir/share/man/man1 )
      EXECUTE_PROCESS(
        COMMAND mv -f ${MANPAGE}.new ${MANPAGE}
        WORKING_DIRECTORY $ENV{DESTDIR}//home/diagoras/root_cern/root/builddir/share/man/man1 )
    ENDFOREACH()
endif()

