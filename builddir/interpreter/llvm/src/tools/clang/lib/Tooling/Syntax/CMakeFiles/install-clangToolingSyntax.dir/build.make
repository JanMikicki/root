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

# Utility rule file for install-clangToolingSyntax.

# Include the progress variables for this target.
include interpreter/llvm/src/tools/clang/lib/Tooling/Syntax/CMakeFiles/install-clangToolingSyntax.dir/progress.make

interpreter/llvm/src/tools/clang/lib/Tooling/Syntax/CMakeFiles/install-clangToolingSyntax:
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/lib/Tooling/Syntax && /usr/bin/cmake -DCMAKE_INSTALL_COMPONENT="clangToolingSyntax" -P /home/diagoras/root_cern/root/builddir/cmake_install.cmake

install-clangToolingSyntax: interpreter/llvm/src/tools/clang/lib/Tooling/Syntax/CMakeFiles/install-clangToolingSyntax
install-clangToolingSyntax: interpreter/llvm/src/tools/clang/lib/Tooling/Syntax/CMakeFiles/install-clangToolingSyntax.dir/build.make

.PHONY : install-clangToolingSyntax

# Rule to build all files generated by this target.
interpreter/llvm/src/tools/clang/lib/Tooling/Syntax/CMakeFiles/install-clangToolingSyntax.dir/build: install-clangToolingSyntax

.PHONY : interpreter/llvm/src/tools/clang/lib/Tooling/Syntax/CMakeFiles/install-clangToolingSyntax.dir/build

interpreter/llvm/src/tools/clang/lib/Tooling/Syntax/CMakeFiles/install-clangToolingSyntax.dir/clean:
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/lib/Tooling/Syntax && $(CMAKE_COMMAND) -P CMakeFiles/install-clangToolingSyntax.dir/cmake_clean.cmake
.PHONY : interpreter/llvm/src/tools/clang/lib/Tooling/Syntax/CMakeFiles/install-clangToolingSyntax.dir/clean

interpreter/llvm/src/tools/clang/lib/Tooling/Syntax/CMakeFiles/install-clangToolingSyntax.dir/depend:
	cd /home/diagoras/root_cern/root/builddir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diagoras/root_cern/root /home/diagoras/root_cern/root/interpreter/llvm/src/tools/clang/lib/Tooling/Syntax /home/diagoras/root_cern/root/builddir /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/lib/Tooling/Syntax /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/tools/clang/lib/Tooling/Syntax/CMakeFiles/install-clangToolingSyntax.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : interpreter/llvm/src/tools/clang/lib/Tooling/Syntax/CMakeFiles/install-clangToolingSyntax.dir/depend

