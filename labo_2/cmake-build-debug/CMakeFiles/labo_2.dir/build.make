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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.3\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Softwareontwerp C-C++\labo_2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Softwareontwerp C-C++\labo_2\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/labo_2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/labo_2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/labo_2.dir/flags.make

CMakeFiles/labo_2.dir/main.cpp.obj: CMakeFiles/labo_2.dir/flags.make
CMakeFiles/labo_2.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Softwareontwerp C-C++\labo_2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/labo_2.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\labo_2.dir\main.cpp.obj -c "D:\Softwareontwerp C-C++\labo_2\main.cpp"

CMakeFiles/labo_2.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/labo_2.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Softwareontwerp C-C++\labo_2\main.cpp" > CMakeFiles\labo_2.dir\main.cpp.i

CMakeFiles/labo_2.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/labo_2.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-W\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Softwareontwerp C-C++\labo_2\main.cpp" -o CMakeFiles\labo_2.dir\main.cpp.s

# Object files for target labo_2
labo_2_OBJECTS = \
"CMakeFiles/labo_2.dir/main.cpp.obj"

# External object files for target labo_2
labo_2_EXTERNAL_OBJECTS =

labo_2.exe: CMakeFiles/labo_2.dir/main.cpp.obj
labo_2.exe: CMakeFiles/labo_2.dir/build.make
labo_2.exe: CMakeFiles/labo_2.dir/linklibs.rsp
labo_2.exe: CMakeFiles/labo_2.dir/objects1.rsp
labo_2.exe: CMakeFiles/labo_2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Softwareontwerp C-C++\labo_2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable labo_2.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\labo_2.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/labo_2.dir/build: labo_2.exe

.PHONY : CMakeFiles/labo_2.dir/build

CMakeFiles/labo_2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\labo_2.dir\cmake_clean.cmake
.PHONY : CMakeFiles/labo_2.dir/clean

CMakeFiles/labo_2.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Softwareontwerp C-C++\labo_2" "D:\Softwareontwerp C-C++\labo_2" "D:\Softwareontwerp C-C++\labo_2\cmake-build-debug" "D:\Softwareontwerp C-C++\labo_2\cmake-build-debug" "D:\Softwareontwerp C-C++\labo_2\cmake-build-debug\CMakeFiles\labo_2.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/labo_2.dir/depend
