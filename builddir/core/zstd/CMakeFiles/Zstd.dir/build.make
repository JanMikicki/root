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
include core/zstd/CMakeFiles/Zstd.dir/depend.make

# Include the progress variables for this target.
include core/zstd/CMakeFiles/Zstd.dir/progress.make

# Include the compile flags for this target's objects.
include core/zstd/CMakeFiles/Zstd.dir/flags.make

core/zstd/CMakeFiles/Zstd.dir/src/ZipZSTD.cxx.o: core/zstd/CMakeFiles/Zstd.dir/flags.make
core/zstd/CMakeFiles/Zstd.dir/src/ZipZSTD.cxx.o: ../core/zstd/src/ZipZSTD.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object core/zstd/CMakeFiles/Zstd.dir/src/ZipZSTD.cxx.o"
	cd /home/diagoras/root_cern/root/builddir/core/zstd && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Zstd.dir/src/ZipZSTD.cxx.o -c /home/diagoras/root_cern/root/core/zstd/src/ZipZSTD.cxx

core/zstd/CMakeFiles/Zstd.dir/src/ZipZSTD.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Zstd.dir/src/ZipZSTD.cxx.i"
	cd /home/diagoras/root_cern/root/builddir/core/zstd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/core/zstd/src/ZipZSTD.cxx > CMakeFiles/Zstd.dir/src/ZipZSTD.cxx.i

core/zstd/CMakeFiles/Zstd.dir/src/ZipZSTD.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Zstd.dir/src/ZipZSTD.cxx.s"
	cd /home/diagoras/root_cern/root/builddir/core/zstd && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/core/zstd/src/ZipZSTD.cxx -o CMakeFiles/Zstd.dir/src/ZipZSTD.cxx.s

Zstd: core/zstd/CMakeFiles/Zstd.dir/src/ZipZSTD.cxx.o
Zstd: core/zstd/CMakeFiles/Zstd.dir/build.make

.PHONY : Zstd

# Rule to build all files generated by this target.
core/zstd/CMakeFiles/Zstd.dir/build: Zstd

.PHONY : core/zstd/CMakeFiles/Zstd.dir/build

core/zstd/CMakeFiles/Zstd.dir/clean:
	cd /home/diagoras/root_cern/root/builddir/core/zstd && $(CMAKE_COMMAND) -P CMakeFiles/Zstd.dir/cmake_clean.cmake
.PHONY : core/zstd/CMakeFiles/Zstd.dir/clean

core/zstd/CMakeFiles/Zstd.dir/depend:
	cd /home/diagoras/root_cern/root/builddir && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diagoras/root_cern/root /home/diagoras/root_cern/root/core/zstd /home/diagoras/root_cern/root/builddir /home/diagoras/root_cern/root/builddir/core/zstd /home/diagoras/root_cern/root/builddir/core/zstd/CMakeFiles/Zstd.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : core/zstd/CMakeFiles/Zstd.dir/depend

