# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /workspaces/mavlab/Micro-XRCE-DDS-Agent

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /workspaces/mavlab/build/microxrcedds_agent

# Utility rule file for fastcdr.

# Include any custom commands dependencies for this target.
include CMakeFiles/fastcdr.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/fastcdr.dir/progress.make

CMakeFiles/fastcdr: CMakeFiles/fastcdr-complete

CMakeFiles/fastcdr-complete: fastcdr/src/fastcdr-stamp/fastcdr-install
CMakeFiles/fastcdr-complete: fastcdr/src/fastcdr-stamp/fastcdr-mkdir
CMakeFiles/fastcdr-complete: fastcdr/src/fastcdr-stamp/fastcdr-download
CMakeFiles/fastcdr-complete: fastcdr/src/fastcdr-stamp/fastcdr-update
CMakeFiles/fastcdr-complete: fastcdr/src/fastcdr-stamp/fastcdr-patch
CMakeFiles/fastcdr-complete: fastcdr/src/fastcdr-stamp/fastcdr-configure
CMakeFiles/fastcdr-complete: fastcdr/src/fastcdr-stamp/fastcdr-build
CMakeFiles/fastcdr-complete: fastcdr/src/fastcdr-stamp/fastcdr-install
CMakeFiles/fastcdr-complete: fastcdr/src/fastcdr-stamp/fastcdr-test
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspaces/mavlab/build/microxrcedds_agent/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'fastcdr'"
	/usr/bin/cmake -E make_directory /workspaces/mavlab/build/microxrcedds_agent/CMakeFiles
	/usr/bin/cmake -E touch /workspaces/mavlab/build/microxrcedds_agent/CMakeFiles/fastcdr-complete
	/usr/bin/cmake -E touch /workspaces/mavlab/build/microxrcedds_agent/fastcdr/src/fastcdr-stamp/fastcdr-done

fastcdr/src/fastcdr-stamp/fastcdr-build: fastcdr/src/fastcdr-stamp/fastcdr-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspaces/mavlab/build/microxrcedds_agent/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Performing build step for 'fastcdr'"
	cd /workspaces/mavlab/build/microxrcedds_agent/fastcdr/src/fastcdr-build && $(MAKE)
	cd /workspaces/mavlab/build/microxrcedds_agent/fastcdr/src/fastcdr-build && /usr/bin/cmake -E touch /workspaces/mavlab/build/microxrcedds_agent/fastcdr/src/fastcdr-stamp/fastcdr-build

fastcdr/src/fastcdr-stamp/fastcdr-configure: fastcdr/tmp/fastcdr-cfgcmd.txt
fastcdr/src/fastcdr-stamp/fastcdr-configure: fastcdr/tmp/fastcdr-cache-.cmake
fastcdr/src/fastcdr-stamp/fastcdr-configure: fastcdr/src/fastcdr-stamp/fastcdr-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspaces/mavlab/build/microxrcedds_agent/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Performing configure step for 'fastcdr'"
	cd /workspaces/mavlab/build/microxrcedds_agent/fastcdr/src/fastcdr-build && /usr/bin/cmake "-GUnix Makefiles" -C/workspaces/mavlab/build/microxrcedds_agent/fastcdr/tmp/fastcdr-cache-.cmake /workspaces/mavlab/build/microxrcedds_agent/fastcdr/src/fastcdr
	cd /workspaces/mavlab/build/microxrcedds_agent/fastcdr/src/fastcdr-build && /usr/bin/cmake -E touch /workspaces/mavlab/build/microxrcedds_agent/fastcdr/src/fastcdr-stamp/fastcdr-configure

fastcdr/src/fastcdr-stamp/fastcdr-download: fastcdr/src/fastcdr-stamp/fastcdr-gitinfo.txt
fastcdr/src/fastcdr-stamp/fastcdr-download: fastcdr/src/fastcdr-stamp/fastcdr-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspaces/mavlab/build/microxrcedds_agent/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (git clone) for 'fastcdr'"
	cd /workspaces/mavlab/build/microxrcedds_agent/fastcdr/src && /usr/bin/cmake -P /workspaces/mavlab/build/microxrcedds_agent/fastcdr/tmp/fastcdr-gitclone.cmake
	cd /workspaces/mavlab/build/microxrcedds_agent/fastcdr/src && /usr/bin/cmake -E touch /workspaces/mavlab/build/microxrcedds_agent/fastcdr/src/fastcdr-stamp/fastcdr-download

fastcdr/src/fastcdr-stamp/fastcdr-install: fastcdr/src/fastcdr-stamp/fastcdr-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspaces/mavlab/build/microxrcedds_agent/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Performing install step for 'fastcdr'"
	cd /workspaces/mavlab/build/microxrcedds_agent/fastcdr/src/fastcdr-build && $(MAKE) install
	cd /workspaces/mavlab/build/microxrcedds_agent/fastcdr/src/fastcdr-build && /usr/bin/cmake -E touch /workspaces/mavlab/build/microxrcedds_agent/fastcdr/src/fastcdr-stamp/fastcdr-install

