# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build

# Utility rule file for XrdVersion.hh.

# Include the progress variables for this target.
include CMakeFiles/XrdVersion.hh.dir/progress.make

CMakeFiles/XrdVersion.hh:
	/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/genversion.sh --version v4.12.8 /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD

XrdVersion.hh: CMakeFiles/XrdVersion.hh
XrdVersion.hh: CMakeFiles/XrdVersion.hh.dir/build.make

.PHONY : XrdVersion.hh

# Rule to build all files generated by this target.
CMakeFiles/XrdVersion.hh.dir/build: XrdVersion.hh

.PHONY : CMakeFiles/XrdVersion.hh.dir/build

CMakeFiles/XrdVersion.hh.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/XrdVersion.hh.dir/cmake_clean.cmake
.PHONY : CMakeFiles/XrdVersion.hh.dir/clean

CMakeFiles/XrdVersion.hh.dir/depend:
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/CMakeFiles/XrdVersion.hh.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/XrdVersion.hh.dir/depend

