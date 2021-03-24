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

# Include any dependencies generated for this target.
include src/CMakeFiles/XrdHttp-4.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/XrdHttp-4.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/XrdHttp-4.dir/flags.make

src/CMakeFiles/XrdHttp-4.dir/XrdHttp/XrdHttpModule.cc.o: src/CMakeFiles/XrdHttp-4.dir/flags.make
src/CMakeFiles/XrdHttp-4.dir/XrdHttp/XrdHttpModule.cc.o: /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdHttp/XrdHttpModule.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/XrdHttp-4.dir/XrdHttp/XrdHttpModule.cc.o"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/XrdHttp-4.dir/XrdHttp/XrdHttpModule.cc.o -c /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdHttp/XrdHttpModule.cc

src/CMakeFiles/XrdHttp-4.dir/XrdHttp/XrdHttpModule.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XrdHttp-4.dir/XrdHttp/XrdHttpModule.cc.i"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdHttp/XrdHttpModule.cc > CMakeFiles/XrdHttp-4.dir/XrdHttp/XrdHttpModule.cc.i

src/CMakeFiles/XrdHttp-4.dir/XrdHttp/XrdHttpModule.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XrdHttp-4.dir/XrdHttp/XrdHttpModule.cc.s"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdHttp/XrdHttpModule.cc -o CMakeFiles/XrdHttp-4.dir/XrdHttp/XrdHttpModule.cc.s

# Object files for target XrdHttp-4
XrdHttp__4_OBJECTS = \
"CMakeFiles/XrdHttp-4.dir/XrdHttp/XrdHttpModule.cc.o"

# External object files for target XrdHttp-4
XrdHttp__4_EXTERNAL_OBJECTS =

src/libXrdHttp-4.so: src/CMakeFiles/XrdHttp-4.dir/XrdHttp/XrdHttpModule.cc.o
src/libXrdHttp-4.so: src/CMakeFiles/XrdHttp-4.dir/build.make
src/libXrdHttp-4.so: src/libXrdHttpUtils.so.1.0.0
src/libXrdHttp-4.so: src/libXrdUtils.so.2.0.0
src/libXrdHttp-4.so: src/CMakeFiles/XrdHttp-4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared module libXrdHttp-4.so"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/XrdHttp-4.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/XrdHttp-4.dir/build: src/libXrdHttp-4.so

.PHONY : src/CMakeFiles/XrdHttp-4.dir/build

src/CMakeFiles/XrdHttp-4.dir/clean:
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && $(CMAKE_COMMAND) -P CMakeFiles/XrdHttp-4.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/XrdHttp-4.dir/clean

src/CMakeFiles/XrdHttp-4.dir/depend:
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src/CMakeFiles/XrdHttp-4.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/XrdHttp-4.dir/depend

