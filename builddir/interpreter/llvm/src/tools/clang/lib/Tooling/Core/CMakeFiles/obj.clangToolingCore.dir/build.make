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
include interpreter/llvm/src/tools/clang/lib/Tooling/Core/CMakeFiles/obj.clangToolingCore.dir/depend.make

# Include the progress variables for this target.
include interpreter/llvm/src/tools/clang/lib/Tooling/Core/CMakeFiles/obj.clangToolingCore.dir/progress.make

# Include the compile flags for this target's objects.
include interpreter/llvm/src/tools/clang/lib/Tooling/Core/CMakeFiles/obj.clangToolingCore.dir/flags.make

interpreter/llvm/src/tools/clang/lib/Tooling/Core/CMakeFiles/obj.clangToolingCore.dir/Diagnostic.cpp.o: interpreter/llvm/src/tools/clang/lib/Tooling/Core/CMakeFiles/obj.clangToolingCore.dir/flags.make
interpreter/llvm/src/tools/clang/lib/Tooling/Core/CMakeFiles/obj.clangToolingCore.dir/Diagnostic.cpp.o: ../interpreter/llvm/src/tools/clang/lib/Tooling/Core/Diagnostic.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object interpreter/llvm/src/tools/clang/lib/Tooling/Core/CMakeFiles/obj.clangToolingCore.dir/Diagnostic.cpp.o"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/lib/Tooling/Core && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/obj.clangToolingCore.dir/Diagnostic.cpp.o -c /home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Tooling/Core/Diagnostic.cpp

interpreter/llvm/src/tools/clang/lib/Tooling/Core/CMakeFiles/obj.clangToolingCore.dir/Diagnostic.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/obj.clangToolingCore.dir/Diagnostic.cpp.i"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/lib/Tooling/Core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Tooling/Core/Diagnostic.cpp > CMakeFiles/obj.clangToolingCore.dir/Diagnostic.cpp.i

interpreter/llvm/src/tools/clang/lib/Tooling/Core/CMakeFiles/obj.clangToolingCore.dir/Diagnostic.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/obj.clangToolingCore.dir/Diagnostic.cpp.s"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/lib/Tooling/Core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Tooling/Core/Diagnostic.cpp -o CMakeFiles/obj.clangToolingCore.dir/Diagnostic.cpp.s

interpreter/llvm/src/tools/clang/lib/Tooling/Core/CMakeFiles/obj.clangToolingCore.dir/Lookup.cpp.o: interpreter/llvm/src/tools/clang/lib/Tooling/Core/CMakeFiles/obj.clangToolingCore.dir/flags.make
interpreter/llvm/src/tools/clang/lib/Tooling/Core/CMakeFiles/obj.clangToolingCore.dir/Lookup.cpp.o: ../interpreter/llvm/src/tools/clang/lib/Tooling/Core/Lookup.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object interpreter/llvm/src/tools/clang/lib/Tooling/Core/CMakeFiles/obj.clangToolingCore.dir/Lookup.cpp.o"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/lib/Tooling/Core && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/obj.clangToolingCore.dir/Lookup.cpp.o -c /home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Tooling/Core/Lookup.cpp

interpreter/llvm/src/tools/clang/lib/Tooling/Core/CMakeFiles/obj.clangToolingCore.dir/Lookup.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/obj.clangToolingCore.dir/Lookup.cpp.i"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/lib/Tooling/Core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Tooling/Core/Lookup.cpp > CMakeFiles/obj.clangToolingCore.dir/Lookup.cpp.i

interpreter/llvm/src/tools/clang/lib/Tooling/Core/CMakeFiles/obj.clangToolingCore.dir/Lookup.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/obj.clangToolingCore.dir/Lookup.cpp.s"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/lib/Tooling/Core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Tooling/Core/Lookup.cpp -o CMakeFiles/obj.clangToolingCore.dir/Lookup.cpp.s

interpreter/llvm/src/tools/clang/lib/Tooling/Core/CMakeFiles/obj.clangToolingCore.dir/Replacement.cpp.o: interpreter/llvm/src/tools/clang/lib/Tooling/Core/CMakeFiles/obj.clangToolingCore.dir/flags.make
interpreter/llvm/src/tools/clang/lib/Tooling/Core/CMakeFiles/obj.clangToolingCore.dir/Replacement.cpp.o: ../interpreter/llvm/src/tools/clang/lib/Tooling/Core/Replacement.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object interpreter/llvm/src/tools/clang/lib/Tooling/Core/CMakeFiles/obj.clangToolingCore.dir/Replacement.cpp.o"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/lib/Tooling/Core && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/obj.clangToolingCore.dir/Replacement.cpp.o -c /home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Tooling/Core/Replacement.cpp

interpreter/llvm/src/tools/clang/lib/Tooling/Core/CMakeFiles/obj.clangToolingCore.dir/Replacement.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/obj.clangToolingCore.dir/Replacement.cpp.i"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/lib/Tooling/Core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Tooling/Core/Replacement.cpp > CMakeFiles/obj.clangToolingCore.dir/Replacement.cpp.i

interpreter/llvm/src/tools/clang/lib/Tooling/Core/CMakeFiles/obj.clangToolingCore.dir/Replacement.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/obj.clangToolingCore.dir/Replacement.cpp.s"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/lib/Tooling/Core && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Tooling/Core/Replacement.cpp -o CMakeFiles/obj.clangToolingCore.dir/Replacement.cpp.s

obj.clangToolingCore: interpreter/llvm/src/tools/clang/lib/Tooling/Core/CMakeFiles/obj.clangToolingCore.dir/Diagnostic.cpp.o
obj.clangToolingCore: interpreter/llvm/src/tools/clang/lib/Tooling/Core/CMakeFiles/obj.clangToolingCore.dir/Lookup.cpp.o
obj.clangToolingCore: interpreter/llvm/src/tools/clang/lib/Tooling/Core/CMakeFiles/obj.clangToolingCore.dir/Replacement.cpp.o
obj.clangToolingCore: interpreter/llvm/src/tools/clang/lib/Tooling/Core/CMakeFiles/obj.clangToolingCore.dir/build.make

.PHONY : obj.clangToolingCore

# Rule to build all files generated by this target.
interpreter/llvm/src/tools/clang/lib/Tooling/Core/CMakeFiles/obj.clangToolingCore.dir/build: obj.clangToolingCore

.PHONY : interpreter/llvm/src/tools/clang/lib/Tooling/Core/CMakeFiles/obj.clangToolingCore.dir/build

interpreter/llvm/src/tools/clang/lib/Tooling/Core/CMakeFiles/obj.clangToolingCore.dir/clean:
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/lib/Tooling/Core && $(CMAKE_COMMAND) -P CMakeFiles/obj.clangToolingCore.dir/cmake_clean.cmake
.PHONY : interpreter/llvm/src/tools/clang/lib/Tooling/Core/CMakeFiles/obj.clangToolingCore.dir/clean

interpreter/llvm/src/tools/clang/lib/Tooling/Core/CMakeFiles/obj.clangToolingCore.dir/depend:
	cd /home/diagoras/root_cern/root/builddir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diagoras/root_cern/root /home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Tooling/Core /home/diagoras/root_cern/root/builddir /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/lib/Tooling/Core /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/lib/Tooling/Core/CMakeFiles/obj.clangToolingCore.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : interpreter/llvm/src/tools/clang/lib/Tooling/Core/CMakeFiles/obj.clangToolingCore.dir/depend

