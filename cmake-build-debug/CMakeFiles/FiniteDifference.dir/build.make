# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = D:\devArchive\dev\Science\FDThermal\FiniteDifference

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = D:\devArchive\dev\Science\FDThermal\FiniteDifference\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/FiniteDifference.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/FiniteDifference.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/FiniteDifference.dir/flags.make

CMakeFiles/FiniteDifference.dir/main.cpp.obj: CMakeFiles/FiniteDifference.dir/flags.make
CMakeFiles/FiniteDifference.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\devArchive\dev\Science\FDThermal\FiniteDifference\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/FiniteDifference.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\FiniteDifference.dir\main.cpp.obj -c D:\devArchive\dev\Science\FDThermal\FiniteDifference\main.cpp

CMakeFiles/FiniteDifference.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FiniteDifference.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\devArchive\dev\Science\FDThermal\FiniteDifference\main.cpp > CMakeFiles\FiniteDifference.dir\main.cpp.i

CMakeFiles/FiniteDifference.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FiniteDifference.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\devArchive\dev\Science\FDThermal\FiniteDifference\main.cpp -o CMakeFiles\FiniteDifference.dir\main.cpp.s

CMakeFiles/FiniteDifference.dir/grid.cpp.obj: CMakeFiles/FiniteDifference.dir/flags.make
CMakeFiles/FiniteDifference.dir/grid.cpp.obj: ../grid.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\devArchive\dev\Science\FDThermal\FiniteDifference\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/FiniteDifference.dir/grid.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\FiniteDifference.dir\grid.cpp.obj -c D:\devArchive\dev\Science\FDThermal\FiniteDifference\grid.cpp

CMakeFiles/FiniteDifference.dir/grid.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FiniteDifference.dir/grid.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\devArchive\dev\Science\FDThermal\FiniteDifference\grid.cpp > CMakeFiles\FiniteDifference.dir\grid.cpp.i

CMakeFiles/FiniteDifference.dir/grid.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FiniteDifference.dir/grid.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\devArchive\dev\Science\FDThermal\FiniteDifference\grid.cpp -o CMakeFiles\FiniteDifference.dir\grid.cpp.s

CMakeFiles/FiniteDifference.dir/parser.cpp.obj: CMakeFiles/FiniteDifference.dir/flags.make
CMakeFiles/FiniteDifference.dir/parser.cpp.obj: ../parser.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\devArchive\dev\Science\FDThermal\FiniteDifference\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/FiniteDifference.dir/parser.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\FiniteDifference.dir\parser.cpp.obj -c D:\devArchive\dev\Science\FDThermal\FiniteDifference\parser.cpp

CMakeFiles/FiniteDifference.dir/parser.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FiniteDifference.dir/parser.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\devArchive\dev\Science\FDThermal\FiniteDifference\parser.cpp > CMakeFiles\FiniteDifference.dir\parser.cpp.i

CMakeFiles/FiniteDifference.dir/parser.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FiniteDifference.dir/parser.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\devArchive\dev\Science\FDThermal\FiniteDifference\parser.cpp -o CMakeFiles\FiniteDifference.dir\parser.cpp.s

CMakeFiles/FiniteDifference.dir/FDESolver.cpp.obj: CMakeFiles/FiniteDifference.dir/flags.make
CMakeFiles/FiniteDifference.dir/FDESolver.cpp.obj: ../FDESolver.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=D:\devArchive\dev\Science\FDThermal\FiniteDifference\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/FiniteDifference.dir/FDESolver.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\FiniteDifference.dir\FDESolver.cpp.obj -c D:\devArchive\dev\Science\FDThermal\FiniteDifference\FDESolver.cpp

CMakeFiles/FiniteDifference.dir/FDESolver.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/FiniteDifference.dir/FDESolver.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E D:\devArchive\dev\Science\FDThermal\FiniteDifference\FDESolver.cpp > CMakeFiles\FiniteDifference.dir\FDESolver.cpp.i

CMakeFiles/FiniteDifference.dir/FDESolver.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/FiniteDifference.dir/FDESolver.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S D:\devArchive\dev\Science\FDThermal\FiniteDifference\FDESolver.cpp -o CMakeFiles\FiniteDifference.dir\FDESolver.cpp.s

# Object files for target FiniteDifference
FiniteDifference_OBJECTS = \
"CMakeFiles/FiniteDifference.dir/main.cpp.obj" \
"CMakeFiles/FiniteDifference.dir/grid.cpp.obj" \
"CMakeFiles/FiniteDifference.dir/parser.cpp.obj" \
"CMakeFiles/FiniteDifference.dir/FDESolver.cpp.obj"

# External object files for target FiniteDifference
FiniteDifference_EXTERNAL_OBJECTS =

FiniteDifference.exe: CMakeFiles/FiniteDifference.dir/main.cpp.obj
FiniteDifference.exe: CMakeFiles/FiniteDifference.dir/grid.cpp.obj
FiniteDifference.exe: CMakeFiles/FiniteDifference.dir/parser.cpp.obj
FiniteDifference.exe: CMakeFiles/FiniteDifference.dir/FDESolver.cpp.obj
FiniteDifference.exe: CMakeFiles/FiniteDifference.dir/build.make
FiniteDifference.exe: CMakeFiles/FiniteDifference.dir/linklibs.rsp
FiniteDifference.exe: CMakeFiles/FiniteDifference.dir/objects1.rsp
FiniteDifference.exe: CMakeFiles/FiniteDifference.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=D:\devArchive\dev\Science\FDThermal\FiniteDifference\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable FiniteDifference.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\FiniteDifference.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/FiniteDifference.dir/build: FiniteDifference.exe

.PHONY : CMakeFiles/FiniteDifference.dir/build

CMakeFiles/FiniteDifference.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\FiniteDifference.dir\cmake_clean.cmake
.PHONY : CMakeFiles/FiniteDifference.dir/clean

CMakeFiles/FiniteDifference.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" D:\devArchive\dev\Science\FDThermal\FiniteDifference D:\devArchive\dev\Science\FDThermal\FiniteDifference D:\devArchive\dev\Science\FDThermal\FiniteDifference\cmake-build-debug D:\devArchive\dev\Science\FDThermal\FiniteDifference\cmake-build-debug D:\devArchive\dev\Science\FDThermal\FiniteDifference\cmake-build-debug\CMakeFiles\FiniteDifference.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/FiniteDifference.dir/depend

