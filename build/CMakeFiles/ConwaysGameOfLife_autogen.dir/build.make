# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 4.0

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
CMAKE_COMMAND = /opt/cmake/cmake-4.0.2-linux-x86_64/bin/cmake

# The command to remove a file.
RM = /opt/cmake/cmake-4.0.2-linux-x86_64/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/aleksa/Documents/Projects/Conway's game of life"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/aleksa/Documents/Projects/Conway's game of life/build"

# Utility rule file for ConwaysGameOfLife_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/ConwaysGameOfLife_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ConwaysGameOfLife_autogen.dir/progress.make

CMakeFiles/ConwaysGameOfLife_autogen: ConwaysGameOfLife_autogen/timestamp

ConwaysGameOfLife_autogen/timestamp: /usr/lib/qt6/libexec/moc
ConwaysGameOfLife_autogen/timestamp: /usr/lib/qt6/libexec/uic
ConwaysGameOfLife_autogen/timestamp: CMakeFiles/ConwaysGameOfLife_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir="/home/aleksa/Documents/Projects/Conway's game of life/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target ConwaysGameOfLife"
	/opt/cmake/cmake-4.0.2-linux-x86_64/bin/cmake -E cmake_autogen "/home/aleksa/Documents/Projects/Conway's game of life/build/CMakeFiles/ConwaysGameOfLife_autogen.dir/AutogenInfo.json" ""
	/opt/cmake/cmake-4.0.2-linux-x86_64/bin/cmake -E touch "/home/aleksa/Documents/Projects/Conway's game of life/build/ConwaysGameOfLife_autogen/timestamp"

CMakeFiles/ConwaysGameOfLife_autogen.dir/codegen:
.PHONY : CMakeFiles/ConwaysGameOfLife_autogen.dir/codegen

ConwaysGameOfLife_autogen: CMakeFiles/ConwaysGameOfLife_autogen
ConwaysGameOfLife_autogen: ConwaysGameOfLife_autogen/timestamp
ConwaysGameOfLife_autogen: CMakeFiles/ConwaysGameOfLife_autogen.dir/build.make
.PHONY : ConwaysGameOfLife_autogen

# Rule to build all files generated by this target.
CMakeFiles/ConwaysGameOfLife_autogen.dir/build: ConwaysGameOfLife_autogen
.PHONY : CMakeFiles/ConwaysGameOfLife_autogen.dir/build

CMakeFiles/ConwaysGameOfLife_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ConwaysGameOfLife_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ConwaysGameOfLife_autogen.dir/clean

CMakeFiles/ConwaysGameOfLife_autogen.dir/depend:
	cd "/home/aleksa/Documents/Projects/Conway's game of life/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/aleksa/Documents/Projects/Conway's game of life" "/home/aleksa/Documents/Projects/Conway's game of life" "/home/aleksa/Documents/Projects/Conway's game of life/build" "/home/aleksa/Documents/Projects/Conway's game of life/build" "/home/aleksa/Documents/Projects/Conway's game of life/build/CMakeFiles/ConwaysGameOfLife_autogen.dir/DependInfo.cmake" "--color=$(COLOR)"
.PHONY : CMakeFiles/ConwaysGameOfLife_autogen.dir/depend

