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
include CMakeFiles/hexoct.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/hexoct.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/hexoct.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hexoct.dir/flags.make

CMakeFiles/hexoct.dir/basicGrammar/hexoct.cpp.obj: CMakeFiles/hexoct.dir/flags.make
CMakeFiles/hexoct.dir/basicGrammar/hexoct.cpp.obj: E:/临时/软件学习/cppCLion/basicGrammar/hexoct.cpp
CMakeFiles/hexoct.dir/basicGrammar/hexoct.cpp.obj: CMakeFiles/hexoct.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\临时\软件学习\cppCLion\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hexoct.dir/basicGrammar/hexoct.cpp.obj"
	C:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/hexoct.dir/basicGrammar/hexoct.cpp.obj -MF CMakeFiles\hexoct.dir\basicGrammar\hexoct.cpp.obj.d -o CMakeFiles\hexoct.dir\basicGrammar\hexoct.cpp.obj -c E:\临时\软件学习\cppCLion\basicGrammar\hexoct.cpp

CMakeFiles/hexoct.dir/basicGrammar/hexoct.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/hexoct.dir/basicGrammar/hexoct.cpp.i"
	C:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\临时\软件学习\cppCLion\basicGrammar\hexoct.cpp > CMakeFiles\hexoct.dir\basicGrammar\hexoct.cpp.i

CMakeFiles/hexoct.dir/basicGrammar/hexoct.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/hexoct.dir/basicGrammar/hexoct.cpp.s"
	C:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\临时\软件学习\cppCLion\basicGrammar\hexoct.cpp -o CMakeFiles\hexoct.dir\basicGrammar\hexoct.cpp.s

# Object files for target hexoct
hexoct_OBJECTS = \
"CMakeFiles/hexoct.dir/basicGrammar/hexoct.cpp.obj"

# External object files for target hexoct
hexoct_EXTERNAL_OBJECTS =

hexoct.exe: CMakeFiles/hexoct.dir/basicGrammar/hexoct.cpp.obj
hexoct.exe: CMakeFiles/hexoct.dir/build.make
hexoct.exe: CMakeFiles/hexoct.dir/linkLibs.rsp
hexoct.exe: CMakeFiles/hexoct.dir/objects1.rsp
hexoct.exe: CMakeFiles/hexoct.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=E:\临时\软件学习\cppCLion\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable hexoct.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\hexoct.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hexoct.dir/build: hexoct.exe
.PHONY : CMakeFiles/hexoct.dir/build

CMakeFiles/hexoct.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\hexoct.dir\cmake_clean.cmake
.PHONY : CMakeFiles/hexoct.dir/clean

CMakeFiles/hexoct.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\临时\软件学习\cppCLion E:\临时\软件学习\cppCLion E:\临时\软件学习\cppCLion\build E:\临时\软件学习\cppCLion\build E:\临时\软件学习\cppCLion\build\CMakeFiles\hexoct.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/hexoct.dir/depend

