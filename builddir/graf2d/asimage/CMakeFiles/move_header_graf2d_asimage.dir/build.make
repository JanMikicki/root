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

# Utility rule file for move_header_graf2d_asimage.

# Include the progress variables for this target.
include graf2d/asimage/CMakeFiles/move_header_graf2d_asimage.dir/progress.make

graf2d/asimage/CMakeFiles/move_header_graf2d_asimage: include/TASImage.h
graf2d/asimage/CMakeFiles/move_header_graf2d_asimage: include/TASImagePlugin.h
graf2d/asimage/CMakeFiles/move_header_graf2d_asimage: include/TASPaletteEditor.h
graf2d/asimage/CMakeFiles/move_header_graf2d_asimage: include/TASPluginGS.h


include/TASImage.h: ../graf2d/asimage/inc/TASImage.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Copying header /home/diagoras/root_cern/root/graf2d/asimage/inc/TASImage.h to /home/diagoras/root_cern/root/builddir/include"
	cd /home/diagoras/root_cern/root/builddir/graf2d/asimage && /usr/bin/cmake -E copy /home/diagoras/root_cern/root/graf2d/asimage/inc/TASImage.h /home/diagoras/root_cern/root/builddir/include/TASImage.h

include/TASImagePlugin.h: ../graf2d/asimage/inc/TASImagePlugin.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Copying header /home/diagoras/root_cern/root/graf2d/asimage/inc/TASImagePlugin.h to /home/diagoras/root_cern/root/builddir/include"
	cd /home/diagoras/root_cern/root/builddir/graf2d/asimage && /usr/bin/cmake -E copy /home/diagoras/root_cern/root/graf2d/asimage/inc/TASImagePlugin.h /home/diagoras/root_cern/root/builddir/include/TASImagePlugin.h

include/TASPaletteEditor.h: ../graf2d/asimage/inc/TASPaletteEditor.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Copying header /home/diagoras/root_cern/root/graf2d/asimage/inc/TASPaletteEditor.h to /home/diagoras/root_cern/root/builddir/include"
	cd /home/diagoras/root_cern/root/builddir/graf2d/asimage && /usr/bin/cmake -E copy /home/diagoras/root_cern/root/graf2d/asimage/inc/TASPaletteEditor.h /home/diagoras/root_cern/root/builddir/include/TASPaletteEditor.h

include/TASPluginGS.h: ../graf2d/asimage/inc/TASPluginGS.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Copying header /home/diagoras/root_cern/root/graf2d/asimage/inc/TASPluginGS.h to /home/diagoras/root_cern/root/builddir/include"
	cd /home/diagoras/root_cern/root/builddir/graf2d/asimage && /usr/bin/cmake -E copy /home/diagoras/root_cern/root/graf2d/asimage/inc/TASPluginGS.h /home/diagoras/root_cern/root/builddir/include/TASPluginGS.h

move_header_graf2d_asimage: graf2d/asimage/CMakeFiles/move_header_graf2d_asimage
move_header_graf2d_asimage: include/TASImage.h
move_header_graf2d_asimage: include/TASImagePlugin.h
move_header_graf2d_asimage: include/TASPaletteEditor.h
move_header_graf2d_asimage: include/TASPluginGS.h
move_header_graf2d_asimage: graf2d/asimage/CMakeFiles/move_header_graf2d_asimage.dir/build.make

.PHONY : move_header_graf2d_asimage

# Rule to build all files generated by this target.
graf2d/asimage/CMakeFiles/move_header_graf2d_asimage.dir/build: move_header_graf2d_asimage

.PHONY : graf2d/asimage/CMakeFiles/move_header_graf2d_asimage.dir/build

graf2d/asimage/CMakeFiles/move_header_graf2d_asimage.dir/clean:
	cd /home/diagoras/root_cern/root/builddir/graf2d/asimage && $(CMAKE_COMMAND) -P CMakeFiles/move_header_graf2d_asimage.dir/cmake_clean.cmake
.PHONY : graf2d/asimage/CMakeFiles/move_header_graf2d_asimage.dir/clean

graf2d/asimage/CMakeFiles/move_header_graf2d_asimage.dir/depend:
	cd /home/diagoras/root_cern/root/builddir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diagoras/root_cern/root /home/diagoras/root_cern/root/graf2d/asimage /home/diagoras/root_cern/root/builddir /home/diagoras/root_cern/root/builddir/graf2d/asimage /home/diagoras/root_cern/root/builddir/graf2d/asimage/CMakeFiles/move_header_graf2d_asimage.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : graf2d/asimage/CMakeFiles/move_header_graf2d_asimage.dir/depend

