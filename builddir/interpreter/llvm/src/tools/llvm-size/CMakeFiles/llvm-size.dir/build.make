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
include interpreter/llvm/src/tools/llvm-size/CMakeFiles/llvm-size.dir/depend.make

# Include the progress variables for this target.
include interpreter/llvm/src/tools/llvm-size/CMakeFiles/llvm-size.dir/progress.make

# Include the compile flags for this target's objects.
include interpreter/llvm/src/tools/llvm-size/CMakeFiles/llvm-size.dir/flags.make

interpreter/llvm/src/tools/llvm-size/CMakeFiles/llvm-size.dir/llvm-size.cpp.o: interpreter/llvm/src/tools/llvm-size/CMakeFiles/llvm-size.dir/flags.make
interpreter/llvm/src/tools/llvm-size/CMakeFiles/llvm-size.dir/llvm-size.cpp.o: ../interpreter/llvm/src/tools/llvm-size/llvm-size.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object interpreter/llvm/src/tools/llvm-size/CMakeFiles/llvm-size.dir/llvm-size.cpp.o"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/llvm-size && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/llvm-size.dir/llvm-size.cpp.o -c /home/diagoras/root_cern/root/interpreter/llvm/src/tools/llvm-size/llvm-size.cpp

interpreter/llvm/src/tools/llvm-size/CMakeFiles/llvm-size.dir/llvm-size.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/llvm-size.dir/llvm-size.cpp.i"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/llvm-size && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/interpreter/llvm/src/tools/llvm-size/llvm-size.cpp > CMakeFiles/llvm-size.dir/llvm-size.cpp.i

interpreter/llvm/src/tools/llvm-size/CMakeFiles/llvm-size.dir/llvm-size.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/llvm-size.dir/llvm-size.cpp.s"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/llvm-size && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/interpreter/llvm/src/tools/llvm-size/llvm-size.cpp -o CMakeFiles/llvm-size.dir/llvm-size.cpp.s

# Object files for target llvm-size
llvm__size_OBJECTS = \
"CMakeFiles/llvm-size.dir/llvm-size.cpp.o"

# External object files for target llvm-size
llvm__size_EXTERNAL_OBJECTS =

interpreter/llvm/src/bin/llvm-size: interpreter/llvm/src/tools/llvm-size/CMakeFiles/llvm-size.dir/llvm-size.cpp.o
interpreter/llvm/src/bin/llvm-size: interpreter/llvm/src/tools/llvm-size/CMakeFiles/llvm-size.dir/build.make
interpreter/llvm/src/bin/llvm-size: interpreter/llvm/src/lib/libLLVMObject.a
interpreter/llvm/src/bin/llvm-size: interpreter/llvm/src/lib/libLLVMSupport.a
interpreter/llvm/src/bin/llvm-size: interpreter/llvm/src/lib/libLLVMBitReader.a
interpreter/llvm/src/bin/llvm-size: interpreter/llvm/src/lib/libLLVMBitstreamReader.a
interpreter/llvm/src/bin/llvm-size: interpreter/llvm/src/lib/libLLVMCore.a
interpreter/llvm/src/bin/llvm-size: interpreter/llvm/src/lib/libLLVMRemarks.a
interpreter/llvm/src/bin/llvm-size: interpreter/llvm/src/lib/libLLVMMCParser.a
interpreter/llvm/src/bin/llvm-size: interpreter/llvm/src/lib/libLLVMMC.a
interpreter/llvm/src/bin/llvm-size: interpreter/llvm/src/lib/libLLVMBinaryFormat.a
interpreter/llvm/src/bin/llvm-size: interpreter/llvm/src/lib/libLLVMDebugInfoCodeView.a
interpreter/llvm/src/bin/llvm-size: interpreter/llvm/src/lib/libLLVMDebugInfoMSF.a
interpreter/llvm/src/bin/llvm-size: interpreter/llvm/src/lib/libLLVMSupport.a
interpreter/llvm/src/bin/llvm-size: interpreter/llvm/src/lib/libLLVMDemangle.a
interpreter/llvm/src/bin/llvm-size: interpreter/llvm/src/tools/llvm-size/CMakeFiles/llvm-size.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ../../bin/llvm-size"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/llvm-size && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/llvm-size.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
interpreter/llvm/src/tools/llvm-size/CMakeFiles/llvm-size.dir/build: interpreter/llvm/src/bin/llvm-size

.PHONY : interpreter/llvm/src/tools/llvm-size/CMakeFiles/llvm-size.dir/build

interpreter/llvm/src/tools/llvm-size/CMakeFiles/llvm-size.dir/clean:
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/llvm-size && $(CMAKE_COMMAND) -P CMakeFiles/llvm-size.dir/cmake_clean.cmake
.PHONY : interpreter/llvm/src/tools/llvm-size/CMakeFiles/llvm-size.dir/clean

interpreter/llvm/src/tools/llvm-size/CMakeFiles/llvm-size.dir/depend:
	cd /home/diagoras/root_cern/root/builddir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diagoras/root_cern/root /home/diagoras/root_cern/root/interpreter/llvm/src/tools/llvm-size /home/diagoras/root_cern/root/builddir /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/llvm-size /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/llvm-size/CMakeFiles/llvm-size.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : interpreter/llvm/src/tools/llvm-size/CMakeFiles/llvm-size.dir/depend

