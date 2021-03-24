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
include core/clingutils/CMakeFiles/unordered_mapDict.dir/depend.make

# Include the progress variables for this target.
include core/clingutils/CMakeFiles/unordered_mapDict.dir/progress.make

# Include the compile flags for this target's objects.
include core/clingutils/CMakeFiles/unordered_mapDict.dir/flags.make

core/clingutils/dummy.cxx:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating dummy.cxx"
	cd /home/diagoras/root_cern/root/builddir/core/clingutils && /usr/bin/cmake -E touch dummy.cxx

core/clingutils/CMakeFiles/unordered_mapDict.dir/dummy.cxx.o: core/clingutils/CMakeFiles/unordered_mapDict.dir/flags.make
core/clingutils/CMakeFiles/unordered_mapDict.dir/dummy.cxx.o: core/clingutils/dummy.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object core/clingutils/CMakeFiles/unordered_mapDict.dir/dummy.cxx.o"
	cd /home/diagoras/root_cern/root/builddir/core/clingutils && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/unordered_mapDict.dir/dummy.cxx.o -c /home/diagoras/root_cern/root/builddir/core/clingutils/dummy.cxx

core/clingutils/CMakeFiles/unordered_mapDict.dir/dummy.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unordered_mapDict.dir/dummy.cxx.i"
	cd /home/diagoras/root_cern/root/builddir/core/clingutils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/builddir/core/clingutils/dummy.cxx > CMakeFiles/unordered_mapDict.dir/dummy.cxx.i

core/clingutils/CMakeFiles/unordered_mapDict.dir/dummy.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unordered_mapDict.dir/dummy.cxx.s"
	cd /home/diagoras/root_cern/root/builddir/core/clingutils && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/builddir/core/clingutils/dummy.cxx -o CMakeFiles/unordered_mapDict.dir/dummy.cxx.s

# Object files for target unordered_mapDict
unordered_mapDict_OBJECTS = \
"CMakeFiles/unordered_mapDict.dir/dummy.cxx.o"

# External object files for target unordered_mapDict
unordered_mapDict_EXTERNAL_OBJECTS = \
"/home/diagoras/root_cern/root/builddir/core/clingutils/CMakeFiles/G__unordered_mapDict.dir/G__unordered_mapDict.cxx.o"

lib/libunordered_mapDict.so: core/clingutils/CMakeFiles/unordered_mapDict.dir/dummy.cxx.o
lib/libunordered_mapDict.so: core/clingutils/CMakeFiles/G__unordered_mapDict.dir/G__unordered_mapDict.cxx.o
lib/libunordered_mapDict.so: core/clingutils/CMakeFiles/unordered_mapDict.dir/build.make
lib/libunordered_mapDict.so: lib/libCore.so
lib/libunordered_mapDict.so: core/clingutils/CMakeFiles/unordered_mapDict.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library ../../lib/libunordered_mapDict.so"
	cd /home/diagoras/root_cern/root/builddir/core/clingutils && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/unordered_mapDict.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
core/clingutils/CMakeFiles/unordered_mapDict.dir/build: lib/libunordered_mapDict.so

.PHONY : core/clingutils/CMakeFiles/unordered_mapDict.dir/build

core/clingutils/CMakeFiles/unordered_mapDict.dir/clean:
	cd /home/diagoras/root_cern/root/builddir/core/clingutils && $(CMAKE_COMMAND) -P CMakeFiles/unordered_mapDict.dir/cmake_clean.cmake
.PHONY : core/clingutils/CMakeFiles/unordered_mapDict.dir/clean

core/clingutils/CMakeFiles/unordered_mapDict.dir/depend: core/clingutils/dummy.cxx
	cd /home/diagoras/root_cern/root/builddir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diagoras/root_cern/root /home/diagoras/root_cern/root/core/clingutils /home/diagoras/root_cern/root/builddir /home/diagoras/root_cern/root/builddir/core/clingutils /home/diagoras/root_cern/root/builddir/core/clingutils/CMakeFiles/unordered_mapDict.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : core/clingutils/CMakeFiles/unordered_mapDict.dir/depend

