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
include CMakeFiles/fltadd.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/fltadd.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/fltadd.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/fltadd.dir/flags.make

CMakeFiles/fltadd.dir/basicGrammar/fltadd.cpp.obj: CMakeFiles/fltadd.dir/flags.make
CMakeFiles/fltadd.dir/basicGrammar/fltadd.cpp.obj: E:/临时/软件学习/cppCLion/basicGrammar/fltadd.cpp
CMakeFiles/fltadd.dir/basicGrammar/fltadd.cpp.obj: CMakeFiles/fltadd.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\临时\软件学习\cppCLion\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/fltadd.dir/basicGrammar/fltadd.cpp.obj"
	C:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/fltadd.dir/basicGrammar/fltadd.cpp.obj -MF CMakeFiles\fltadd.dir\basicGrammar\fltadd.cpp.obj.d -o CMakeFiles\fltadd.dir\basicGrammar\fltadd.cpp.obj -c E:\临时\软件学习\cppCLion\basicGrammar\fltadd.cpp

CMakeFiles/fltadd.dir/basicGrammar/fltadd.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/fltadd.dir/basicGrammar/fltadd.cpp.i"
	C:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\临时\软件学习\cppCLion\basicGrammar\fltadd.cpp > CMakeFiles\fltadd.dir\basicGrammar\fltadd.cpp.i

CMakeFiles/fltadd.dir/basicGrammar/fltadd.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/fltadd.dir/basicGrammar/fltadd.cpp.s"
	C:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\临时\软件学习\cppCLion\basicGrammar\fltadd.cpp -o CMakeFiles\fltadd.dir\basicGrammar\fltadd.cpp.s

# Object files for target fltadd
fltadd_OBJECTS = \
"CMakeFiles/fltadd.dir/basicGrammar/fltadd.cpp.obj"

# External object files for target fltadd
fltadd_EXTERNAL_OBJECTS =

fltadd.exe: CMakeFiles/fltadd.dir/basicGrammar/fltadd.cpp.obj
fltadd.exe: CMakeFiles/fltadd.dir/build.make
fltadd.exe: CMakeFiles/fltadd.dir/linkLibs.rsp
fltadd.exe: CMakeFiles/fltadd.dir/objects1.rsp
fltadd.exe: CMakeFiles/fltadd.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=E:\临时\软件学习\cppCLion\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable fltadd.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\fltadd.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/fltadd.dir/build: fltadd.exe
.PHONY : CMakeFiles/fltadd.dir/build

CMakeFiles/fltadd.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\fltadd.dir\cmake_clean.cmake
.PHONY : CMakeFiles/fltadd.dir/clean

CMakeFiles/fltadd.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\临时\软件学习\cppCLion E:\临时\软件学习\cppCLion E:\临时\软件学习\cppCLion\build E:\临时\软件学习\cppCLion\build E:\临时\软件学习\cppCLion\build\CMakeFiles\fltadd.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/fltadd.dir/depend

