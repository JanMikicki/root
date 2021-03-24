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
include gui/browsable/CMakeFiles/ROOTObjectDraw7Provider.dir/depend.make

# Include the progress variables for this target.
include gui/browsable/CMakeFiles/ROOTObjectDraw7Provider.dir/progress.make

# Include the compile flags for this target's objects.
include gui/browsable/CMakeFiles/ROOTObjectDraw7Provider.dir/flags.make

gui/browsable/CMakeFiles/ROOTObjectDraw7Provider.dir/src/TObjectDraw7Provider.cxx.o: gui/browsable/CMakeFiles/ROOTObjectDraw7Provider.dir/flags.make
gui/browsable/CMakeFiles/ROOTObjectDraw7Provider.dir/src/TObjectDraw7Provider.cxx.o: ../gui/browsable/src/TObjectDraw7Provider.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object gui/browsable/CMakeFiles/ROOTObjectDraw7Provider.dir/src/TObjectDraw7Provider.cxx.o"
	cd /home/diagoras/root_cern/root/builddir/gui/browsable && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ROOTObjectDraw7Provider.dir/src/TObjectDraw7Provider.cxx.o -c /home/diagoras/root_cern/root/gui/browsable/src/TObjectDraw7Provider.cxx

gui/browsable/CMakeFiles/ROOTObjectDraw7Provider.dir/src/TObjectDraw7Provider.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ROOTObjectDraw7Provider.dir/src/TObjectDraw7Provider.cxx.i"
	cd /home/diagoras/root_cern/root/builddir/gui/browsable && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/gui/browsable/src/TObjectDraw7Provider.cxx > CMakeFiles/ROOTObjectDraw7Provider.dir/src/TObjectDraw7Provider.cxx.i

gui/browsable/CMakeFiles/ROOTObjectDraw7Provider.dir/src/TObjectDraw7Provider.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ROOTObjectDraw7Provider.dir/src/TObjectDraw7Provider.cxx.s"
	cd /home/diagoras/root_cern/root/builddir/gui/browsable && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/gui/browsable/src/TObjectDraw7Provider.cxx -o CMakeFiles/ROOTObjectDraw7Provider.dir/src/TObjectDraw7Provider.cxx.s

# Object files for target ROOTObjectDraw7Provider
ROOTObjectDraw7Provider_OBJECTS = \
"CMakeFiles/ROOTObjectDraw7Provider.dir/src/TObjectDraw7Provider.cxx.o"

# External object files for target ROOTObjectDraw7Provider
ROOTObjectDraw7Provider_EXTERNAL_OBJECTS =

lib/libROOTObjectDraw7Provider.so: gui/browsable/CMakeFiles/ROOTObjectDraw7Provider.dir/src/TObjectDraw7Provider.cxx.o
lib/libROOTObjectDraw7Provider.so: gui/browsable/CMakeFiles/ROOTObjectDraw7Provider.dir/build.make
lib/libROOTObjectDraw7Provider.so: lib/libROOTBrowsable.so
lib/libROOTObjectDraw7Provider.so: lib/libROOTGpadv7.so
lib/libROOTObjectDraw7Provider.so: lib/libHist.so
lib/libROOTObjectDraw7Provider.so: lib/libMatrix.so
lib/libROOTObjectDraw7Provider.so: lib/libMathCore.so
lib/libROOTObjectDraw7Provider.so: lib/libImt.so
lib/libROOTObjectDraw7Provider.so: lib/libMultiProc.so
lib/libROOTObjectDraw7Provider.so: lib/libNet.so
lib/libROOTObjectDraw7Provider.so: lib/libRIO.so
lib/libROOTObjectDraw7Provider.so: lib/libThread.so
lib/libROOTObjectDraw7Provider.so: lib/libCore.so
lib/libROOTObjectDraw7Provider.so: gui/browsable/CMakeFiles/ROOTObjectDraw7Provider.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library ../../lib/libROOTObjectDraw7Provider.so"
	cd /home/diagoras/root_cern/root/builddir/gui/browsable && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ROOTObjectDraw7Provider.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
gui/browsable/CMakeFiles/ROOTObjectDraw7Provider.dir/build: lib/libROOTObjectDraw7Provider.so

.PHONY : gui/browsable/CMakeFiles/ROOTObjectDraw7Provider.dir/build

gui/browsable/CMakeFiles/ROOTObjectDraw7Provider.dir/clean:
	cd /home/diagoras/root_cern/root/builddir/gui/browsable && $(CMAKE_COMMAND) -P CMakeFiles/ROOTObjectDraw7Provider.dir/cmake_clean.cmake
.PHONY : gui/browsable/CMakeFiles/ROOTObjectDraw7Provider.dir/clean

gui/browsable/CMakeFiles/ROOTObjectDraw7Provider.dir/depend:
	cd /home/diagoras/root_cern/root/builddir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diagoras/root_cern/root /home/diagoras/root_cern/root/gui/browsable /home/diagoras/root_cern/root/builddir /home/diagoras/root_cern/root/builddir/gui/browsable /home/diagoras/root_cern/root/builddir/gui/browsable/CMakeFiles/ROOTObjectDraw7Provider.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : gui/browsable/CMakeFiles/ROOTObjectDraw7Provider.dir/depend

