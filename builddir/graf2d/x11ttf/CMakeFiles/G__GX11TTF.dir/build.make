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
include graf2d/x11ttf/CMakeFiles/G__GX11TTF.dir/depend.make

# Include the progress variables for this target.
include graf2d/x11ttf/CMakeFiles/G__GX11TTF.dir/progress.make

# Include the compile flags for this target's objects.
include graf2d/x11ttf/CMakeFiles/G__GX11TTF.dir/flags.make

graf2d/x11ttf/G__GX11TTF.cxx: ../graf2d/x11ttf/inc/LinkDef.h
graf2d/x11ttf/G__GX11TTF.cxx: ../graf2d/x11ttf/inc/TGX11TTF.h
graf2d/x11ttf/G__GX11TTF.cxx: ../graf2d/x11ttf/inc/TGX11TTF.h
graf2d/x11ttf/G__GX11TTF.cxx: ../graf2d/x11ttf/inc/LinkDef.h
graf2d/x11ttf/G__GX11TTF.cxx: bin/rootcling
graf2d/x11ttf/G__GX11TTF.cxx: lib/libGX11.so
graf2d/x11ttf/G__GX11TTF.cxx: lib/libGraf.so
graf2d/x11ttf/G__GX11TTF.cxx: include/module.modulemap
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__GX11TTF.cxx, ../../lib/GX11TTF.pcm"
	cd /home/diagoras/root_cern/root/builddir/graf2d/x11ttf && /usr/bin/cmake -E env LD_LIBRARY_PATH=/home/diagoras/root_cern/root/builddir/lib: ROOTIGNOREPREFIX=1 /home/diagoras/root_cern/root/builddir/bin/rootcling -rootbuild -v2 -f G__GX11TTF.cxx -cxxmodule -s /home/diagoras/root_cern/root/builddir/lib/libGX11TTF.so -m GX11.pcm -m Graf.pcm -excludePath /home/diagoras/root_cern/root -excludePath /home/diagoras/root_cern/root/builddir/ginclude -excludePath /home/diagoras/root_cern/root/builddir/externals -excludePath /home/diagoras/root_cern/root/builddir/builtins -writeEmptyRootPCM -I/home/diagoras/root_cern/root/builddir/include -I/usr/include -I/usr/include/freetype2 -I/home/diagoras/root_cern/root/graf2d/x11ttf/inc -I/home/diagoras/root_cern/root/core/unix/inc -I/home/diagoras/root_cern/root/core/foundation/v7/inc -I/home/diagoras/root_cern/root/core/base/v7/inc -I/home/diagoras/root_cern/root/core/clingutils/inc -I/home/diagoras/root_cern/root/core/textinput/inc -I/home/diagoras/root_cern/root/core/thread/inc -I/home/diagoras/root_cern/root/core/zip/inc -I/home/diagoras/root_cern/root/core/rint/inc -I/home/diagoras/root_cern/root/core/clib/inc -I/home/diagoras/root_cern/root/core/meta/inc -I/home/diagoras/root_cern/root/core/gui/inc -I/home/diagoras/root_cern/root/core/cont/inc -I/home/diagoras/root_cern/root/core/foundation/inc -I/home/diagoras/root_cern/root/core/base/inc -I/home/diagoras/root_cern/root/builddir/ginclude -I/home/diagoras/root_cern/root/graf2d/x11/inc -I/home/diagoras/root_cern/root/math/mathcore/v7/inc -I/home/diagoras/root_cern/root/math/mathcore/inc -I/home/diagoras/root_cern/root/core/imt/inc -I/home/diagoras/root_cern/root/core/multiproc/inc -I/usr/include -I/home/diagoras/root_cern/root/graf2d/graf/inc -I/home/diagoras/root_cern/root/hist/hist/inc -I/home/diagoras/root_cern/root/math/matrix/inc -I/home/diagoras/root_cern/root/io/io/v7/inc -I/home/diagoras/root_cern/root/io/io/inc -I/home/diagoras/root_cern/root/core/clib/res -I/home/diagoras/root_cern/root/builtins -I/usr/include/freetype2 -I/home/diagoras/root_cern/root/net/net/inc TGX11TTF.h /home/diagoras/root_cern/root/graf2d/x11ttf/inc/LinkDef.h

lib/GX11TTF.pcm: graf2d/x11ttf/G__GX11TTF.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/GX11TTF.pcm

graf2d/x11ttf/CMakeFiles/G__GX11TTF.dir/G__GX11TTF.cxx.o: graf2d/x11ttf/CMakeFiles/G__GX11TTF.dir/flags.make
graf2d/x11ttf/CMakeFiles/G__GX11TTF.dir/G__GX11TTF.cxx.o: graf2d/x11ttf/G__GX11TTF.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object graf2d/x11ttf/CMakeFiles/G__GX11TTF.dir/G__GX11TTF.cxx.o"
	cd /home/diagoras/root_cern/root/builddir/graf2d/x11ttf && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/G__GX11TTF.dir/G__GX11TTF.cxx.o -c /home/diagoras/root_cern/root/builddir/graf2d/x11ttf/G__GX11TTF.cxx

graf2d/x11ttf/CMakeFiles/G__GX11TTF.dir/G__GX11TTF.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/G__GX11TTF.dir/G__GX11TTF.cxx.i"
	cd /home/diagoras/root_cern/root/builddir/graf2d/x11ttf && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/builddir/graf2d/x11ttf/G__GX11TTF.cxx > CMakeFiles/G__GX11TTF.dir/G__GX11TTF.cxx.i

graf2d/x11ttf/CMakeFiles/G__GX11TTF.dir/G__GX11TTF.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/G__GX11TTF.dir/G__GX11TTF.cxx.s"
	cd /home/diagoras/root_cern/root/builddir/graf2d/x11ttf && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/builddir/graf2d/x11ttf/G__GX11TTF.cxx -o CMakeFiles/G__GX11TTF.dir/G__GX11TTF.cxx.s

G__GX11TTF: graf2d/x11ttf/CMakeFiles/G__GX11TTF.dir/G__GX11TTF.cxx.o
G__GX11TTF: graf2d/x11ttf/CMakeFiles/G__GX11TTF.dir/build.make

.PHONY : G__GX11TTF

# Rule to build all files generated by this target.
graf2d/x11ttf/CMakeFiles/G__GX11TTF.dir/build: G__GX11TTF

.PHONY : graf2d/x11ttf/CMakeFiles/G__GX11TTF.dir/build

graf2d/x11ttf/CMakeFiles/G__GX11TTF.dir/clean:
	cd /home/diagoras/root_cern/root/builddir/graf2d/x11ttf && $(CMAKE_COMMAND) -P CMakeFiles/G__GX11TTF.dir/cmake_clean.cmake
.PHONY : graf2d/x11ttf/CMakeFiles/G__GX11TTF.dir/clean

graf2d/x11ttf/CMakeFiles/G__GX11TTF.dir/depend: graf2d/x11ttf/G__GX11TTF.cxx
graf2d/x11ttf/CMakeFiles/G__GX11TTF.dir/depend: lib/GX11TTF.pcm
	cd /home/diagoras/root_cern/root/builddir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diagoras/root_cern/root /home/diagoras/root_cern/root/graf2d/x11ttf /home/diagoras/root_cern/root/builddir /home/diagoras/root_cern/root/builddir/graf2d/x11ttf /home/diagoras/root_cern/root/builddir/graf2d/x11ttf/CMakeFiles/G__GX11TTF.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : graf2d/x11ttf/CMakeFiles/G__GX11TTF.dir/depend

