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
CMAKE_SOURCE_DIR = /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build

# Include any dependencies generated for this target.
include src/CMakeFiles/XrdSsiLib.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/XrdSsiLib.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/XrdSsiLib.dir/flags.make

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiAlert.cc.o: src/CMakeFiles/XrdSsiLib.dir/flags.make
src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiAlert.cc.o: /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiAlert.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiAlert.cc.o"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiAlert.cc.o -c /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiAlert.cc

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiAlert.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiAlert.cc.i"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiAlert.cc > CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiAlert.cc.i

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiAlert.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiAlert.cc.s"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiAlert.cc -o CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiAlert.cc.s

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiClient.cc.o: src/CMakeFiles/XrdSsiLib.dir/flags.make
src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiClient.cc.o: /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiClient.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiClient.cc.o"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiClient.cc.o -c /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiClient.cc

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiClient.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiClient.cc.i"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiClient.cc > CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiClient.cc.i

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiClient.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiClient.cc.s"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiClient.cc -o CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiClient.cc.s

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiCms.cc.o: src/CMakeFiles/XrdSsiLib.dir/flags.make
src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiCms.cc.o: /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiCms.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiCms.cc.o"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiCms.cc.o -c /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiCms.cc

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiCms.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiCms.cc.i"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiCms.cc > CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiCms.cc.i

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiCms.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiCms.cc.s"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiCms.cc -o CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiCms.cc.s

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiEvent.cc.o: src/CMakeFiles/XrdSsiLib.dir/flags.make
src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiEvent.cc.o: /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiEvent.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiEvent.cc.o"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiEvent.cc.o -c /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiEvent.cc

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiEvent.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiEvent.cc.i"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiEvent.cc > CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiEvent.cc.i

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiEvent.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiEvent.cc.s"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiEvent.cc -o CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiEvent.cc.s

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiFileResource.cc.o: src/CMakeFiles/XrdSsiLib.dir/flags.make
src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiFileResource.cc.o: /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiFileResource.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiFileResource.cc.o"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiFileResource.cc.o -c /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiFileResource.cc

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiFileResource.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiFileResource.cc.i"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiFileResource.cc > CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiFileResource.cc.i

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiFileResource.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiFileResource.cc.s"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiFileResource.cc -o CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiFileResource.cc.s

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiLogger.cc.o: src/CMakeFiles/XrdSsiLib.dir/flags.make
src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiLogger.cc.o: /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiLogger.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiLogger.cc.o"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiLogger.cc.o -c /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiLogger.cc

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiLogger.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiLogger.cc.i"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiLogger.cc > CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiLogger.cc.i

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiLogger.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiLogger.cc.s"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiLogger.cc -o CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiLogger.cc.s

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiPacer.cc.o: src/CMakeFiles/XrdSsiLib.dir/flags.make
src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiPacer.cc.o: /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiPacer.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiPacer.cc.o"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiPacer.cc.o -c /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiPacer.cc

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiPacer.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiPacer.cc.i"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiPacer.cc > CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiPacer.cc.i

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiPacer.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiPacer.cc.s"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiPacer.cc -o CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiPacer.cc.s

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiRequest.cc.o: src/CMakeFiles/XrdSsiLib.dir/flags.make
src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiRequest.cc.o: /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiRequest.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiRequest.cc.o"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiRequest.cc.o -c /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiRequest.cc

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiRequest.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiRequest.cc.i"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiRequest.cc > CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiRequest.cc.i

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiRequest.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiRequest.cc.s"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiRequest.cc -o CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiRequest.cc.s

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiResponder.cc.o: src/CMakeFiles/XrdSsiLib.dir/flags.make
src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiResponder.cc.o: /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiResponder.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiResponder.cc.o"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiResponder.cc.o -c /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiResponder.cc

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiResponder.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiResponder.cc.i"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiResponder.cc > CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiResponder.cc.i

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiResponder.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiResponder.cc.s"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiResponder.cc -o CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiResponder.cc.s

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiServReal.cc.o: src/CMakeFiles/XrdSsiLib.dir/flags.make
src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiServReal.cc.o: /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiServReal.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiServReal.cc.o"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiServReal.cc.o -c /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiServReal.cc

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiServReal.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiServReal.cc.i"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiServReal.cc > CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiServReal.cc.i

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiServReal.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiServReal.cc.s"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiServReal.cc -o CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiServReal.cc.s

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiService.cc.o: src/CMakeFiles/XrdSsiLib.dir/flags.make
src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiService.cc.o: /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiService.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiService.cc.o"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiService.cc.o -c /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiService.cc

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiService.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiService.cc.i"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiService.cc > CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiService.cc.i

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiService.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiService.cc.s"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiService.cc -o CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiService.cc.s

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiSessReal.cc.o: src/CMakeFiles/XrdSsiLib.dir/flags.make
src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiSessReal.cc.o: /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiSessReal.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building CXX object src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiSessReal.cc.o"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiSessReal.cc.o -c /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiSessReal.cc

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiSessReal.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiSessReal.cc.i"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiSessReal.cc > CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiSessReal.cc.i

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiSessReal.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiSessReal.cc.s"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiSessReal.cc -o CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiSessReal.cc.s

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiStats.cc.o: src/CMakeFiles/XrdSsiLib.dir/flags.make
src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiStats.cc.o: /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiStats.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Building CXX object src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiStats.cc.o"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiStats.cc.o -c /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiStats.cc

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiStats.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiStats.cc.i"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiStats.cc > CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiStats.cc.i

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiStats.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiStats.cc.s"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiStats.cc -o CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiStats.cc.s

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiTaskReal.cc.o: src/CMakeFiles/XrdSsiLib.dir/flags.make
src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiTaskReal.cc.o: /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiTaskReal.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_14) "Building CXX object src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiTaskReal.cc.o"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiTaskReal.cc.o -c /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiTaskReal.cc

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiTaskReal.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiTaskReal.cc.i"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiTaskReal.cc > CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiTaskReal.cc.i

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiTaskReal.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiTaskReal.cc.s"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiTaskReal.cc -o CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiTaskReal.cc.s

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiUtils.cc.o: src/CMakeFiles/XrdSsiLib.dir/flags.make
src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiUtils.cc.o: /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiUtils.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_15) "Building CXX object src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiUtils.cc.o"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiUtils.cc.o -c /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiUtils.cc

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiUtils.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiUtils.cc.i"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiUtils.cc > CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiUtils.cc.i

