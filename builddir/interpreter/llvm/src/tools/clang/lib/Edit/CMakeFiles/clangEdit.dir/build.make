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
include interpreter/llvm/src/tools/clang/lib/Edit/CMakeFiles/clangEdit.dir/depend.make

# Include the progress variables for this target.
include interpreter/llvm/src/tools/clang/lib/Edit/CMakeFiles/clangEdit.dir/progress.make

# Include the compile flags for this target's objects.
include interpreter/llvm/src/tools/clang/lib/Edit/CMakeFiles/clangEdit.dir/flags.make

# Object files for target clangEdit
clangEdit_OBJECTS =

# External object files for target clangEdit
clangEdit_EXTERNAL_OBJECTS = \
"/home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/lib/Edit/CMakeFiles/obj.clangEdit.dir/Commit.cpp.o" \
"/home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/lib/Edit/CMakeFiles/obj.clangEdit.dir/EditedSource.cpp.o" \
"/home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/lib/Edit/CMakeFiles/obj.clangEdit.dir/RewriteObjCFoundationAPI.cpp.o"

interpreter/llvm/src/lib/libclangEdit.a: interpreter/llvm/src/tools/clang/lib/Edit/CMakeFiles/obj.clangEdit.dir/Commit.cpp.o
interpreter/llvm/src/lib/libclangEdit.a: interpreter/llvm/src/tools/clang/lib/Edit/CMakeFiles/obj.clangEdit.dir/EditedSource.cpp.o
interpreter/llvm/src/lib/libclangEdit.a: interpreter/llvm/src/tools/clang/lib/Edit/CMakeFiles/obj.clangEdit.dir/RewriteObjCFoundationAPI.cpp.o
interpreter/llvm/src/lib/libclangEdit.a: interpreter/llvm/src/tools/clang/lib/Edit/CMakeFiles/clangEdit.dir/build.make
interpreter/llvm/src/lib/libclangEdit.a: interpreter/llvm/src/tools/clang/lib/Edit/CMakeFiles/clangEdit.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Linking CXX static library ../../../../lib/libclangEdit.a"
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/lib/Edit && $(CMAKE_COMMAND) -P CMakeFiles/clangEdit.dir/cmake_clean_target.cmake
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/lib/Edit && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/clangEdit.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
interpreter/llvm/src/tools/clang/lib/Edit/CMakeFiles/clangEdit.dir/build: interpreter/llvm/src/lib/libclangEdit.a

.PHONY : interpreter/llvm/src/tools/clang/lib/Edit/CMakeFiles/clangEdit.dir/build

interpreter/llvm/src/tools/clang/lib/Edit/CMakeFiles/clangEdit.dir/clean:
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/lib/Edit && $(CMAKE_COMMAND) -P CMakeFiles/clangEdit.dir/cmake_clean.cmake
.PHONY : interpreter/llvm/src/tools/clang/lib/Edit/CMakeFiles/clangEdit.dir/clean

interpreter/llvm/src/tools/clang/lib/Edit/CMakeFiles/clangEdit.dir/depend:
	cd /home/diagoras/root_cern/root/builddir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diagoras/root_cern/root /home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Edit /home/diagoras/root_cern/root/builddir /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/lib/Edit /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/lib/Edit/CMakeFiles/clangEdit.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : interpreter/llvm/src/tools/clang/lib/Edit/CMakeFiles/clangEdit.dir/depend

