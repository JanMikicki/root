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
include core/rint/CMakeFiles/G__Rint.dir/depend.make

# Include the progress variables for this target.
include core/rint/CMakeFiles/G__Rint.dir/progress.make

# Include the compile flags for this target's objects.
include core/rint/CMakeFiles/G__Rint.dir/flags.make

core/rint/G__Rint.cxx: ../core/rint/inc/LinkDef.h
core/rint/G__Rint.cxx: ../core/rint/inc/TRint.h
core/rint/G__Rint.cxx: ../core/rint/inc/TTabCom.h
core/rint/G__Rint.cxx: ../core/rint/inc/TRint.h
core/rint/G__Rint.cxx: ../core/rint/inc/TTabCom.h
core/rint/G__Rint.cxx: ../core/rint/inc/LinkDef.h
core/rint/G__Rint.cxx: lib/libCore.so
core/rint/G__Rint.cxx: include/module.modulemap
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__Rint.cxx, ../../lib/Rint.pcm"
	cd /home/diagoras/root_cern/root/builddir/core/rint && /usr/bin/cmake -E env LD_LIBRARY_PATH=/home/diagoras/root_cern/root/builddir/lib: /home/diagoras/root_cern/root/builddir/core/rootcling_stage1/src/rootcling_stage1 -v2 -f G__Rint.cxx -cxxmodule -s /home/diagoras/root_cern/root/builddir/lib/libRint.so -m Core.pcm -excludePath /home/diagoras/root_cern/root -excludePath /home/diagoras/root_cern/root/builddir/ginclude -excludePath /home/diagoras/root_cern/root/builddir/externals -excludePath /home/diagoras/root_cern/root/builddir/builtins -writeEmptyRootPCM -I/home/diagoras/root_cern/root/builddir/include -I/home/diagoras/root_cern/root/core/rint/inc -I/home/diagoras/root_cern/root/builddir/ginclude -I/home/diagoras/root_cern/root/core/base/inc -I/home/diagoras/root_cern/root/core/foundation/inc -I/home/diagoras/root_cern/root/core/cont/inc -I/home/diagoras/root_cern/root/core/gui/inc -I/home/diagoras/root_cern/root/core/meta/inc -I/home/diagoras/root_cern/root/core/clib/inc -I/home/diagoras/root_cern/root/core/zip/inc -I/home/diagoras/root_cern/root/core/thread/inc -I/home/diagoras/root_cern/root/core/textinput/inc -I/home/diagoras/root_cern/root/core/base/v7/inc -I/home/diagoras/root_cern/root/core/foundation/v7/inc -I/home/diagoras/root_cern/root/core/unix/inc TRint.h TTabCom.h /home/diagoras/root_cern/root/core/rint/inc/LinkDef.h

lib/Rint.pcm: core/rint/G__Rint.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/Rint.pcm

core/rint/CMakeFiles/G__Rint.dir/G__Rint.cxx.o: core/rint/CMakeFiles/G__Rint.dir/flags.make
core/rint/CMakeFiles/G__Rint.dir/G__Rint.cxx.o: core/rint/G__Rint.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object core/rint/CMakeFiles/G__Rint.dir/G__Rint.cxx.o"
	cd /home/diagoras/root_cern/root/builddir/core/rint && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/G__Rint.dir/G__Rint.cxx.o -c /home/diagoras/root_cern/root/builddir/core/rint/G__Rint.cxx

core/rint/CMakeFiles/G__Rint.dir/G__Rint.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/G__Rint.dir/G__Rint.cxx.i"
	cd /home/diagoras/root_cern/root/builddir/core/rint && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/builddir/core/rint/G__Rint.cxx > CMakeFiles/G__Rint.dir/G__Rint.cxx.i

core/rint/CMakeFiles/G__Rint.dir/G__Rint.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/G__Rint.dir/G__Rint.cxx.s"
	cd /home/diagoras/root_cern/root/builddir/core/rint && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/builddir/core/rint/G__Rint.cxx -o CMakeFiles/G__Rint.dir/G__Rint.cxx.s

G__Rint: core/rint/CMakeFiles/G__Rint.dir/G__Rint.cxx.o
G__Rint: core/rint/CMakeFiles/G__Rint.dir/build.make

.PHONY : G__Rint

# Rule to build all files generated by this target.
core/rint/CMakeFiles/G__Rint.dir/build: G__Rint

.PHONY : core/rint/CMakeFiles/G__Rint.dir/build

core/rint/CMakeFiles/G__Rint.dir/clean:
	cd /home/diagoras/root_cern/root/builddir/core/rint && $(CMAKE_COMMAND) -P CMakeFiles/G__Rint.dir/cmake_clean.cmake
.PHONY : core/rint/CMakeFiles/G__Rint.dir/clean

core/rint/CMakeFiles/G__Rint.dir/depend: core/rint/G__Rint.cxx
core/rint/CMakeFiles/G__Rint.dir/depend: lib/Rint.pcm
	cd /home/diagoras/root_cern/root/builddir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diagoras/root_cern/root /home/diagoras/root_cern/root/core/rint /home/diagoras/root_cern/root/builddir /home/diagoras/root_cern/root/builddir/core/rint /home/diagoras/root_cern/root/builddir/core/rint/CMakeFiles/G__Rint.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : core/rint/CMakeFiles/G__Rint.dir/depend

