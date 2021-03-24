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
include main/CMakeFiles/hadd.dir/depend.make

# Include the progress variables for this target.
include main/CMakeFiles/hadd.dir/progress.make

# Include the compile flags for this target's objects.
include main/CMakeFiles/hadd.dir/flags.make

ginclude/haddCommandLineOptionsHelp.h: ../build/misc/argparse2help.py
ginclude/haddCommandLineOptionsHelp.h: ../main/src/hadd-argparse.py
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating ../ginclude/haddCommandLineOptionsHelp.h"
	cd /home/diagoras/root_cern/root/builddir/main && /home/diagoras/miniconda3/bin/python3.8 -B /home/diagoras/root_cern/root/build/misc/argparse2help.py /home/diagoras/root_cern/root/main/src/hadd-argparse.py /home/diagoras/root_cern/root/builddir/ginclude/haddCommandLineOptionsHelp.h

main/CMakeFiles/hadd.dir/src/hadd.cxx.o: main/CMakeFiles/hadd.dir/flags.make
main/CMakeFiles/hadd.dir/src/hadd.cxx.o: ../main/src/hadd.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object main/CMakeFiles/hadd.dir/src/hadd.cxx.o"
	cd /home/diagoras/root_cern/root/builddir/main && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hadd.dir/src/hadd.cxx.o -c /home/diagoras/root_cern/root/main/src/hadd.cxx

main/CMakeFiles/hadd.dir/src/hadd.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hadd.dir/src/hadd.cxx.i"
	cd /home/diagoras/root_cern/root/builddir/main && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/main/src/hadd.cxx > CMakeFiles/hadd.dir/src/hadd.cxx.i

main/CMakeFiles/hadd.dir/src/hadd.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hadd.dir/src/hadd.cxx.s"
	cd /home/diagoras/root_cern/root/builddir/main && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/main/src/hadd.cxx -o CMakeFiles/hadd.dir/src/hadd.cxx.s

# Object files for target hadd
hadd_OBJECTS = \
"CMakeFiles/hadd.dir/src/hadd.cxx.o"

# External object files for target hadd
hadd_EXTERNAL_OBJECTS =

bin/hadd: main/CMakeFiles/hadd.dir/src/hadd.cxx.o
bin/hadd: main/CMakeFiles/hadd.dir/build.make
bin/hadd: lib/libGraf3d.so
bin/hadd: lib/libGpad.so
bin/hadd: lib/libTree.so
bin/hadd: lib/libGraf.so
bin/hadd: lib/libHist.so
bin/hadd: lib/libMatrix.so
bin/hadd: lib/libMathCore.so
bin/hadd: lib/libImt.so
bin/hadd: lib/libMultiProc.so
bin/hadd: lib/libNet.so
bin/hadd: lib/libRIO.so
bin/hadd: lib/libThread.so
bin/hadd: lib/libCore.so
bin/hadd: main/CMakeFiles/hadd.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../bin/hadd"
	cd /home/diagoras/root_cern/root/builddir/main && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hadd.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
main/CMakeFiles/hadd.dir/build: bin/hadd

.PHONY : main/CMakeFiles/hadd.dir/build

main/CMakeFiles/hadd.dir/clean:
	cd /home/diagoras/root_cern/root/builddir/main && $(CMAKE_COMMAND) -P CMakeFiles/hadd.dir/cmake_clean.cmake
.PHONY : main/CMakeFiles/hadd.dir/clean

main/CMakeFiles/hadd.dir/depend: ginclude/haddCommandLineOptionsHelp.h
	cd /home/diagoras/root_cern/root/builddir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diagoras/root_cern/root /home/diagoras/root_cern/root/main /home/diagoras/root_cern/root/builddir /home/diagoras/root_cern/root/builddir/main /home/diagoras/root_cern/root/builddir/main/CMakeFiles/hadd.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : main/CMakeFiles/hadd.dir/depend

