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
include gui/sessionviewer/CMakeFiles/G__SessionViewer.dir/depend.make

# Include the progress variables for this target.
include gui/sessionviewer/CMakeFiles/G__SessionViewer.dir/progress.make

# Include the compile flags for this target's objects.
include gui/sessionviewer/CMakeFiles/G__SessionViewer.dir/flags.make

gui/sessionviewer/G__SessionViewer.cxx: ../gui/sessionviewer/inc/LinkDef.h
gui/sessionviewer/G__SessionViewer.cxx: ../gui/sessionviewer/inc/TProofProgressDialog.h
gui/sessionviewer/G__SessionViewer.cxx: ../gui/sessionviewer/inc/TProofProgressLog.h
gui/sessionviewer/G__SessionViewer.cxx: ../gui/sessionviewer/inc/TProofProgressMemoryPlot.h
gui/sessionviewer/G__SessionViewer.cxx: ../gui/sessionviewer/inc/TSessionDialogs.h
gui/sessionviewer/G__SessionViewer.cxx: ../gui/sessionviewer/inc/TSessionLogView.h
gui/sessionviewer/G__SessionViewer.cxx: ../gui/sessionviewer/inc/TSessionViewer.h
gui/sessionviewer/G__SessionViewer.cxx: ../gui/sessionviewer/inc/TProofProgressDialog.h
gui/sessionviewer/G__SessionViewer.cxx: ../gui/sessionviewer/inc/TProofProgressLog.h
gui/sessionviewer/G__SessionViewer.cxx: ../gui/sessionviewer/inc/TProofProgressMemoryPlot.h
gui/sessionviewer/G__SessionViewer.cxx: ../gui/sessionviewer/inc/TSessionDialogs.h
gui/sessionviewer/G__SessionViewer.cxx: ../gui/sessionviewer/inc/TSessionLogView.h
gui/sessionviewer/G__SessionViewer.cxx: ../gui/sessionviewer/inc/TSessionViewer.h
gui/sessionviewer/G__SessionViewer.cxx: ../gui/sessionviewer/inc/LinkDef.h
gui/sessionviewer/G__SessionViewer.cxx: bin/rootcling
gui/sessionviewer/G__SessionViewer.cxx: lib/libProof.so
gui/sessionviewer/G__SessionViewer.cxx: lib/libGui.so
gui/sessionviewer/G__SessionViewer.cxx: lib/libHist.so
gui/sessionviewer/G__SessionViewer.cxx: lib/libGpad.so
gui/sessionviewer/G__SessionViewer.cxx: lib/libGraf.so
gui/sessionviewer/G__SessionViewer.cxx: lib/libTree.so
gui/sessionviewer/G__SessionViewer.cxx: lib/libMathCore.so
gui/sessionviewer/G__SessionViewer.cxx: include/module.modulemap
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generating G__SessionViewer.cxx, ../../lib/SessionViewer.pcm"
	cd /home/diagoras/root_cern/root/builddir/gui/sessionviewer && /usr/bin/cmake -E env LD_LIBRARY_PATH=/home/diagoras/root_cern/root/builddir/lib: ROOTIGNOREPREFIX=1 /home/diagoras/root_cern/root/builddir/bin/rootcling -rootbuild -v2 -f G__SessionViewer.cxx -cxxmodule -s /home/diagoras/root_cern/root/builddir/lib/libSessionViewer.so -m Proof.pcm -m Gui.pcm -m Hist.pcm -m Gpad.pcm -m Graf.pcm -m Tree.pcm -m MathCore.pcm -excludePath /home/diagoras/root_cern/root -excludePath /home/diagoras/root_cern/root/builddir/ginclude -excludePath /home/diagoras/root_cern/root/builddir/externals -excludePath /home/diagoras/root_cern/root/builddir/builtins -I/home/diagoras/root_cern/root/builddir/include -I/usr/include/freetype2 -I/home/diagoras/root_cern/root/gui/sessionviewer/inc -I/home/diagoras/root_cern/root/core/unix/inc -I/home/diagoras/root_cern/root/core/foundation/v7/inc -I/home/diagoras/root_cern/root/core/base/v7/inc -I/home/diagoras/root_cern/root/core/clingutils/inc -I/home/diagoras/root_cern/root/core/textinput/inc -I/home/diagoras/root_cern/root/core/thread/inc -I/home/diagoras/root_cern/root/core/zip/inc -I/home/diagoras/root_cern/root/core/rint/inc -I/home/diagoras/root_cern/root/core/clib/inc -I/home/diagoras/root_cern/root/core/meta/inc -I/home/diagoras/root_cern/root/core/gui/inc -I/home/diagoras/root_cern/root/core/cont/inc -I/home/diagoras/root_cern/root/core/foundation/inc -I/home/diagoras/root_cern/root/core/base/inc -I/home/diagoras/root_cern/root/builddir/ginclude -I/home/diagoras/root_cern/root/gui/gui/inc -I/home/diagoras/root_cern/root/graf2d/gpad/inc -I/home/diagoras/root_cern/root/hist/hist/inc -I/home/diagoras/root_cern/root/math/mathcore/v7/inc -I/home/diagoras/root_cern/root/math/mathcore/inc -I/home/diagoras/root_cern/root/core/imt/inc -I/home/diagoras/root_cern/root/core/multiproc/inc -I/home/diagoras/root_cern/root/math/matrix/inc -I/home/diagoras/root_cern/root/graf2d/graf/inc -I/home/diagoras/root_cern/root/io/io/v7/inc -I/home/diagoras/root_cern/root/io/io/inc -I/home/diagoras/root_cern/root/core/clib/res -I/home/diagoras/root_cern/root/builtins -I/usr/include/freetype2 -I/home/diagoras/root_cern/root/gui/ged/inc -I/home/diagoras/root_cern/root/tree/tree/inc -I/home/diagoras/root_cern/root/proof/proof/inc -I/home/diagoras/root_cern/root/net/net/inc TProofProgressDialog.h TProofProgressLog.h TProofProgressMemoryPlot.h TSessionDialogs.h TSessionLogView.h TSessionViewer.h /home/diagoras/root_cern/root/gui/sessionviewer/inc/LinkDef.h

