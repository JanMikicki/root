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

# Utility rule file for move_header_roofit_batchcompute.

# Include the progress variables for this target.
include roofit/batchcompute/CMakeFiles/move_header_roofit_batchcompute.dir/progress.make

roofit/batchcompute/CMakeFiles/move_header_roofit_batchcompute: include/BracketAdapter.h
roofit/batchcompute/CMakeFiles/move_header_roofit_batchcompute: include/RooBatchCompute.h
roofit/batchcompute/CMakeFiles/move_header_roofit_batchcompute: include/RooSpan.h
roofit/batchcompute/CMakeFiles/move_header_roofit_batchcompute: include/RooVDTHeaders.h
roofit/batchcompute/CMakeFiles/move_header_roofit_batchcompute: include/RunContext.h


include/BracketAdapter.h: ../roofit/batchcompute/inc/BracketAdapter.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Copying header /home/diagoras/root_cern/root/roofit/batchcompute/inc/BracketAdapter.h to /home/diagoras/root_cern/root/builddir/include"
	cd /home/diagoras/root_cern/root/builddir/roofit/batchcompute && /usr/bin/cmake -E copy /home/diagoras/root_cern/root/roofit/batchcompute/inc/BracketAdapter.h /home/diagoras/root_cern/root/builddir/include/BracketAdapter.h

include/RooBatchCompute.h: ../roofit/batchcompute/inc/RooBatchCompute.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Copying header /home/diagoras/root_cern/root/roofit/batchcompute/inc/RooBatchCompute.h to /home/diagoras/root_cern/root/builddir/include"
	cd /home/diagoras/root_cern/root/builddir/roofit/batchcompute && /usr/bin/cmake -E copy /home/diagoras/root_cern/root/roofit/batchcompute/inc/RooBatchCompute.h /home/diagoras/root_cern/root/builddir/include/RooBatchCompute.h

include/RooSpan.h: ../roofit/batchcompute/inc/RooSpan.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Copying header /home/diagoras/root_cern/root/roofit/batchcompute/inc/RooSpan.h to /home/diagoras/root_cern/root/builddir/include"
	cd /home/diagoras/root_cern/root/builddir/roofit/batchcompute && /usr/bin/cmake -E copy /home/diagoras/root_cern/root/roofit/batchcompute/inc/RooSpan.h /home/diagoras/root_cern/root/builddir/include/RooSpan.h

include/RooVDTHeaders.h: ../roofit/batchcompute/inc/RooVDTHeaders.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Copying header /home/diagoras/root_cern/root/roofit/batchcompute/inc/RooVDTHeaders.h to /home/diagoras/root_cern/root/builddir/include"
	cd /home/diagoras/root_cern/root/builddir/roofit/batchcompute && /usr/bin/cmake -E copy /home/diagoras/root_cern/root/roofit/batchcompute/inc/RooVDTHeaders.h /home/diagoras/root_cern/root/builddir/include/RooVDTHeaders.h

include/RunContext.h: ../roofit/batchcompute/inc/RunContext.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Copying header /home/diagoras/root_cern/root/roofit/batchcompute/inc/RunContext.h to /home/diagoras/root_cern/root/builddir/include"
	cd /home/diagoras/root_cern/root/builddir/roofit/batchcompute && /usr/bin/cmake -E copy /home/diagoras/root_cern/root/roofit/batchcompute/inc/RunContext.h /home/diagoras/root_cern/root/builddir/include/RunContext.h

move_header_roofit_batchcompute: roofit/batchcompute/CMakeFiles/move_header_roofit_batchcompute
move_header_roofit_batchcompute: include/BracketAdapter.h
move_header_roofit_batchcompute: include/RooBatchCompute.h
move_header_roofit_batchcompute: include/RooSpan.h
move_header_roofit_batchcompute: include/RooVDTHeaders.h
move_header_roofit_batchcompute: include/RunContext.h
move_header_roofit_batchcompute: roofit/batchcompute/CMakeFiles/move_header_roofit_batchcompute.dir/build.make

.PHONY : move_header_roofit_batchcompute

# Rule to build all files generated by this target.
roofit/batchcompute/CMakeFiles/move_header_roofit_batchcompute.dir/build: move_header_roofit_batchcompute

.PHONY : roofit/batchcompute/CMakeFiles/move_header_roofit_batchcompute.dir/build

roofit/batchcompute/CMakeFiles/move_header_roofit_batchcompute.dir/clean:
	cd /home/diagoras/root_cern/root/builddir/roofit/batchcompute && $(CMAKE_COMMAND) -P CMakeFiles/move_header_roofit_batchcompute.dir/cmake_clean.cmake
.PHONY : roofit/batchcompute/CMakeFiles/move_header_roofit_batchcompute.dir/clean

roofit/batchcompute/CMakeFiles/move_header_roofit_batchcompute.dir/depend:
	cd /home/diagoras/root_cern/root/builddir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diagoras/root_cern/root /home/diagoras/root_cern/root/roofit/batchcompute /home/diagoras/root_cern/root/builddir /home/diagoras/root_cern/root/builddir/roofit/batchcompute /home/diagoras/root_cern/root/builddir/roofit/batchcompute/CMakeFiles/move_header_roofit_batchcompute.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : roofit/batchcompute/CMakeFiles/move_header_roofit_batchcompute.dir/depend

