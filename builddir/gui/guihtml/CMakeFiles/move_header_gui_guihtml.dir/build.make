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

# Utility rule file for move_header_gui_guihtml.

# Include the progress variables for this target.
include gui/guihtml/CMakeFiles/move_header_gui_guihtml.dir/progress.make

gui/guihtml/CMakeFiles/move_header_gui_guihtml: include/TGHtml.h
gui/guihtml/CMakeFiles/move_header_gui_guihtml: include/TGHtmlBrowser.h
gui/guihtml/CMakeFiles/move_header_gui_guihtml: include/TGHtmlTokens.h
gui/guihtml/CMakeFiles/move_header_gui_guihtml: include/TGHtmlUri.h


include/TGHtml.h: ../gui/guihtml/inc/TGHtml.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Copying header /home/diagoras/root_cern/root/gui/guihtml/inc/TGHtml.h to /home/diagoras/root_cern/root/builddir/include"
	cd /home/diagoras/root_cern/root/builddir/gui/guihtml && /usr/bin/cmake -E copy /home/diagoras/root_cern/root/gui/guihtml/inc/TGHtml.h /home/diagoras/root_cern/root/builddir/include/TGHtml.h

include/TGHtmlBrowser.h: ../gui/guihtml/inc/TGHtmlBrowser.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Copying header /home/diagoras/root_cern/root/gui/guihtml/inc/TGHtmlBrowser.h to /home/diagoras/root_cern/root/builddir/include"
	cd /home/diagoras/root_cern/root/builddir/gui/guihtml && /usr/bin/cmake -E copy /home/diagoras/root_cern/root/gui/guihtml/inc/TGHtmlBrowser.h /home/diagoras/root_cern/root/builddir/include/TGHtmlBrowser.h

include/TGHtmlTokens.h: ../gui/guihtml/inc/TGHtmlTokens.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Copying header /home/diagoras/root_cern/root/gui/guihtml/inc/TGHtmlTokens.h to /home/diagoras/root_cern/root/builddir/include"
	cd /home/diagoras/root_cern/root/builddir/gui/guihtml && /usr/bin/cmake -E copy /home/diagoras/root_cern/root/gui/guihtml/inc/TGHtmlTokens.h /home/diagoras/root_cern/root/builddir/include/TGHtmlTokens.h

include/TGHtmlUri.h: ../gui/guihtml/inc/TGHtmlUri.h
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Copying header /home/diagoras/root_cern/root/gui/guihtml/inc/TGHtmlUri.h to /home/diagoras/root_cern/root/builddir/include"
	cd /home/diagoras/root_cern/root/builddir/gui/guihtml && /usr/bin/cmake -E copy /home/diagoras/root_cern/root/gui/guihtml/inc/TGHtmlUri.h /home/diagoras/root_cern/root/builddir/include/TGHtmlUri.h

move_header_gui_guihtml: gui/guihtml/CMakeFiles/move_header_gui_guihtml
move_header_gui_guihtml: include/TGHtml.h
move_header_gui_guihtml: include/TGHtmlBrowser.h
move_header_gui_guihtml: include/TGHtmlTokens.h
move_header_gui_guihtml: include/TGHtmlUri.h
move_header_gui_guihtml: gui/guihtml/CMakeFiles/move_header_gui_guihtml.dir/build.make

.PHONY : move_header_gui_guihtml

# Rule to build all files generated by this target.
gui/guihtml/CMakeFiles/move_header_gui_guihtml.dir/build: move_header_gui_guihtml

.PHONY : gui/guihtml/CMakeFiles/move_header_gui_guihtml.dir/build

gui/guihtml/CMakeFiles/move_header_gui_guihtml.dir/clean:
	cd /home/diagoras/root_cern/root/builddir/gui/guihtml && $(CMAKE_COMMAND) -P CMakeFiles/move_header_gui_guihtml.dir/cmake_clean.cmake
.PHONY : gui/guihtml/CMakeFiles/move_header_gui_guihtml.dir/clean

gui/guihtml/CMakeFiles/move_header_gui_guihtml.dir/depend:
	cd /home/diagoras/root_cern/root/builddir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diagoras/root_cern/root /home/diagoras/root_cern/root/gui/guihtml /home/diagoras/root_cern/root/builddir /home/diagoras/root_cern/root/builddir/gui/guihtml /home/diagoras/root_cern/root/builddir/gui/guihtml/CMakeFiles/move_header_gui_guihtml.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : gui/guihtml/CMakeFiles/move_header_gui_guihtml.dir/depend

