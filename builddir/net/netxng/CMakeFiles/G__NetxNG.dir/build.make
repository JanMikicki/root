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
include net/netxng/CMakeFiles/G__NetxNG.dir/depend.make

# Include the progress variables for this target.
include net/netxng/CMakeFiles/G__NetxNG.dir/progress.make

# Include the compile flags for this target's objects.
include net/netxng/CMakeFiles/G__NetxNG.dir/flags.make

net/netxng/G__NetxNG.cxx: ../net/netxng/inc/LinkDef.h
net/netxng/G__NetxNG.cxx: ../net/netxng/inc/TNetXNGFile.h
net/netxng/G__NetxNG.cxx: ../net/netxng/inc/TNetXNGFileStager.h
net/netxng/G__NetxNG.cxx: ../net/netxng/inc/TNetXNGSystem.h
net/netxng/G__NetxNG.cxx: ../net/netxng/inc/TNetXNGFile.h
net/netxng/G__NetxNG.cxx: ../net/netxng/inc/TNetXNGFileStager.h
net/netxng/G__NetxNG.cxx: ../net/netxng/inc/TNetXNGSystem.h
net/netxng/G__NetxNG.cxx: ../net/netxng/inc/LinkDef.h
net/netxng/G__NetxNG.cxx: bin/rootcling
net/netxng/G__NetxNG.cxx: lib/libNet.so
net/netxng/G__NetxNG.cxx: lib/libRIO.so
net/netxng/G__NetxNG.cxx: lib/libThread.so
net/netxng/G__NetxNG.cxx: include/module.modulemap
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__NetxNG.cxx, ../../lib/NetxNG.pcm"
	cd /home/diagoras/root_cern/root/builddir/net/netxng && /usr/bin/cmake -E env LD_LIBRARY_PATH=/home/diagoras/root_cern/root/builddir/lib: ROOTIGNOREPREFIX=1 /home/diagoras/root_cern/root/builddir/bin/rootcling -rootbuild -v2 -f G__NetxNG.cxx -cxxmodule -s /home/diagoras/root_cern/root/builddir/lib/libNetxNG.so -m Net.pcm -m RIO.pcm -m Thread.pcm -excludePath /home/diagoras/root_cern/root -excludePath /home/diagoras/root_cern/root/builddir/ginclude -excludePath /home/diagoras/root_cern/root/builddir/externals -excludePath /home/diagoras/root_cern/root/builddir/builtins -I/home/diagoras/root_cern/root/builddir/include -I/usr/include -I/home/diagoras/root_cern/root/net/netxng/inc -I/home/diagoras/root_cern/root/core/unix/inc -I/home/diagoras/root_cern/root/core/foundation/v7/inc -I/home/diagoras/root_cern/root/core/base/v7/inc -I/home/diagoras/root_cern/root/core/clingutils/inc -I/home/diagoras/root_cern/root/core/textinput/inc -I/home/diagoras/root_cern/root/core/thread/inc -I/home/diagoras/root_cern/root/core/zip/inc -I/home/diagoras/root_cern/root/core/rint/inc -I/home/diagoras/root_cern/root/core/clib/inc -I/home/diagoras/root_cern/root/core/meta/inc -I/home/diagoras/root_cern/root/core/gui/inc -I/home/diagoras/root_cern/root/core/cont/inc -I/home/diagoras/root_cern/root/core/foundation/inc -I/home/diagoras/root_cern/root/core/base/inc -I/home/diagoras/root_cern/root/builddir/ginclude -I/home/diagoras/root_cern/root/net/net/inc -I/home/diagoras/root_cern/root/io/io/v7/inc -I/home/diagoras/root_cern/root/io/io/inc -I/home/diagoras/root_cern/root/core/clib/res -I/home/diagoras/root_cern/root/builtins -I/usr/include -I/home/diagoras/root_cern/root/builddir/include/xrootd -I/home/diagoras/root_cern/root/builddir/include/xrootd/private TNetXNGFile.h TNetXNGFileStager.h TNetXNGSystem.h /home/diagoras/root_cern/root/net/netxng/inc/LinkDef.h

lib/NetxNG.pcm: net/netxng/G__NetxNG.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/NetxNG.pcm

net/netxng/CMakeFiles/G__NetxNG.dir/G__NetxNG.cxx.o: net/netxng/CMakeFiles/G__NetxNG.dir/flags.make
net/netxng/CMakeFiles/G__NetxNG.dir/G__NetxNG.cxx.o: net/netxng/G__NetxNG.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object net/netxng/CMakeFiles/G__NetxNG.dir/G__NetxNG.cxx.o"
	cd /home/diagoras/root_cern/root/builddir/net/netxng && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/G__NetxNG.dir/G__NetxNG.cxx.o -c /home/diagoras/root_cern/root/builddir/net/netxng/G__NetxNG.cxx

net/netxng/CMakeFiles/G__NetxNG.dir/G__NetxNG.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/G__NetxNG.dir/G__NetxNG.cxx.i"
	cd /home/diagoras/root_cern/root/builddir/net/netxng && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/builddir/net/netxng/G__NetxNG.cxx > CMakeFiles/G__NetxNG.dir/G__NetxNG.cxx.i

net/netxng/CMakeFiles/G__NetxNG.dir/G__NetxNG.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/G__NetxNG.dir/G__NetxNG.cxx.s"
	cd /home/diagoras/root_cern/root/builddir/net/netxng && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/builddir/net/netxng/G__NetxNG.cxx -o CMakeFiles/G__NetxNG.dir/G__NetxNG.cxx.s

G__NetxNG: net/netxng/CMakeFiles/G__NetxNG.dir/G__NetxNG.cxx.o
G__NetxNG: net/netxng/CMakeFiles/G__NetxNG.dir/build.make

.PHONY : G__NetxNG

# Rule to build all files generated by this target.
net/netxng/CMakeFiles/G__NetxNG.dir/build: G__NetxNG

.PHONY : net/netxng/CMakeFiles/G__NetxNG.dir/build

net/netxng/CMakeFiles/G__NetxNG.dir/clean:
	cd /home/diagoras/root_cern/root/builddir/net/netxng && $(CMAKE_COMMAND) -P CMakeFiles/G__NetxNG.dir/cmake_clean.cmake
.PHONY : net/netxng/CMakeFiles/G__NetxNG.dir/clean

net/netxng/CMakeFiles/G__NetxNG.dir/depend: net/netxng/G__NetxNG.cxx
net/netxng/CMakeFiles/G__NetxNG.dir/depend: lib/NetxNG.pcm
	cd /home/diagoras/root_cern/root/builddir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diagoras/root_cern/root /home/diagoras/root_cern/root/net/netxng /home/diagoras/root_cern/root/builddir /home/diagoras/root_cern/root/builddir/net/netxng /home/diagoras/root_cern/root/builddir/net/netxng/CMakeFiles/G__NetxNG.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : net/netxng/CMakeFiles/G__NetxNG.dir/depend

