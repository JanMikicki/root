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

# Utility rule file for move_header_core_textinput.

# Include the progress variables for this target.
include core/textinput/CMakeFiles/move_header_core_textinput.dir/progress.make

core/textinput/CMakeFiles/move_header_core_textinput: include/Getline.h


include/Getline.h: ../core/textinput/inc/Getline.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Copying header /home/diagoras/root_cern/root/core/textinput/inc/Getline.h to /home/diagoras/root_cern/root/builddir/include"
	cd /home/diagoras/root_cern/root/builddir/core/textinput && /usr/bin/cmake -E copy /home/diagoras/root_cern/root/core/textinput/inc/Getline.h /home/diagoras/root_cern/root/builddir/include/Getline.h

move_header_core_textinput: core/textinput/CMakeFiles/move_header_core_textinput
move_header_core_textinput: include/Getline.h
move_header_core_textinput: core/textinput/CMakeFiles/move_header_core_textinput.dir/build.make

.PHONY : move_header_core_textinput

# Rule to build all files generated by this target.
core/textinput/CMakeFiles/move_header_core_textinput.dir/build: move_header_core_textinput

.PHONY : core/textinput/CMakeFiles/move_header_core_textinput.dir/build

core/textinput/CMakeFiles/move_header_core_textinput.dir/clean:
	cd /home/diagoras/root_cern/root/builddir/core/textinput && $(CMAKE_COMMAND) -P CMakeFiles/move_header_core_textinput.dir/cmake_clean.cmake
.PHONY : core/textinput/CMakeFiles/move_header_core_textinput.dir/clean

core/textinput/CMakeFiles/move_header_core_textinput.dir/depend:
	cd /home/diagoras/root_cern/root/builddir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diagoras/root_cern/root /home/diagoras/root_cern/root/core/textinput /home/diagoras/root_cern/root/builddir /home/diagoras/root_cern/root/builddir/core/textinput /home/diagoras/root_cern/root/builddir/core/textinput/CMakeFiles/move_header_core_textinput.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : core/textinput/CMakeFiles/move_header_core_textinput.dir/depend

