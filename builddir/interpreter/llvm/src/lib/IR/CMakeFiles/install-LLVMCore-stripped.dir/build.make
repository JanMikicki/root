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

# Utility rule file for install-LLVMCore-stripped.

# Include the progress variables for this target.
include interpreter/llvm/src/lib/IR/CMakeFiles/install-LLVMCore-stripped.dir/progress.make

interpreter/llvm/src/lib/IR/CMakeFiles/install-LLVMCore-stripped:
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/IR && /usr/bin/cmake -DCMAKE_INSTALL_COMPONENT="LLVMCore" -DCMAKE_INSTALL_DO_STRIP=1 -P /home/diagoras/root_cern/root/builddir/cmake_install.cmake

install-LLVMCore-stripped: interpreter/llvm/src/lib/IR/CMakeFiles/install-LLVMCore-stripped
install-LLVMCore-stripped: interpreter/llvm/src/lib/IR/CMakeFiles/install-LLVMCore-stripped.dir/build.make

.PHONY : install-LLVMCore-stripped

# Rule to build all files generated by this target.
interpreter/llvm/src/lib/IR/CMakeFiles/install-LLVMCore-stripped.dir/build: install-LLVMCore-stripped

.PHONY : interpreter/llvm/src/lib/IR/CMakeFiles/install-LLVMCore-stripped.dir/build

interpreter/llvm/src/lib/IR/CMakeFiles/install-LLVMCore-stripped.dir/clean:
	cd /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/IR && $(CMAKE_COMMAND) -P CMakeFiles/install-LLVMCore-stripped.dir/cmake_clean.cmake
.PHONY : interpreter/llvm/src/lib/IR/CMakeFiles/install-LLVMCore-stripped.dir/clean

interpreter/llvm/src/lib/IR/CMakeFiles/install-LLVMCore-stripped.dir/depend:
	cd /home/diagoras/root_cern/root/builddir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diagoras/root_cern/root /home/diagoras/root_cern/root/interpreter/llvm/src/lib/IR /home/diagoras/root_cern/root/builddir /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/IR /home/diagoras/root_cern/root/builddir/interpreter/llvm/src/lib/IR/CMakeFiles/install-LLVMCore-stripped.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : interpreter/llvm/src/lib/IR/CMakeFiles/install-LLVMCore-stripped.dir/depend