fastcdr/src/fastcdr-stamp/fastcdr-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspaces/mavlab/build/microxrcedds_agent/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Creating directories for 'fastcdr'"
	/usr/bin/cmake -E make_directory /workspaces/mavlab/build/microxrcedds_agent/fastcdr/src/fastcdr
	/usr/bin/cmake -E make_directory /workspaces/mavlab/build/microxrcedds_agent/fastcdr/src/fastcdr-build
	/usr/bin/cmake -E make_directory /workspaces/mavlab/build/microxrcedds_agent/temp_install/fastcdr-1.0.10
	/usr/bin/cmake -E make_directory /workspaces/mavlab/build/microxrcedds_agent/fastcdr/tmp
	/usr/bin/cmake -E make_directory /workspaces/mavlab/build/microxrcedds_agent/fastcdr/src/fastcdr-stamp
	/usr/bin/cmake -E make_directory /workspaces/mavlab/build/microxrcedds_agent/fastcdr/src
	/usr/bin/cmake -E make_directory /workspaces/mavlab/build/microxrcedds_agent/fastcdr/src/fastcdr-stamp
	/usr/bin/cmake -E touch /workspaces/mavlab/build/microxrcedds_agent/fastcdr/src/fastcdr-stamp/fastcdr-mkdir

fastcdr/src/fastcdr-stamp/fastcdr-patch: fastcdr/src/fastcdr-stamp/fastcdr-update
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspaces/mavlab/build/microxrcedds_agent/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "No patch step for 'fastcdr'"
	/usr/bin/cmake -E echo_append
	/usr/bin/cmake -E touch /workspaces/mavlab/build/microxrcedds_agent/fastcdr/src/fastcdr-stamp/fastcdr-patch

fastcdr/src/fastcdr-stamp/fastcdr-test: fastcdr/src/fastcdr-stamp/fastcdr-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspaces/mavlab/build/microxrcedds_agent/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Performing test step for 'fastcdr'"
	cd /workspaces/mavlab/build/microxrcedds_agent/fastcdr/src/fastcdr-build && /usr/bin/cmake -E rename /workspaces/mavlab/build/microxrcedds_agent/fastcdr/src/fastcdr/src/cpp/CMakeLists.txt.bak /workspaces/mavlab/build/microxrcedds_agent/fastcdr/src/fastcdr/src/cpp/CMakeLists.txt
	cd /workspaces/mavlab/build/microxrcedds_agent/fastcdr/src/fastcdr-build && /usr/bin/cmake -E touch /workspaces/mavlab/build/microxrcedds_agent/fastcdr/src/fastcdr-stamp/fastcdr-test

fastcdr/src/fastcdr-stamp/fastcdr-update: fastcdr/src/fastcdr-stamp/fastcdr-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/workspaces/mavlab/build/microxrcedds_agent/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Performing update step for 'fastcdr'"
	cd /workspaces/mavlab/build/microxrcedds_agent/fastcdr/src/fastcdr && /usr/bin/cmake -E copy /workspaces/mavlab/build/microxrcedds_agent/fastcdr/src/fastcdr/src/cpp/CMakeLists.txt /workspaces/mavlab/build/microxrcedds_agent/fastcdr/src/fastcdr/src/cpp/CMakeLists.txt.bak
	cd /workspaces/mavlab/build/microxrcedds_agent/fastcdr/src/fastcdr && /usr/bin/cmake -DSOVERSION_FILE=/workspaces/mavlab/build/microxrcedds_agent/fastcdr/src/fastcdr/src/cpp/CMakeLists.txt -P /workspaces/mavlab/Micro-XRCE-DDS-Agent/cmake/Soversion.cmake

fastcdr: CMakeFiles/fastcdr
fastcdr: CMakeFiles/fastcdr-complete
fastcdr: fastcdr/src/fastcdr-stamp/fastcdr-build
fastcdr: fastcdr/src/fastcdr-stamp/fastcdr-configure
fastcdr: fastcdr/src/fastcdr-stamp/fastcdr-download
fastcdr: fastcdr/src/fastcdr-stamp/fastcdr-install
fastcdr: fastcdr/src/fastcdr-stamp/fastcdr-mkdir
fastcdr: fastcdr/src/fastcdr-stamp/fastcdr-patch
fastcdr: fastcdr/src/fastcdr-stamp/fastcdr-test
fastcdr: fastcdr/src/fastcdr-stamp/fastcdr-update
fastcdr: CMakeFiles/fastcdr.dir/build.make
.PHONY : fastcdr

# Rule to build all files generated by this target.
CMakeFiles/fastcdr.dir/build: fastcdr
.PHONY : CMakeFiles/fastcdr.dir/build

CMakeFiles/fastcdr.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/fastcdr.dir/cmake_clean.cmake
.PHONY : CMakeFiles/fastcdr.dir/clean

CMakeFiles/fastcdr.dir/depend:
	cd /workspaces/mavlab/build/microxrcedds_agent && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /workspaces/mavlab/Micro-XRCE-DDS-Agent /workspaces/mavlab/Micro-XRCE-DDS-Agent /workspaces/mavlab/build/microxrcedds_agent /workspaces/mavlab/build/microxrcedds_agent /workspaces/mavlab/build/microxrcedds_agent/CMakeFiles/fastcdr.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/fastcdr.dir/depend

