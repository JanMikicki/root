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
include graf2d/asimage/CMakeFiles/G__ASImageGui.dir/depend.make

# Include the progress variables for this target.
include graf2d/asimage/CMakeFiles/G__ASImageGui.dir/progress.make

# Include the compile flags for this target's objects.
include graf2d/asimage/CMakeFiles/G__ASImageGui.dir/flags.make

graf2d/asimage/G__ASImageGui.cxx: ../graf2d/asimage/inc/LinkDefGui.h
graf2d/asimage/G__ASImageGui.cxx: ../graf2d/asimage/inc/TASPaletteEditor.h
graf2d/asimage/G__ASImageGui.cxx: ../graf2d/asimage/inc/TASPaletteEditor.h
graf2d/asimage/G__ASImageGui.cxx: ../graf2d/asimage/inc/LinkDefGui.h
graf2d/asimage/G__ASImageGui.cxx: bin/rootcling
graf2d/asimage/G__ASImageGui.cxx: lib/libGui.so
graf2d/asimage/G__ASImageGui.cxx: lib/libASImage.so
graf2d/asimage/G__ASImageGui.cxx: include/module.modulemap
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__ASImageGui.cxx, ../../lib/ASImageGui.pcm"
	cd /home/diagoras/root_cern/root/builddir/graf2d/asimage && /usr/bin/cmake -E env LD_LIBRARY_PATH=/home/diagoras/root_cern/root/builddir/lib: ROOTIGNOREPREFIX=1 /home/diagoras/root_cern/root/builddir/bin/rootcling -rootbuild -v2 -f G__ASImageGui.cxx -cxxmodule -s /home/diagoras/root_cern/root/builddir/lib/libASImageGui.so -m Gui.pcm -m ASImage.pcm -excludePath /home/diagoras/root_cern/root -excludePath /home/diagoras/root_cern/root/builddir/ginclude -excludePath /home/diagoras/root_cern/root/builddir/externals -excludePath /home/diagoras/root_cern/root/builddir/builtins -writeEmptyRootPCM -I/home/diagoras/root_cern/root/builddir/include -I/usr/include/freetype2 -I/usr/include -I/home/diagoras/root_cern/root/graf2d/asimage/inc -I/home/diagoras/root_cern/root/core/unix/inc -I/home/diagoras/root_cern/root/core/foundation/v7/inc -I/home/diagoras/root_cern/root/core/base/v7/inc -I/home/diagoras/root_cern/root/core/clingutils/inc -I/home/diagoras/root_cern/root/core/textinput/inc -I/home/diagoras/root_cern/root/core/thread/inc -I/home/diagoras/root_cern/root/core/zip/inc -I/home/diagoras/root_cern/root/core/rint/inc -I/home/diagoras/root_cern/root/core/clib/inc -I/home/diagoras/root_cern/root/core/meta/inc -I/home/diagoras/root_cern/root/core/gui/inc -I/home/diagoras/root_cern/root/core/cont/inc -I/home/diagoras/root_cern/root/core/foundation/inc -I/home/diagoras/root_cern/root/core/base/inc -I/home/diagoras/root_cern/root/builddir/ginclude -I/home/diagoras/root_cern/root/graf2d/graf/inc -I/home/diagoras/root_cern/root/hist/hist/inc -I/home/diagoras/root_cern/root/math/mathcore/v7/inc -I/home/diagoras/root_cern/root/math/mathcore/inc -I/home/diagoras/root_cern/root/core/imt/inc -I/home/diagoras/root_cern/root/core/multiproc/inc -I/home/diagoras/root_cern/root/math/matrix/inc -I/home/diagoras/root_cern/root/io/io/v7/inc -I/home/diagoras/root_cern/root/io/io/inc -I/home/diagoras/root_cern/root/core/clib/res -I/home/diagoras/root_cern/root/builtins -I/usr/include/freetype2 -I/home/diagoras/root_cern/root/builddir/include/libAfterImage -I/usr/include -I/home/diagoras/root_cern/root/gui/gui/inc -I/home/diagoras/root_cern/root/graf2d/gpad/inc -I/home/diagoras/root_cern/root/net/net/inc TASPaletteEditor.h /home/diagoras/root_cern/root/graf2d/asimage/inc/LinkDefGui.h

lib/ASImageGui.pcm: graf2d/asimage/G__ASImageGui.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/ASImageGui.pcm

graf2d/asimage/CMakeFiles/G__ASImageGui.dir/G__ASImageGui.cxx.o: graf2d/asimage/CMakeFiles/G__ASImageGui.dir/flags.make
graf2d/asimage/CMakeFiles/G__ASImageGui.dir/G__ASImageGui.cxx.o: graf2d/asimage/G__ASImageGui.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object graf2d/asimage/CMakeFiles/G__ASImageGui.dir/G__ASImageGui.cxx.o"
	cd /home/diagoras/root_cern/root/builddir/graf2d/asimage && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/G__ASImageGui.dir/G__ASImageGui.cxx.o -c /home/diagoras/root_cern/root/builddir/graf2d/asimage/G__ASImageGui.cxx

graf2d/asimage/CMakeFiles/G__ASImageGui.dir/G__ASImageGui.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/G__ASImageGui.dir/G__ASImageGui.cxx.i"
	cd /home/diagoras/root_cern/root/builddir/graf2d/asimage && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/builddir/graf2d/asimage/G__ASImageGui.cxx > CMakeFiles/G__ASImageGui.dir/G__ASImageGui.cxx.i

graf2d/asimage/CMakeFiles/G__ASImageGui.dir/G__ASImageGui.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/G__ASImageGui.dir/G__ASImageGui.cxx.s"
	cd /home/diagoras/root_cern/root/builddir/graf2d/asimage && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/builddir/graf2d/asimage/G__ASImageGui.cxx -o CMakeFiles/G__ASImageGui.dir/G__ASImageGui.cxx.s

G__ASImageGui: graf2d/asimage/CMakeFiles/G__ASImageGui.dir/G__ASImageGui.cxx.o
G__ASImageGui: graf2d/asimage/CMakeFiles/G__ASImageGui.dir/build.make

.PHONY : G__ASImageGui

# Rule to build all files generated by this target.
graf2d/asimage/CMakeFiles/G__ASImageGui.dir/build: G__ASImageGui

.PHONY : graf2d/asimage/CMakeFiles/G__ASImageGui.dir/build

graf2d/asimage/CMakeFiles/G__ASImageGui.dir/clean:
	cd /home/diagoras/root_cern/root/builddir/graf2d/asimage && $(CMAKE_COMMAND) -P CMakeFiles/G__ASImageGui.dir/cmake_clean.cmake
.PHONY : graf2d/asimage/CMakeFiles/G__ASImageGui.dir/clean

graf2d/asimage/CMakeFiles/G__ASImageGui.dir/depend: graf2d/asimage/G__ASImageGui.cxx
graf2d/asimage/CMakeFiles/G__ASImageGui.dir/depend: lib/ASImageGui.pcm
	cd /home/diagoras/root_cern/root/builddir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diagoras/root_cern/root /home/diagoras/root_cern/root/graf2d/asimage /home/diagoras/root_cern/root/builddir /home/diagoras/root_cern/root/builddir/graf2d/asimage /home/diagoras/root_cern/root/builddir/graf2d/asimage/CMakeFiles/G__ASImageGui.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : graf2d/asimage/CMakeFiles/G__ASImageGui.dir/depend

