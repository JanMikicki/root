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
include interpreter/llvm/src/utils/yaml-bench/CMakeFiles/yaml-bench.dir/depend.make

# Include the progress variables for this target.
include interpreter/llvm/src/utils/yaml-bench/CMakeFiles/yaml-bench.dir/progress.make

# Include the compile flags for this target's objects.
include interpreter/llvm/src/utils/yaml-bench/CMakeFiles/yaml-bench.dir/flags.make

interpreter/llvm/src/utils/yaml-bench/CMakeFiles/yaml-bench.dir/YAMLBench.cpp.o: interpreter/llvm/src/utils/yaml-bench/CMakeFiles/yaml-bench.dir/flags.make
interpreter/llvm/src/utils/yaml-bench/CMakeFiles/yaml-bench.dir/YAMLBench.cpp.o: ../interpreter/llvm/src/utils/yaml-bench/YAMLBench.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object interpreter/llvm/src/utils/yaml-bench/CMakeFiles/yaml-bench.dir/YAMLBench.cpp.o"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/utils/yaml-bench && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/yaml-bench.dir/YAMLBench.cpp.o -c /home/diagoras/root_cern/root/interpreter/llvm/src/utils/yaml-bench/YAMLBench.cpp

interpreter/llvm/src/utils/yaml-bench/CMakeFiles/yaml-bench.dir/YAMLBench.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/yaml-bench.dir/YAMLBench.cpp.i"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/utils/yaml-bench && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/interpreter/llvm/src/utils/yaml-bench/YAMLBench.cpp > CMakeFiles/yaml-bench.dir/YAMLBench.cpp.i

interpreter/llvm/src/utils/yaml-bench/CMakeFiles/yaml-bench.dir/YAMLBench.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/yaml-bench.dir/YAMLBench.cpp.s"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/utils/yaml-bench && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/interpreter/llvm/src/utils/yaml-bench/YAMLBench.cpp -o CMakeFiles/yaml-bench.dir/YAMLBench.cpp.s

# Object files for target yaml-bench
yaml__bench_OBJECTS = \
"CMakeFiles/yaml-bench.dir/YAMLBench.cpp.o"

# External object files for target yaml-bench
yaml__bench_EXTERNAL_OBJECTS =

interpreter/llvm/src/bin/yaml-bench: interpreter/llvm/src/utils/yaml-bench/CMakeFiles/yaml-bench.dir/YAMLBench.cpp.o
interpreter/llvm/src/bin/yaml-bench: interpreter/llvm/src/utils/yaml-bench/CMakeFiles/yaml-bench.dir/build.make
interpreter/llvm/src/bin/yaml-bench: interpreter/llvm/src/lib/libLLVMSupport.a
interpreter/llvm/src/bin/yaml-bench: interpreter/llvm/src/lib/libLLVMDemangle.a
interpreter/llvm/src/bin/yaml-bench: interpreter/llvm/src/utils/yaml-bench/CMakeFiles/yaml-bench.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/yaml-bench"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/utils/yaml-bench && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/yaml-bench.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
interpreter/llvm/src/utils/yaml-bench/CMakeFiles/yaml-bench.dir/build: interpreter/llvm/src/bin/yaml-bench

.PHONY : interpreter/llvm/src/utils/yaml-bench/CMakeFiles/yaml-bench.dir/build

interpreter/llvm/src/utils/yaml-bench/CMakeFiles/yaml-bench.dir/clean:
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/utils/yaml-bench && $(CMAKE_COMMAND) -P CMakeFiles/yaml-bench.dir/cmake_clean.cmake
.PHONY : interpreter/llvm/src/utils/yaml-bench/CMakeFiles/yaml-bench.dir/clean

interpreter/llvm/src/utils/yaml-bench/CMakeFiles/yaml-bench.dir/depend:
	cd /home/diagoras/root_cern/root/builddir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diagoras/root_cern/root /home/diagoras/root_cern/root/interpreter/llvm/src/utils/yaml-bench /home/diagoras/root_cern/root/builddir /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/utils/yaml-bench /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/utils/yaml-bench/CMakeFiles/yaml-bench.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : interpreter/llvm/src/utils/yaml-bench/CMakeFiles/yaml-bench.dir/depend

