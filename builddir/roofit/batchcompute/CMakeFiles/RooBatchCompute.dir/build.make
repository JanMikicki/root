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
include roofit/batchcompute/CMakeFiles/RooBatchCompute.dir/depend.make

# Include the progress variables for this target.
include roofit/batchcompute/CMakeFiles/RooBatchCompute.dir/progress.make

# Include the compile flags for this target's objects.
include roofit/batchcompute/CMakeFiles/RooBatchCompute.dir/flags.make

roofit/batchcompute/CMakeFiles/RooBatchCompute.dir/src/Initialisation.cxx.o: roofit/batchcompute/CMakeFiles/RooBatchCompute.dir/flags.make
roofit/batchcompute/CMakeFiles/RooBatchCompute.dir/src/Initialisation.cxx.o: ../roofit/batchcompute/src/Initialisation.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object roofit/batchcompute/CMakeFiles/RooBatchCompute.dir/src/Initialisation.cxx.o"
	cd /home/diagoras/root_cern/root/builddir/roofit/batchcompute && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RooBatchCompute.dir/src/Initialisation.cxx.o -c /home/diagoras/root_cern/root/roofit/batchcompute/src/Initialisation.cxx

roofit/batchcompute/CMakeFiles/RooBatchCompute.dir/src/Initialisation.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RooBatchCompute.dir/src/Initialisation.cxx.i"
	cd /home/diagoras/root_cern/root/builddir/roofit/batchcompute && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/roofit/batchcompute/src/Initialisation.cxx > CMakeFiles/RooBatchCompute.dir/src/Initialisation.cxx.i

roofit/batchcompute/CMakeFiles/RooBatchCompute.dir/src/Initialisation.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RooBatchCompute.dir/src/Initialisation.cxx.s"
	cd /home/diagoras/root_cern/root/builddir/roofit/batchcompute && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/roofit/batchcompute/src/Initialisation.cxx -o CMakeFiles/RooBatchCompute.dir/src/Initialisation.cxx.s

roofit/batchcompute/CMakeFiles/RooBatchCompute.dir/src/RunContext.cxx.o: roofit/batchcompute/CMakeFiles/RooBatchCompute.dir/flags.make
roofit/batchcompute/CMakeFiles/RooBatchCompute.dir/src/RunContext.cxx.o: ../roofit/batchcompute/src/RunContext.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object roofit/batchcompute/CMakeFiles/RooBatchCompute.dir/src/RunContext.cxx.o"
	cd /home/diagoras/root_cern/root/builddir/roofit/batchcompute && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/RooBatchCompute.dir/src/RunContext.cxx.o -c /home/diagoras/root_cern/root/roofit/batchcompute/src/RunContext.cxx

roofit/batchcompute/CMakeFiles/RooBatchCompute.dir/src/RunContext.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RooBatchCompute.dir/src/RunContext.cxx.i"
	cd /home/diagoras/root_cern/root/builddir/roofit/batchcompute && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/roofit/batchcompute/src/RunContext.cxx > CMakeFiles/RooBatchCompute.dir/src/RunContext.cxx.i

roofit/batchcompute/CMakeFiles/RooBatchCompute.dir/src/RunContext.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RooBatchCompute.dir/src/RunContext.cxx.s"
	cd /home/diagoras/root_cern/root/builddir/roofit/batchcompute && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/roofit/batchcompute/src/RunContext.cxx -o CMakeFiles/RooBatchCompute.dir/src/RunContext.cxx.s

# Object files for target RooBatchCompute
RooBatchCompute_OBJECTS = \
"CMakeFiles/RooBatchCompute.dir/src/Initialisation.cxx.o" \
"CMakeFiles/RooBatchCompute.dir/src/RunContext.cxx.o"

# External object files for target RooBatchCompute
RooBatchCompute_EXTERNAL_OBJECTS =

lib/libRooBatchCompute.so: roofit/batchcompute/CMakeFiles/RooBatchCompute.dir/src/Initialisation.cxx.o
lib/libRooBatchCompute.so: roofit/batchcompute/CMakeFiles/RooBatchCompute.dir/src/RunContext.cxx.o
lib/libRooBatchCompute.so: roofit/batchcompute/CMakeFiles/RooBatchCompute.dir/build.make
lib/libRooBatchCompute.so: lib/libMathCore.so
lib/libRooBatchCompute.so: lib/libImt.so
lib/libRooBatchCompute.so: lib/libMultiProc.so
lib/libRooBatchCompute.so: lib/libNet.so
lib/libRooBatchCompute.so: lib/libRIO.so
lib/libRooBatchCompute.so: lib/libThread.so
lib/libRooBatchCompute.so: lib/libCore.so
lib/libRooBatchCompute.so: roofit/batchcompute/CMakeFiles/RooBatchCompute.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX shared library ../../lib/libRooBatchCompute.so"
	cd /home/diagoras/root_cern/root/builddir/roofit/batchcompute && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RooBatchCompute.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
roofit/batchcompute/CMakeFiles/RooBatchCompute.dir/build: lib/libRooBatchCompute.so

.PHONY : roofit/batchcompute/CMakeFiles/RooBatchCompute.dir/build

roofit/batchcompute/CMakeFiles/RooBatchCompute.dir/clean:
	cd /home/diagoras/root_cern/root/builddir/roofit/batchcompute && $(CMAKE_COMMAND) -P CMakeFiles/RooBatchCompute.dir/cmake_clean.cmake
.PHONY : roofit/batchcompute/CMakeFiles/RooBatchCompute.dir/clean

roofit/batchcompute/CMakeFiles/RooBatchCompute.dir/depend:
	cd /home/diagoras/root_cern/root/builddir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diagoras/root_cern/root /home/diagoras/root_cern/root/roofit/batchcompute /home/diagoras/root_cern/root/builddir /home/diagoras/root_cern/root/builddir/roofit/batchcompute /home/diagoras/root_cern/root/builddir/roofit/batchcompute/CMakeFiles/RooBatchCompute.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : roofit/batchcompute/CMakeFiles/RooBatchCompute.dir/depend

