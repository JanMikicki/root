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
include interpreter/llvm/src/lib/Linker/CMakeFiles/LLVMLinker.dir/depend.make

# Include the progress variables for this target.
include interpreter/llvm/src/lib/Linker/CMakeFiles/LLVMLinker.dir/progress.make

# Include the compile flags for this target's objects.
include interpreter/llvm/src/lib/Linker/CMakeFiles/LLVMLinker.dir/flags.make

interpreter/llvm/src/lib/Linker/CMakeFiles/LLVMLinker.dir/IRMover.cpp.o: interpreter/llvm/src/lib/Linker/CMakeFiles/LLVMLinker.dir/flags.make
interpreter/llvm/src/lib/Linker/CMakeFiles/LLVMLinker.dir/IRMover.cpp.o: ../interpreter/llvm/src/lib/Linker/IRMover.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object interpreter/llvm/src/lib/Linker/CMakeFiles/LLVMLinker.dir/IRMover.cpp.o"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/Linker && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMLinker.dir/IRMover.cpp.o -c /home/diagoras/root_cern/root/interpreter/llvm/src/lib/Linker/IRMover.cpp

interpreter/llvm/src/lib/Linker/CMakeFiles/LLVMLinker.dir/IRMover.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMLinker.dir/IRMover.cpp.i"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/Linker && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/interpreter/llvm/src/lib/Linker/IRMover.cpp > CMakeFiles/LLVMLinker.dir/IRMover.cpp.i

interpreter/llvm/src/lib/Linker/CMakeFiles/LLVMLinker.dir/IRMover.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMLinker.dir/IRMover.cpp.s"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/Linker && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/interpreter/llvm/src/lib/Linker/IRMover.cpp -o CMakeFiles/LLVMLinker.dir/IRMover.cpp.s

interpreter/llvm/src/lib/Linker/CMakeFiles/LLVMLinker.dir/LinkModules.cpp.o: interpreter/llvm/src/lib/Linker/CMakeFiles/LLVMLinker.dir/flags.make
interpreter/llvm/src/lib/Linker/CMakeFiles/LLVMLinker.dir/LinkModules.cpp.o: ../interpreter/llvm/src/lib/Linker/LinkModules.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object interpreter/llvm/src/lib/Linker/CMakeFiles/LLVMLinker.dir/LinkModules.cpp.o"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/Linker && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMLinker.dir/LinkModules.cpp.o -c /home/diagoras/root_cern/root/interpreter/llvm/src/lib/Linker/LinkModules.cpp

interpreter/llvm/src/lib/Linker/CMakeFiles/LLVMLinker.dir/LinkModules.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMLinker.dir/LinkModules.cpp.i"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/Linker && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/interpreter/llvm/src/lib/Linker/LinkModules.cpp > CMakeFiles/LLVMLinker.dir/LinkModules.cpp.i

interpreter/llvm/src/lib/Linker/CMakeFiles/LLVMLinker.dir/LinkModules.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMLinker.dir/LinkModules.cpp.s"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/Linker && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/interpreter/llvm/src/lib/Linker/LinkModules.cpp -o CMakeFiles/LLVMLinker.dir/LinkModules.cpp.s

# Object files for target LLVMLinker
LLVMLinker_OBJECTS = \
"CMakeFiles/LLVMLinker.dir/IRMover.cpp.o" \
"CMakeFiles/LLVMLinker.dir/LinkModules.cpp.o"

# External object files for target LLVMLinker
LLVMLinker_EXTERNAL_OBJECTS =

interpreter/llvm/src/lib/libLLVMLinker.a: interpreter/llvm/src/lib/Linker/CMakeFiles/LLVMLinker.dir/IRMover.cpp.o
interpreter/llvm/src/lib/libLLVMLinker.a: interpreter/llvm/src/lib/Linker/CMakeFiles/LLVMLinker.dir/LinkModules.cpp.o
interpreter/llvm/src/lib/libLLVMLinker.a: interpreter/llvm/src/lib/Linker/CMakeFiles/LLVMLinker.dir/build.make
interpreter/llvm/src/lib/libLLVMLinker.a: interpreter/llvm/src/lib/Linker/CMakeFiles/LLVMLinker.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX static library ../libLLVMLinker.a"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/Linker && $(CMAKE_COMMAND) -P CMakeFiles/LLVMLinker.dir/cmake_clean_target.cmake
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/Linker && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMLinker.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
interpreter/llvm/src/lib/Linker/CMakeFiles/LLVMLinker.dir/build: interpreter/llvm/src/lib/libLLVMLinker.a

.PHONY : interpreter/llvm/src/lib/Linker/CMakeFiles/LLVMLinker.dir/build

interpreter/llvm/src/lib/Linker/CMakeFiles/LLVMLinker.dir/clean:
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/Linker && $(CMAKE_COMMAND) -P CMakeFiles/LLVMLinker.dir/cmake_clean.cmake
.PHONY : interpreter/llvm/src/lib/Linker/CMakeFiles/LLVMLinker.dir/clean

interpreter/llvm/src/lib/Linker/CMakeFiles/LLVMLinker.dir/depend:
	cd /home/diagoras/root_cern/root/builddir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diagoras/root_cern/root /home/diagoras/root_cern/root/interpreter/llvm/src/lib/Linker /home/diagoras/root_cern/root/builddir /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/Linker /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/Linker/CMakeFiles/LLVMLinker.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : interpreter/llvm/src/lib/Linker/CMakeFiles/LLVMLinker.dir/depend

