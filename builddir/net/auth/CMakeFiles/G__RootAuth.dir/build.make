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
include net/auth/CMakeFiles/G__RootAuth.dir/depend.make

# Include the progress variables for this target.
include net/auth/CMakeFiles/G__RootAuth.dir/progress.make

# Include the compile flags for this target's objects.
include net/auth/CMakeFiles/G__RootAuth.dir/flags.make

net/auth/G__RootAuth.cxx: ../net/auth/inc/LinkDefRoot.h
net/auth/G__RootAuth.cxx: ../net/auth/inc/AuthConst.h
net/auth/G__RootAuth.cxx: ../net/auth/inc/TAuthenticate.h
net/auth/G__RootAuth.cxx: ../net/auth/inc/THostAuth.h
net/auth/G__RootAuth.cxx: ../net/auth/inc/TRootAuth.h
net/auth/G__RootAuth.cxx: ../net/auth/inc/TRootSecContext.h
net/auth/G__RootAuth.cxx: ../net/auth/inc/AuthConst.h
net/auth/G__RootAuth.cxx: ../net/auth/inc/TAuthenticate.h
net/auth/G__RootAuth.cxx: ../net/auth/inc/THostAuth.h
net/auth/G__RootAuth.cxx: ../net/auth/inc/TRootAuth.h
net/auth/G__RootAuth.cxx: ../net/auth/inc/TRootSecContext.h
net/auth/G__RootAuth.cxx: ../net/auth/inc/LinkDefRoot.h
net/auth/G__RootAuth.cxx: bin/rootcling
net/auth/G__RootAuth.cxx: lib/libNet.so
net/auth/G__RootAuth.cxx: lib/libRIO.so
net/auth/G__RootAuth.cxx: include/module.modulemap
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__RootAuth.cxx, ../../lib/RootAuth.pcm"
	cd /home/diagoras/root_cern/root/builddir/net/auth && /usr/bin/cmake -E env LD_LIBRARY_PATH=/home/diagoras/root_cern/root/builddir/lib: ROOTIGNOREPREFIX=1 /home/diagoras/root_cern/root/builddir/bin/rootcling -rootbuild -v2 -f G__RootAuth.cxx -cxxmodule -s /home/diagoras/root_cern/root/builddir/lib/libRootAuth.so -m Net.pcm -m RIO.pcm -excludePath /home/diagoras/root_cern/root -excludePath /home/diagoras/root_cern/root/builddir/ginclude -excludePath /home/diagoras/root_cern/root/builddir/externals -excludePath /home/diagoras/root_cern/root/builddir/builtins -I/home/diagoras/root_cern/root/builddir/include -I/usr/include -I/home/diagoras/root_cern/root/net/auth/inc -I/home/diagoras/root_cern/root/net/auth/res -I/home/diagoras/root_cern/root/core/unix/inc -I/home/diagoras/root_cern/root/core/foundation/v7/inc -I/home/diagoras/root_cern/root/core/base/v7/inc -I/home/diagoras/root_cern/root/core/clingutils/inc -I/home/diagoras/root_cern/root/core/textinput/inc -I/home/diagoras/root_cern/root/core/thread/inc -I/home/diagoras/root_cern/root/core/zip/inc -I/home/diagoras/root_cern/root/core/rint/inc -I/home/diagoras/root_cern/root/core/clib/inc -I/home/diagoras/root_cern/root/core/meta/inc -I/home/diagoras/root_cern/root/core/gui/inc -I/home/diagoras/root_cern/root/core/cont/inc -I/home/diagoras/root_cern/root/core/foundation/inc -I/home/diagoras/root_cern/root/core/base/inc -I/home/diagoras/root_cern/root/builddir/ginclude -I/home/diagoras/root_cern/root/net/net/inc -I/home/diagoras/root_cern/root/io/io/v7/inc -I/home/diagoras/root_cern/root/io/io/inc -I/home/diagoras/root_cern/root/core/clib/res -I/home/diagoras/root_cern/root/builtins -I/usr/include AuthConst.h TAuthenticate.h THostAuth.h TRootAuth.h TRootSecContext.h /home/diagoras/root_cern/root/net/auth/inc/LinkDefRoot.h

lib/RootAuth.pcm: net/auth/G__RootAuth.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/RootAuth.pcm

net/auth/CMakeFiles/G__RootAuth.dir/G__RootAuth.cxx.o: net/auth/CMakeFiles/G__RootAuth.dir/flags.make
net/auth/CMakeFiles/G__RootAuth.dir/G__RootAuth.cxx.o: net/auth/G__RootAuth.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object net/auth/CMakeFiles/G__RootAuth.dir/G__RootAuth.cxx.o"
	cd /home/diagoras/root_cern/root/builddir/net/auth && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/G__RootAuth.dir/G__RootAuth.cxx.o -c /home/diagoras/root_cern/root/builddir/net/auth/G__RootAuth.cxx

net/auth/CMakeFiles/G__RootAuth.dir/G__RootAuth.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/G__RootAuth.dir/G__RootAuth.cxx.i"
	cd /home/diagoras/root_cern/root/builddir/net/auth && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/builddir/net/auth/G__RootAuth.cxx > CMakeFiles/G__RootAuth.dir/G__RootAuth.cxx.i

net/auth/CMakeFiles/G__RootAuth.dir/G__RootAuth.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/G__RootAuth.dir/G__RootAuth.cxx.s"
	cd /home/diagoras/root_cern/root/builddir/net/auth && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/builddir/net/auth/G__RootAuth.cxx -o CMakeFiles/G__RootAuth.dir/G__RootAuth.cxx.s

G__RootAuth: net/auth/CMakeFiles/G__RootAuth.dir/G__RootAuth.cxx.o
G__RootAuth: net/auth/CMakeFiles/G__RootAuth.dir/build.make

.PHONY : G__RootAuth

# Rule to build all files generated by this target.
net/auth/CMakeFiles/G__RootAuth.dir/build: G__RootAuth

.PHONY : net/auth/CMakeFiles/G__RootAuth.dir/build

net/auth/CMakeFiles/G__RootAuth.dir/clean:
	cd /home/diagoras/root_cern/root/builddir/net/auth && $(CMAKE_COMMAND) -P CMakeFiles/G__RootAuth.dir/cmake_clean.cmake
.PHONY : net/auth/CMakeFiles/G__RootAuth.dir/clean

net/auth/CMakeFiles/G__RootAuth.dir/depend: net/auth/G__RootAuth.cxx
net/auth/CMakeFiles/G__RootAuth.dir/depend: lib/RootAuth.pcm
	cd /home/diagoras/root_cern/root/builddir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diagoras/root_cern/root /home/diagoras/root_cern/root/net/auth /home/diagoras/root_cern/root/builddir /home/diagoras/root_cern/root/builddir/net/auth /home/diagoras/root_cern/root/builddir/net/auth/CMakeFiles/G__RootAuth.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : net/auth/CMakeFiles/G__RootAuth.dir/depend