lib/SessionViewer.pcm: gui/sessionviewer/G__SessionViewer.cxx
	@$(CMAKE_COMMAND) -E touch_nocreate lib/SessionViewer.pcm

gui/sessionviewer/CMakeFiles/G__SessionViewer.dir/G__SessionViewer.cxx.o: gui/sessionviewer/CMakeFiles/G__SessionViewer.dir/flags.make
gui/sessionviewer/CMakeFiles/G__SessionViewer.dir/G__SessionViewer.cxx.o: gui/sessionviewer/G__SessionViewer.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object gui/sessionviewer/CMakeFiles/G__SessionViewer.dir/G__SessionViewer.cxx.o"
	cd /home/diagoras/root_cern/root/builddir/gui/sessionviewer && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/G__SessionViewer.dir/G__SessionViewer.cxx.o -c /home/diagoras/root_cern/root/builddir/gui/sessionviewer/G__SessionViewer.cxx

gui/sessionviewer/CMakeFiles/G__SessionViewer.dir/G__SessionViewer.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/G__SessionViewer.dir/G__SessionViewer.cxx.i"
	cd /home/diagoras/root_cern/root/builddir/gui/sessionviewer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/builddir/gui/sessionviewer/G__SessionViewer.cxx > CMakeFiles/G__SessionViewer.dir/G__SessionViewer.cxx.i

gui/sessionviewer/CMakeFiles/G__SessionViewer.dir/G__SessionViewer.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/G__SessionViewer.dir/G__SessionViewer.cxx.s"
	cd /home/diagoras/root_cern/root/builddir/gui/sessionviewer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/builddir/gui/sessionviewer/G__SessionViewer.cxx -o CMakeFiles/G__SessionViewer.dir/G__SessionViewer.cxx.s

G__SessionViewer: gui/sessionviewer/CMakeFiles/G__SessionViewer.dir/G__SessionViewer.cxx.o
G__SessionViewer: gui/sessionviewer/CMakeFiles/G__SessionViewer.dir/build.make

.PHONY : G__SessionViewer

# Rule to build all files generated by this target.
gui/sessionviewer/CMakeFiles/G__SessionViewer.dir/build: G__SessionViewer

.PHONY : gui/sessionviewer/CMakeFiles/G__SessionViewer.dir/build

gui/sessionviewer/CMakeFiles/G__SessionViewer.dir/clean:
	cd /home/diagoras/root_cern/root/builddir/gui/sessionviewer && $(CMAKE_COMMAND) -P CMakeFiles/G__SessionViewer.dir/cmake_clean.cmake
.PHONY : gui/sessionviewer/CMakeFiles/G__SessionViewer.dir/clean

gui/sessionviewer/CMakeFiles/G__SessionViewer.dir/depend: gui/sessionviewer/G__SessionViewer.cxx
gui/sessionviewer/CMakeFiles/G__SessionViewer.dir/depend: lib/SessionViewer.pcm
	cd /home/diagoras/root_cern/root/builddir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diagoras/root_cern/root /home/diagoras/root_cern/root/gui/sessionviewer /home/diagoras/root_cern/root/builddir /home/diagoras/root_cern/root/builddir/gui/sessionviewer /home/diagoras/root_cern/root/builddir/gui/sessionviewer/CMakeFiles/G__SessionViewer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : gui/sessionviewer/CMakeFiles/G__SessionViewer.dir/depend

