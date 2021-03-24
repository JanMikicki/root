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
CMAKE_SOURCE_DIR = /home/diagoras/root_cern/root

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/diagoras/root_cern/root/builddir

# Include any dependencies generated for this target.
include core/clingutils/CMakeFiles/vectorDict.dir/depend.make

# Include the progress variables for this target.
include core/clingutils/CMakeFiles/vectorDict.dir/progress.make

# Include the compile flags for this target's objects.
include core/clingutils/CMakeFiles/vectorDict.dir/flags.make

core/clingutils/dummy.cxx:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating dummy.cxx"
	cd /home/diagoras/root_cern/root/builddir/core/clingutils && /usr/bin/cmake -E touch dummy.cxx

core/clingutils/CMakeFiles/vectorDict.dir/dummy.cxx.o: core/clingutils/CMakeFiles/vectorDict.dir/flags.make
core/clingutils/CMakeFiles/vectorDict.dir/dummy.cxx.o: core/clingutils/dummy.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object core/clingutils/CMakeFiles/vectorDict.dir/dummy.cxx.o"
	cd /home/diagoras/root_cern/root/builddir/core/clingutils && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vectorDict.dir/dummy.cxx.o -c /home/diagoras/root_cern/root/builddir/core/clingutils/dummy.cxx

core/clingutils/CMakeFiles/vectorDict.dir/dummy.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vectorDict.dir/dummy.cxx.i"
	cd /home/diagoras/root_cern/root/builddir/core/clingutils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/builddir/core/clingutils/dummy.cxx > CMakeFiles/vectorDict.dir/dummy.cxx.i

core/clingutils/CMakeFiles/vectorDict.dir/dummy.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vectorDict.dir/dummy.cxx.s"
	cd /home/diagoras/root_cern/root/builddir/core/clingutils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/builddir/core/clingutils/dummy.cxx -o CMakeFiles/vectorDict.dir/dummy.cxx.s

# Object files for target vectorDict
vectorDict_OBJECTS = \
"CMakeFiles/vectorDict.dir/dummy.cxx.o"

# External object files for target vectorDict
vectorDict_EXTERNAL_OBJECTS = \
"/home/diagoras/root_cern/root/builddir/core/clingutils/CMakeFiles/G__vectorDict.dir/G__vectorDict.cxx.o"

lib/libvectorDict.so: core/clingutils/CMakeFiles/vectorDict.dir/dummy.cxx.o
lib/libvectorDict.so: core/clingutils/CMakeFiles/G__vectorDict.dir/G__vectorDict.cxx.o
lib/libvectorDict.so: core/clingutils/CMakeFiles/vectorDict.dir/build.make
lib/libvectorDict.so: lib/libCore.so
lib/libvectorDict.so: core/clingutils/CMakeFiles/vectorDict.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library ../../lib/libvectorDict.so"
	cd /home/diagoras/root_cern/root/builddir/core/clingutils && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vectorDict.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
core/clingutils/CMakeFiles/vectorDict.dir/build: lib/libvectorDict.so

.PHONY : core/clingutils/CMakeFiles/vectorDict.dir/build

core/clingutils/CMakeFiles/vectorDict.dir/clean:
	cd /home/diagoras/root_cern/root/builddir/core/clingutils && $(CMAKE_COMMAND) -P CMakeFiles/vectorDict.dir/cmake_clean.cmake
.PHONY : core/clingutils/CMakeFiles/vectorDict.dir/clean

core/clingutils/CMakeFiles/vectorDict.dir/depend: core/clingutils/dummy.cxx
	cd /home/diagoras/root_cern/root/builddir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diagoras/root_cern/root /home/diagoras/root_cern/root/core/clingutils /home/diagoras/root_cern/root/builddir /home/diagoras/root_cern/root/builddir/core/clingutils /home/diagoras/root_cern/root/builddir/core/clingutils/CMakeFiles/vectorDict.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : core/clingutils/CMakeFiles/vectorDict.dir/depend

