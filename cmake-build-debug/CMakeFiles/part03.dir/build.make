# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.23

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
CMAKE_SOURCE_DIR = /mnt/c/Users/lsw94/Desktop/CLion/untitled1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/lsw94/Desktop/CLion/untitled1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/part03.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/part03.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/part03.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/part03.dir/flags.make

CMakeFiles/part03.dir/part03/nullptr.cpp.o: CMakeFiles/part03.dir/flags.make
CMakeFiles/part03.dir/part03/nullptr.cpp.o: ../part03/nullptr.cpp
CMakeFiles/part03.dir/part03/nullptr.cpp.o: CMakeFiles/part03.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/lsw94/Desktop/CLion/untitled1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/part03.dir/part03/nullptr.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/part03.dir/part03/nullptr.cpp.o -MF CMakeFiles/part03.dir/part03/nullptr.cpp.o.d -o CMakeFiles/part03.dir/part03/nullptr.cpp.o -c /mnt/c/Users/lsw94/Desktop/CLion/untitled1/part03/nullptr.cpp

CMakeFiles/part03.dir/part03/nullptr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/part03.dir/part03/nullptr.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/lsw94/Desktop/CLion/untitled1/part03/nullptr.cpp > CMakeFiles/part03.dir/part03/nullptr.cpp.i

CMakeFiles/part03.dir/part03/nullptr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/part03.dir/part03/nullptr.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/lsw94/Desktop/CLion/untitled1/part03/nullptr.cpp -o CMakeFiles/part03.dir/part03/nullptr.cpp.s

# Object files for target part03
part03_OBJECTS = \
"CMakeFiles/part03.dir/part03/nullptr.cpp.o"

# External object files for target part03
part03_EXTERNAL_OBJECTS =

part03: CMakeFiles/part03.dir/part03/nullptr.cpp.o
part03: CMakeFiles/part03.dir/build.make
part03: CMakeFiles/part03.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/lsw94/Desktop/CLion/untitled1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable part03"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/part03.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/part03.dir/build: part03
.PHONY : CMakeFiles/part03.dir/build

CMakeFiles/part03.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/part03.dir/cmake_clean.cmake
.PHONY : CMakeFiles/part03.dir/clean

CMakeFiles/part03.dir/depend:
	cd /mnt/c/Users/lsw94/Desktop/CLion/untitled1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/lsw94/Desktop/CLion/untitled1 /mnt/c/Users/lsw94/Desktop/CLion/untitled1 /mnt/c/Users/lsw94/Desktop/CLion/untitled1/cmake-build-debug /mnt/c/Users/lsw94/Desktop/CLion/untitled1/cmake-build-debug /mnt/c/Users/lsw94/Desktop/CLion/untitled1/cmake-build-debug/CMakeFiles/part03.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/part03.dir/depend
