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
include interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/depend.make

# Include the progress variables for this target.
include interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/progress.make

# Include the compile flags for this target's objects.
include interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/flags.make

interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/Demangle.cpp.o: interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/flags.make
interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/Demangle.cpp.o: ../interpreter/llvm/src/lib/Demangle/Demangle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/Demangle.cpp.o"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/Demangle && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMDemangle.dir/Demangle.cpp.o -c /home/diagoras/root_cern/root/interpreter/llvm/src/lib/Demangle/Demangle.cpp

interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/Demangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMDemangle.dir/Demangle.cpp.i"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/Demangle && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/interpreter/llvm/src/lib/Demangle/Demangle.cpp > CMakeFiles/LLVMDemangle.dir/Demangle.cpp.i

interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/Demangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMDemangle.dir/Demangle.cpp.s"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/Demangle && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/interpreter/llvm/src/lib/Demangle/Demangle.cpp -o CMakeFiles/LLVMDemangle.dir/Demangle.cpp.s

interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/ItaniumDemangle.cpp.o: interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/flags.make
interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/ItaniumDemangle.cpp.o: ../interpreter/llvm/src/lib/Demangle/ItaniumDemangle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/ItaniumDemangle.cpp.o"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/Demangle && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMDemangle.dir/ItaniumDemangle.cpp.o -c /home/diagoras/root_cern/root/interpreter/llvm/src/lib/Demangle/ItaniumDemangle.cpp

interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/ItaniumDemangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMDemangle.dir/ItaniumDemangle.cpp.i"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/Demangle && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/interpreter/llvm/src/lib/Demangle/ItaniumDemangle.cpp > CMakeFiles/LLVMDemangle.dir/ItaniumDemangle.cpp.i

interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/ItaniumDemangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMDemangle.dir/ItaniumDemangle.cpp.s"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/Demangle && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/interpreter/llvm/src/lib/Demangle/ItaniumDemangle.cpp -o CMakeFiles/LLVMDemangle.dir/ItaniumDemangle.cpp.s

interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/MicrosoftDemangle.cpp.o: interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/flags.make
interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/MicrosoftDemangle.cpp.o: ../interpreter/llvm/src/lib/Demangle/MicrosoftDemangle.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/MicrosoftDemangle.cpp.o"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/Demangle && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMDemangle.dir/MicrosoftDemangle.cpp.o -c /home/diagoras/root_cern/root/interpreter/llvm/src/lib/Demangle/MicrosoftDemangle.cpp

interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/MicrosoftDemangle.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMDemangle.dir/MicrosoftDemangle.cpp.i"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/Demangle && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/interpreter/llvm/src/lib/Demangle/MicrosoftDemangle.cpp > CMakeFiles/LLVMDemangle.dir/MicrosoftDemangle.cpp.i

interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/MicrosoftDemangle.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMDemangle.dir/MicrosoftDemangle.cpp.s"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/Demangle && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/interpreter/llvm/src/lib/Demangle/MicrosoftDemangle.cpp -o CMakeFiles/LLVMDemangle.dir/MicrosoftDemangle.cpp.s

interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/MicrosoftDemangleNodes.cpp.o: interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/flags.make
interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/MicrosoftDemangleNodes.cpp.o: ../interpreter/llvm/src/lib/Demangle/MicrosoftDemangleNodes.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/MicrosoftDemangleNodes.cpp.o"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/Demangle && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LLVMDemangle.dir/MicrosoftDemangleNodes.cpp.o -c /home/diagoras/root_cern/root/interpreter/llvm/src/lib/Demangle/MicrosoftDemangleNodes.cpp

interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/MicrosoftDemangleNodes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LLVMDemangle.dir/MicrosoftDemangleNodes.cpp.i"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/Demangle && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/interpreter/llvm/src/lib/Demangle/MicrosoftDemangleNodes.cpp > CMakeFiles/LLVMDemangle.dir/MicrosoftDemangleNodes.cpp.i

interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/MicrosoftDemangleNodes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LLVMDemangle.dir/MicrosoftDemangleNodes.cpp.s"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/Demangle && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/interpreter/llvm/src/lib/Demangle/MicrosoftDemangleNodes.cpp -o CMakeFiles/LLVMDemangle.dir/MicrosoftDemangleNodes.cpp.s

# Object files for target LLVMDemangle
LLVMDemangle_OBJECTS = \
"CMakeFiles/LLVMDemangle.dir/Demangle.cpp.o" \
"CMakeFiles/LLVMDemangle.dir/ItaniumDemangle.cpp.o" \
"CMakeFiles/LLVMDemangle.dir/MicrosoftDemangle.cpp.o" \
"CMakeFiles/LLVMDemangle.dir/MicrosoftDemangleNodes.cpp.o"

# External object files for target LLVMDemangle
LLVMDemangle_EXTERNAL_OBJECTS =

interpreter/llvm/src/lib/libLLVMDemangle.a: interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/Demangle.cpp.o
interpreter/llvm/src/lib/libLLVMDemangle.a: interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/ItaniumDemangle.cpp.o
interpreter/llvm/src/lib/libLLVMDemangle.a: interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/MicrosoftDemangle.cpp.o
interpreter/llvm/src/lib/libLLVMDemangle.a: interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/MicrosoftDemangleNodes.cpp.o
interpreter/llvm/src/lib/libLLVMDemangle.a: interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/build.make
interpreter/llvm/src/lib/libLLVMDemangle.a: interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX static library ../libLLVMDemangle.a"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/Demangle && $(CMAKE_COMMAND) -P CMakeFiles/LLVMDemangle.dir/cmake_clean_target.cmake
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/Demangle && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LLVMDemangle.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/build: interpreter/llvm/src/lib/libLLVMDemangle.a

.PHONY : interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/build

interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/clean:
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/Demangle && $(CMAKE_COMMAND) -P CMakeFiles/LLVMDemangle.dir/cmake_clean.cmake
.PHONY : interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/clean

interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/depend:
	cd /home/diagoras/root_cern/root/builddir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diagoras/root_cern/root /home/diagoras/root_cern/root/interpreter/llvm/src/lib/Demangle /home/diagoras/root_cern/root/builddir /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/Demangle /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : interpreter/llvm/src/lib/Demangle/CMakeFiles/LLVMDemangle.dir/depend

