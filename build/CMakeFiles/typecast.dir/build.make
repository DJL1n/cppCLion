# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.28

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\Common7\IDE\CommonExtensions\Microsoft\CMake\CMake\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\临时\软件学习\cppCLion

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\临时\软件学习\cppCLion\build

# Include any dependencies generated for this target.
include CMakeFiles/typecast.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/typecast.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/typecast.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/typecast.dir/flags.make

CMakeFiles/typecast.dir/basicGrammar/typecast.cpp.obj: CMakeFiles/typecast.dir/flags.make
CMakeFiles/typecast.dir/basicGrammar/typecast.cpp.obj: E:/临时/软件学习/cppCLion/basicGrammar/typecast.cpp
CMakeFiles/typecast.dir/basicGrammar/typecast.cpp.obj: CMakeFiles/typecast.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\临时\软件学习\cppCLion\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/typecast.dir/basicGrammar/typecast.cpp.obj"
	C:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/typecast.dir/basicGrammar/typecast.cpp.obj -MF CMakeFiles\typecast.dir\basicGrammar\typecast.cpp.obj.d -o CMakeFiles\typecast.dir\basicGrammar\typecast.cpp.obj -c E:\临时\软件学习\cppCLion\basicGrammar\typecast.cpp

CMakeFiles/typecast.dir/basicGrammar/typecast.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/typecast.dir/basicGrammar/typecast.cpp.i"
	C:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\临时\软件学习\cppCLion\basicGrammar\typecast.cpp > CMakeFiles\typecast.dir\basicGrammar\typecast.cpp.i

CMakeFiles/typecast.dir/basicGrammar/typecast.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/typecast.dir/basicGrammar/typecast.cpp.s"
	C:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\临时\软件学习\cppCLion\basicGrammar\typecast.cpp -o CMakeFiles\typecast.dir\basicGrammar\typecast.cpp.s

# Object files for target typecast
typecast_OBJECTS = \
"CMakeFiles/typecast.dir/basicGrammar/typecast.cpp.obj"

# External object files for target typecast
typecast_EXTERNAL_OBJECTS =

typecast.exe: CMakeFiles/typecast.dir/basicGrammar/typecast.cpp.obj
typecast.exe: CMakeFiles/typecast.dir/build.make
typecast.exe: CMakeFiles/typecast.dir/linkLibs.rsp
typecast.exe: CMakeFiles/typecast.dir/objects1.rsp
typecast.exe: CMakeFiles/typecast.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=E:\临时\软件学习\cppCLion\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable typecast.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\typecast.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/typecast.dir/build: typecast.exe
.PHONY : CMakeFiles/typecast.dir/build

CMakeFiles/typecast.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\typecast.dir\cmake_clean.cmake
.PHONY : CMakeFiles/typecast.dir/clean

CMakeFiles/typecast.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\临时\软件学习\cppCLion E:\临时\软件学习\cppCLion E:\临时\软件学习\cppCLion\build E:\临时\软件学习\cppCLion\build E:\临时\软件学习\cppCLion\build\CMakeFiles\typecast.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/typecast.dir/depend

