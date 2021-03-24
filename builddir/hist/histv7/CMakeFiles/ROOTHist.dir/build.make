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
include hist/histv7/CMakeFiles/ROOTHist.dir/depend.make

# Include the progress variables for this target.
include hist/histv7/CMakeFiles/ROOTHist.dir/progress.make

# Include the compile flags for this target's objects.
include hist/histv7/CMakeFiles/ROOTHist.dir/flags.make

hist/histv7/CMakeFiles/ROOTHist.dir/src/RAxis.cxx.o: hist/histv7/CMakeFiles/ROOTHist.dir/flags.make
hist/histv7/CMakeFiles/ROOTHist.dir/src/RAxis.cxx.o: ../hist/histv7/src/RAxis.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object hist/histv7/CMakeFiles/ROOTHist.dir/src/RAxis.cxx.o"
	cd /home/diagoras/root_cern/root/builddir/hist/histv7 && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ROOTHist.dir/src/RAxis.cxx.o -c /home/diagoras/root_cern/root/hist/histv7/src/RAxis.cxx

hist/histv7/CMakeFiles/ROOTHist.dir/src/RAxis.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ROOTHist.dir/src/RAxis.cxx.i"
	cd /home/diagoras/root_cern/root/builddir/hist/histv7 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/hist/histv7/src/RAxis.cxx > CMakeFiles/ROOTHist.dir/src/RAxis.cxx.i

hist/histv7/CMakeFiles/ROOTHist.dir/src/RAxis.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ROOTHist.dir/src/RAxis.cxx.s"
	cd /home/diagoras/root_cern/root/builddir/hist/histv7 && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/hist/histv7/src/RAxis.cxx -o CMakeFiles/ROOTHist.dir/src/RAxis.cxx.s

# Object files for target ROOTHist
ROOTHist_OBJECTS = \
"CMakeFiles/ROOTHist.dir/src/RAxis.cxx.o"

# External object files for target ROOTHist
ROOTHist_EXTERNAL_OBJECTS = \
"/home/diagoras/root_cern/root/builddir/hist/histv7/CMakeFiles/G__ROOTHist.dir/G__ROOTHist.cxx.o"

lib/libROOTHist.so: hist/histv7/CMakeFiles/ROOTHist.dir/src/RAxis.cxx.o
lib/libROOTHist.so: hist/histv7/CMakeFiles/G__ROOTHist.dir/G__ROOTHist.cxx.o
lib/libROOTHist.so: hist/histv7/CMakeFiles/ROOTHist.dir/build.make
lib/libROOTHist.so: lib/libMatrix.so
lib/libROOTHist.so: lib/libMathCore.so
lib/libROOTHist.so: lib/libImt.so
lib/libROOTHist.so: lib/libMultiProc.so
lib/libROOTHist.so: lib/libNet.so
lib/libROOTHist.so: lib/libRIO.so
lib/libROOTHist.so: lib/libThread.so
lib/libROOTHist.so: lib/libCore.so
lib/libROOTHist.so: hist/histv7/CMakeFiles/ROOTHist.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library ../../lib/libROOTHist.so"
	cd /home/diagoras/root_cern/root/builddir/hist/histv7 && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ROOTHist.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
hist/histv7/CMakeFiles/ROOTHist.dir/build: lib/libROOTHist.so

.PHONY : hist/histv7/CMakeFiles/ROOTHist.dir/build

hist/histv7/CMakeFiles/ROOTHist.dir/clean:
	cd /home/diagoras/root_cern/root/builddir/hist/histv7 && $(CMAKE_COMMAND) -P CMakeFiles/ROOTHist.dir/cmake_clean.cmake
.PHONY : hist/histv7/CMakeFiles/ROOTHist.dir/clean

hist/histv7/CMakeFiles/ROOTHist.dir/depend:
	cd /home/diagoras/root_cern/root/builddir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diagoras/root_cern/root /home/diagoras/root_cern/root/hist/histv7 /home/diagoras/root_cern/root/builddir /home/diagoras/root_cern/root/builddir/hist/histv7 /home/diagoras/root_cern/root/builddir/hist/histv7/CMakeFiles/ROOTHist.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : hist/histv7/CMakeFiles/ROOTHist.dir/depend

