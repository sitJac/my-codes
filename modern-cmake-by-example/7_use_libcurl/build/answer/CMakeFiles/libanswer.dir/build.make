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
CMAKE_SOURCE_DIR = /home/modern-cmake-by-example/7_use_libcurl

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/modern-cmake-by-example/7_use_libcurl/build

# Include any dependencies generated for this target.
include answer/CMakeFiles/libanswer.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include answer/CMakeFiles/libanswer.dir/compiler_depend.make

# Include the progress variables for this target.
include answer/CMakeFiles/libanswer.dir/progress.make

# Include the compile flags for this target's objects.
include answer/CMakeFiles/libanswer.dir/flags.make

answer/CMakeFiles/libanswer.dir/answer.cpp.o: answer/CMakeFiles/libanswer.dir/flags.make
answer/CMakeFiles/libanswer.dir/answer.cpp.o: ../answer/answer.cpp
answer/CMakeFiles/libanswer.dir/answer.cpp.o: answer/CMakeFiles/libanswer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/modern-cmake-by-example/7_use_libcurl/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object answer/CMakeFiles/libanswer.dir/answer.cpp.o"
	cd /home/modern-cmake-by-example/7_use_libcurl/build/answer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT answer/CMakeFiles/libanswer.dir/answer.cpp.o -MF CMakeFiles/libanswer.dir/answer.cpp.o.d -o CMakeFiles/libanswer.dir/answer.cpp.o -c /home/modern-cmake-by-example/7_use_libcurl/answer/answer.cpp

answer/CMakeFiles/libanswer.dir/answer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/libanswer.dir/answer.cpp.i"
	cd /home/modern-cmake-by-example/7_use_libcurl/build/answer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/modern-cmake-by-example/7_use_libcurl/answer/answer.cpp > CMakeFiles/libanswer.dir/answer.cpp.i

answer/CMakeFiles/libanswer.dir/answer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/libanswer.dir/answer.cpp.s"
	cd /home/modern-cmake-by-example/7_use_libcurl/build/answer && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/modern-cmake-by-example/7_use_libcurl/answer/answer.cpp -o CMakeFiles/libanswer.dir/answer.cpp.s

# Object files for target libanswer
libanswer_OBJECTS = \
"CMakeFiles/libanswer.dir/answer.cpp.o"

# External object files for target libanswer
libanswer_EXTERNAL_OBJECTS =

answer/liblibanswer.a: answer/CMakeFiles/libanswer.dir/answer.cpp.o
answer/liblibanswer.a: answer/CMakeFiles/libanswer.dir/build.make
answer/liblibanswer.a: answer/CMakeFiles/libanswer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/modern-cmake-by-example/7_use_libcurl/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library liblibanswer.a"
	cd /home/modern-cmake-by-example/7_use_libcurl/build/answer && $(CMAKE_COMMAND) -P CMakeFiles/libanswer.dir/cmake_clean_target.cmake
	cd /home/modern-cmake-by-example/7_use_libcurl/build/answer && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/libanswer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
answer/CMakeFiles/libanswer.dir/build: answer/liblibanswer.a
.PHONY : answer/CMakeFiles/libanswer.dir/build

answer/CMakeFiles/libanswer.dir/clean:
	cd /home/modern-cmake-by-example/7_use_libcurl/build/answer && $(CMAKE_COMMAND) -P CMakeFiles/libanswer.dir/cmake_clean.cmake
.PHONY : answer/CMakeFiles/libanswer.dir/clean

answer/CMakeFiles/libanswer.dir/depend:
	cd /home/modern-cmake-by-example/7_use_libcurl/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/modern-cmake-by-example/7_use_libcurl /home/modern-cmake-by-example/7_use_libcurl/answer /home/modern-cmake-by-example/7_use_libcurl/build /home/modern-cmake-by-example/7_use_libcurl/build/answer /home/modern-cmake-by-example/7_use_libcurl/build/answer/CMakeFiles/libanswer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : answer/CMakeFiles/libanswer.dir/depend

