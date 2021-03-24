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
include bindings/tpython/CMakeFiles/G__ROOTTPython.dir/depend.make

# Include the progress variables for this target.
include bindings/tpython/CMakeFiles/G__ROOTTPython.dir/progress.make

# Include the compile flags for this target's objects.
include bindings/tpython/CMakeFiles/G__ROOTTPython.dir/flags.make

bindings/tpython/G__ROOTTPython.cxx: ../bindings/tpython/inc/LinkDef.h
bindings/tpython/G__ROOTTPython.cxx: ../bindings/tpython/inc/TPyArg.h
bindings/tpython/G__ROOTTPython.cxx: ../bindings/tpython/inc/TPyReturn.h
bindings/tpython/G__ROOTTPython.cxx: ../bindings/tpython/inc/TPython.h
bindings/tpython/G__ROOTTPython.cxx: ../bindings/tpython/inc/TPyArg.h
bindings/tpython/G__ROOTTPython.cxx: ../bindings/tpython/inc/TPyReturn.h
bindings/tpython/G__ROOTTPython.cxx: ../bindings/tpython/inc/TPython.h
bindings/tpython/G__ROOTTPython.cxx: ../bindings/tpython/inc/LinkDef.h
bindings/tpython/G__ROOTTPython.cxx: bin/rootcling
bindings/tpython/G__ROOTTPython.cxx: lib/libCore.so
bindings/tpython/G__ROOTTPython.cxx: include/module.modulemap
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__ROOTTPython.cxx, ../../lib/ROOTTPython.pcm"
	cd /home/diagoras/root_cern/root/builddir/bindings/tpython && /usr/bin/cmake -E env LD_LIBRARY_PATH=/home/diagoras/root_cern/root/builddir/lib: ROOTIGNOREPREFIX=1 /home/diagoras/root_cern/root/builddir/bin/rootcling -rootbuild -v2 -f G__ROOTTPython.cxx -cxxmodule -s /home/diagoras/root_cern/root/builddir/lib/libROOTTPython.so -m Core.pcm -excludePath /home/diagoras/root_cern/root -excludePath /home/diagoras/root_cern/root/builddir/ginclude -excludePath /home/diagoras/root_cern/root/builddir/externals -excludePath /home/diagoras/root_cern/root/builddir/builtins -writeEmptyRootPCM -I/home/diagoras/root_cern/root/builddir/include -I/home/diagoras/miniconda3/include/python3.8 -I/home/diagoras/root_cern/root/bindings/tpython/inc -I/home/diagoras/root_cern/root/core/unix/inc -I/home/diagoras/root_cern/root/core/foundation/v7/inc -I/home/diagoras/root_cern/root/core/base/v7/inc -I/home/diagoras/root_cern/root/core/clingutils/inc -I/home/diagoras/root_cern/root/core/textinput/inc -I/home/diagoras/root_cern/root/core/thread/inc -I/home/diagoras/root_cern/root/core/zip/inc -I/home/diagoras/root_cern/root/core/rint/inc -I/home/diagoras/root_cern/root/core/clib/inc -I/home/diagoras/root_cern/root/core/meta/inc -I/home/diagoras/root_cern/root/core/gui/inc -I/home/diagoras/root_cern/root/core/cont/inc -I/home/diagoras/root_cern/root/core/foundation/inc -I/home/diagoras/root_cern/root/core/base/inc -I/home/diagoras/root_cern/root/builddir/ginclude -I/home/diagoras/miniconda3/include/python3.8 -I/home/diagoras/root_cern/root/bindings/pyroot/cppyy/CPyCppyy/inc -I/home/diagoras/root_cern/root/bindings/pyroot/cppyy/CPyCppyy/src TPyArg.h TPyReturn.h TPython.h /home/diagoras/root_cern/root/bindings/tpython/inc/LinkDef.h

lib/ROOTTPython.pcm: bindings/tpython/G__ROOTTPython.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/ROOTTPython.pcm

bindings/tpython/CMakeFiles/G__ROOTTPython.dir/G__ROOTTPython.cxx.o: bindings/tpython/CMakeFiles/G__ROOTTPython.dir/flags.make
bindings/tpython/CMakeFiles/G__ROOTTPython.dir/G__ROOTTPython.cxx.o: bindings/tpython/G__ROOTTPython.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object bindings/tpython/CMakeFiles/G__ROOTTPython.dir/G__ROOTTPython.cxx.o"
	cd /home/diagoras/root_cern/root/builddir/bindings/tpython && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/G__ROOTTPython.dir/G__ROOTTPython.cxx.o -c /home/diagoras/root_cern/root/builddir/bindings/tpython/G__ROOTTPython.cxx

bindings/tpython/CMakeFiles/G__ROOTTPython.dir/G__ROOTTPython.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/G__ROOTTPython.dir/G__ROOTTPython.cxx.i"
	cd /home/diagoras/root_cern/root/builddir/bindings/tpython && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/builddir/bindings/tpython/G__ROOTTPython.cxx > CMakeFiles/G__ROOTTPython.dir/G__ROOTTPython.cxx.i

bindings/tpython/CMakeFiles/G__ROOTTPython.dir/G__ROOTTPython.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/G__ROOTTPython.dir/G__ROOTTPython.cxx.s"
	cd /home/diagoras/root_cern/root/builddir/bindings/tpython && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/builddir/bindings/tpython/G__ROOTTPython.cxx -o CMakeFiles/G__ROOTTPython.dir/G__ROOTTPython.cxx.s

G__ROOTTPython: bindings/tpython/CMakeFiles/G__ROOTTPython.dir/G__ROOTTPython.cxx.o
G__ROOTTPython: bindings/tpython/CMakeFiles/G__ROOTTPython.dir/build.make

.PHONY : G__ROOTTPython

# Rule to build all files generated by this target.
bindings/tpython/CMakeFiles/G__ROOTTPython.dir/build: G__ROOTTPython

.PHONY : bindings/tpython/CMakeFiles/G__ROOTTPython.dir/build

bindings/tpython/CMakeFiles/G__ROOTTPython.dir/clean:
	cd /home/diagoras/root_cern/root/builddir/bindings/tpython && $(CMAKE_COMMAND) -P CMakeFiles/G__ROOTTPython.dir/cmake_clean.cmake
.PHONY : bindings/tpython/CMakeFiles/G__ROOTTPython.dir/clean

bindings/tpython/CMakeFiles/G__ROOTTPython.dir/depend: bindings/tpython/G__ROOTTPython.cxx
bindings/tpython/CMakeFiles/G__ROOTTPython.dir/depend: lib/ROOTTPython.pcm
	cd /home/diagoras/root_cern/root/builddir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diagoras/root_cern/root /home/diagoras/root_cern/root/bindings/tpython /home/diagoras/root_cern/root/builddir /home/diagoras/root_cern/root/builddir/bindings/tpython /home/diagoras/root_cern/root/builddir/bindings/tpython/CMakeFiles/G__ROOTTPython.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : bindings/tpython/CMakeFiles/G__ROOTTPython.dir/depend

