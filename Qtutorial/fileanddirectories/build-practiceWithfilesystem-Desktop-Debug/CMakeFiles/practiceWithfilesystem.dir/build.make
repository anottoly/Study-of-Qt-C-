# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_SOURCE_DIR = /home/localadmin/Develop/Study-of-Qt-Cpp/Qtutorial/fileanddirectories/practiceWithfilesystem

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/localadmin/Develop/Study-of-Qt-Cpp/Qtutorial/fileanddirectories/build-practiceWithfilesystem-Desktop-Debug

# Include any dependencies generated for this target.
include CMakeFiles/practiceWithfilesystem.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/practiceWithfilesystem.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/practiceWithfilesystem.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/practiceWithfilesystem.dir/flags.make

CMakeFiles/practiceWithfilesystem.dir/main.cpp.o: CMakeFiles/practiceWithfilesystem.dir/flags.make
CMakeFiles/practiceWithfilesystem.dir/main.cpp.o: /home/localadmin/Develop/Study-of-Qt-Cpp/Qtutorial/fileanddirectories/practiceWithfilesystem/main.cpp
CMakeFiles/practiceWithfilesystem.dir/main.cpp.o: CMakeFiles/practiceWithfilesystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/localadmin/Develop/Study-of-Qt-Cpp/Qtutorial/fileanddirectories/build-practiceWithfilesystem-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/practiceWithfilesystem.dir/main.cpp.o"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/practiceWithfilesystem.dir/main.cpp.o -MF CMakeFiles/practiceWithfilesystem.dir/main.cpp.o.d -o CMakeFiles/practiceWithfilesystem.dir/main.cpp.o -c /home/localadmin/Develop/Study-of-Qt-Cpp/Qtutorial/fileanddirectories/practiceWithfilesystem/main.cpp

CMakeFiles/practiceWithfilesystem.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/practiceWithfilesystem.dir/main.cpp.i"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/localadmin/Develop/Study-of-Qt-Cpp/Qtutorial/fileanddirectories/practiceWithfilesystem/main.cpp > CMakeFiles/practiceWithfilesystem.dir/main.cpp.i

CMakeFiles/practiceWithfilesystem.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/practiceWithfilesystem.dir/main.cpp.s"
	/usr/bin/g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/localadmin/Develop/Study-of-Qt-Cpp/Qtutorial/fileanddirectories/practiceWithfilesystem/main.cpp -o CMakeFiles/practiceWithfilesystem.dir/main.cpp.s

# Object files for target practiceWithfilesystem
practiceWithfilesystem_OBJECTS = \
"CMakeFiles/practiceWithfilesystem.dir/main.cpp.o"

# External object files for target practiceWithfilesystem
practiceWithfilesystem_EXTERNAL_OBJECTS =

practiceWithfilesystem: CMakeFiles/practiceWithfilesystem.dir/main.cpp.o
practiceWithfilesystem: CMakeFiles/practiceWithfilesystem.dir/build.make
practiceWithfilesystem: /usr/lib64/libQt5Core.so.5.15.2
practiceWithfilesystem: CMakeFiles/practiceWithfilesystem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/localadmin/Develop/Study-of-Qt-Cpp/Qtutorial/fileanddirectories/build-practiceWithfilesystem-Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable practiceWithfilesystem"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/practiceWithfilesystem.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/practiceWithfilesystem.dir/build: practiceWithfilesystem
.PHONY : CMakeFiles/practiceWithfilesystem.dir/build

CMakeFiles/practiceWithfilesystem.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/practiceWithfilesystem.dir/cmake_clean.cmake
.PHONY : CMakeFiles/practiceWithfilesystem.dir/clean

CMakeFiles/practiceWithfilesystem.dir/depend:
	cd /home/localadmin/Develop/Study-of-Qt-Cpp/Qtutorial/fileanddirectories/build-practiceWithfilesystem-Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/localadmin/Develop/Study-of-Qt-Cpp/Qtutorial/fileanddirectories/practiceWithfilesystem /home/localadmin/Develop/Study-of-Qt-Cpp/Qtutorial/fileanddirectories/practiceWithfilesystem /home/localadmin/Develop/Study-of-Qt-Cpp/Qtutorial/fileanddirectories/build-practiceWithfilesystem-Desktop-Debug /home/localadmin/Develop/Study-of-Qt-Cpp/Qtutorial/fileanddirectories/build-practiceWithfilesystem-Desktop-Debug /home/localadmin/Develop/Study-of-Qt-Cpp/Qtutorial/fileanddirectories/build-practiceWithfilesystem-Desktop-Debug/CMakeFiles/practiceWithfilesystem.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/practiceWithfilesystem.dir/depend

