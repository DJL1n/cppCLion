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
include CMakeFiles/strtype3.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/strtype3.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/strtype3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/strtype3.dir/flags.make

CMakeFiles/strtype3.dir/basicGrammar/strtype3.cpp.obj: CMakeFiles/strtype3.dir/flags.make
CMakeFiles/strtype3.dir/basicGrammar/strtype3.cpp.obj: E:/临时/软件学习/cppCLion/basicGrammar/strtype3.cpp
CMakeFiles/strtype3.dir/basicGrammar/strtype3.cpp.obj: CMakeFiles/strtype3.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=E:\临时\软件学习\cppCLion\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/strtype3.dir/basicGrammar/strtype3.cpp.obj"
	C:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/strtype3.dir/basicGrammar/strtype3.cpp.obj -MF CMakeFiles\strtype3.dir\basicGrammar\strtype3.cpp.obj.d -o CMakeFiles\strtype3.dir\basicGrammar\strtype3.cpp.obj -c E:\临时\软件学习\cppCLion\basicGrammar\strtype3.cpp

CMakeFiles/strtype3.dir/basicGrammar/strtype3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/strtype3.dir/basicGrammar/strtype3.cpp.i"
	C:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\临时\软件学习\cppCLion\basicGrammar\strtype3.cpp > CMakeFiles\strtype3.dir\basicGrammar\strtype3.cpp.i

CMakeFiles/strtype3.dir/basicGrammar/strtype3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/strtype3.dir/basicGrammar/strtype3.cpp.s"
	C:\x86_64-8.1.0-release-win32-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\临时\软件学习\cppCLion\basicGrammar\strtype3.cpp -o CMakeFiles\strtype3.dir\basicGrammar\strtype3.cpp.s

# Object files for target strtype3
strtype3_OBJECTS = \
"CMakeFiles/strtype3.dir/basicGrammar/strtype3.cpp.obj"

# External object files for target strtype3
strtype3_EXTERNAL_OBJECTS =

strtype3.exe: CMakeFiles/strtype3.dir/basicGrammar/strtype3.cpp.obj
strtype3.exe: CMakeFiles/strtype3.dir/build.make
strtype3.exe: CMakeFiles/strtype3.dir/linkLibs.rsp
strtype3.exe: CMakeFiles/strtype3.dir/objects1.rsp
strtype3.exe: CMakeFiles/strtype3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=E:\临时\软件学习\cppCLion\build\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable strtype3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\strtype3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/strtype3.dir/build: strtype3.exe
.PHONY : CMakeFiles/strtype3.dir/build

CMakeFiles/strtype3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\strtype3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/strtype3.dir/clean

CMakeFiles/strtype3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\临时\软件学习\cppCLion E:\临时\软件学习\cppCLion E:\临时\软件学习\cppCLion\build E:\临时\软件学习\cppCLion\build E:\临时\软件学习\cppCLion\build\CMakeFiles\strtype3.dir\DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/strtype3.dir/depend