src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiUtils.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiUtils.cc.s"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src/XrdSsi/XrdSsiUtils.cc -o CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiUtils.cc.s

# Object files for target XrdSsiLib
XrdSsiLib_OBJECTS = \
"CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiAlert.cc.o" \
"CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiClient.cc.o" \
"CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiCms.cc.o" \
"CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiEvent.cc.o" \
"CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiFileResource.cc.o" \
"CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiLogger.cc.o" \
"CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiPacer.cc.o" \
"CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiRequest.cc.o" \
"CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiResponder.cc.o" \
"CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiServReal.cc.o" \
"CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiService.cc.o" \
"CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiSessReal.cc.o" \
"CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiStats.cc.o" \
"CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiTaskReal.cc.o" \
"CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiUtils.cc.o"

# External object files for target XrdSsiLib
XrdSsiLib_EXTERNAL_OBJECTS =

src/libXrdSsiLib.so.1.0.0: src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiAlert.cc.o
src/libXrdSsiLib.so.1.0.0: src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiClient.cc.o
src/libXrdSsiLib.so.1.0.0: src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiCms.cc.o
src/libXrdSsiLib.so.1.0.0: src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiEvent.cc.o
src/libXrdSsiLib.so.1.0.0: src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiFileResource.cc.o
src/libXrdSsiLib.so.1.0.0: src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiLogger.cc.o
src/libXrdSsiLib.so.1.0.0: src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiPacer.cc.o
src/libXrdSsiLib.so.1.0.0: src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiRequest.cc.o
src/libXrdSsiLib.so.1.0.0: src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiResponder.cc.o
src/libXrdSsiLib.so.1.0.0: src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiServReal.cc.o
src/libXrdSsiLib.so.1.0.0: src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiService.cc.o
src/libXrdSsiLib.so.1.0.0: src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiSessReal.cc.o
src/libXrdSsiLib.so.1.0.0: src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiStats.cc.o
src/libXrdSsiLib.so.1.0.0: src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiTaskReal.cc.o
src/libXrdSsiLib.so.1.0.0: src/CMakeFiles/XrdSsiLib.dir/XrdSsi/XrdSsiUtils.cc.o
src/libXrdSsiLib.so.1.0.0: src/CMakeFiles/XrdSsiLib.dir/build.make
src/libXrdSsiLib.so.1.0.0: src/XrdCl/libXrdCl.so.2.0.0
src/libXrdSsiLib.so.1.0.0: src/libXrdUtils.so.2.0.0
src/libXrdSsiLib.so.1.0.0: src/CMakeFiles/XrdSsiLib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_16) "Linking CXX shared library libXrdSsiLib.so"
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/XrdSsiLib.dir/link.txt --verbose=$(VERBOSE)
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && $(CMAKE_COMMAND) -E cmake_symlink_library libXrdSsiLib.so.1.0.0 libXrdSsiLib.so.1 libXrdSsiLib.so

src/libXrdSsiLib.so.1: src/libXrdSsiLib.so.1.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate src/libXrdSsiLib.so.1

src/libXrdSsiLib.so: src/libXrdSsiLib.so.1.0.0
	@$(CMAKE_COMMAND) -E touch_nocreate src/libXrdSsiLib.so

# Rule to build all files generated by this target.
src/CMakeFiles/XrdSsiLib.dir/build: src/libXrdSsiLib.so

.PHONY : src/CMakeFiles/XrdSsiLib.dir/build

src/CMakeFiles/XrdSsiLib.dir/clean:
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src && $(CMAKE_COMMAND) -P CMakeFiles/XrdSsiLib.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/XrdSsiLib.dir/clean

src/CMakeFiles/XrdSsiLib.dir/depend:
	cd /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD/src /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src /home/diagoras/root_cern/root/builddir/XROOTD-prefix/src/XROOTD-build/src/CMakeFiles/XrdSsiLib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/XrdSsiLib.dir/depend

