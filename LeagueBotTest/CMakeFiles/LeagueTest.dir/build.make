# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.4

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/Cellar/cmake/3.4.1/bin/cmake

# The command to remove a file.
RM = /usr/local/Cellar/cmake/3.4.1/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/users/Cole/Desktop/Hackathons/MHacks 7/League Bot/LeagueBotTest"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/users/Cole/Desktop/Hackathons/MHacks 7/League Bot/LeagueBotTest"

# Include any dependencies generated for this target.
include CMakeFiles/LeagueTest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/LeagueTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/LeagueTest.dir/flags.make

CMakeFiles/LeagueTest.dir/LeagueBotTest.cpp.o: CMakeFiles/LeagueTest.dir/flags.make
CMakeFiles/LeagueTest.dir/LeagueBotTest.cpp.o: LeagueBotTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/users/Cole/Desktop/Hackathons/MHacks 7/League Bot/LeagueBotTest/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/LeagueTest.dir/LeagueBotTest.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++   $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/LeagueTest.dir/LeagueBotTest.cpp.o -c "/users/Cole/Desktop/Hackathons/MHacks 7/League Bot/LeagueBotTest/LeagueBotTest.cpp"

CMakeFiles/LeagueTest.dir/LeagueBotTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/LeagueTest.dir/LeagueBotTest.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/users/Cole/Desktop/Hackathons/MHacks 7/League Bot/LeagueBotTest/LeagueBotTest.cpp" > CMakeFiles/LeagueTest.dir/LeagueBotTest.cpp.i

CMakeFiles/LeagueTest.dir/LeagueBotTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/LeagueTest.dir/LeagueBotTest.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/users/Cole/Desktop/Hackathons/MHacks 7/League Bot/LeagueBotTest/LeagueBotTest.cpp" -o CMakeFiles/LeagueTest.dir/LeagueBotTest.cpp.s

CMakeFiles/LeagueTest.dir/LeagueBotTest.cpp.o.requires:

.PHONY : CMakeFiles/LeagueTest.dir/LeagueBotTest.cpp.o.requires

CMakeFiles/LeagueTest.dir/LeagueBotTest.cpp.o.provides: CMakeFiles/LeagueTest.dir/LeagueBotTest.cpp.o.requires
	$(MAKE) -f CMakeFiles/LeagueTest.dir/build.make CMakeFiles/LeagueTest.dir/LeagueBotTest.cpp.o.provides.build
.PHONY : CMakeFiles/LeagueTest.dir/LeagueBotTest.cpp.o.provides

CMakeFiles/LeagueTest.dir/LeagueBotTest.cpp.o.provides.build: CMakeFiles/LeagueTest.dir/LeagueBotTest.cpp.o


# Object files for target LeagueTest
LeagueTest_OBJECTS = \
"CMakeFiles/LeagueTest.dir/LeagueBotTest.cpp.o"

# External object files for target LeagueTest
LeagueTest_EXTERNAL_OBJECTS =

LeagueTest: CMakeFiles/LeagueTest.dir/LeagueBotTest.cpp.o
LeagueTest: CMakeFiles/LeagueTest.dir/build.make
LeagueTest: /usr/local/lib/libopencv_videostab.3.1.0.dylib
LeagueTest: /usr/local/lib/libopencv_superres.3.1.0.dylib
LeagueTest: /usr/local/lib/libopencv_stitching.3.1.0.dylib
LeagueTest: /usr/local/lib/libopencv_shape.3.1.0.dylib
LeagueTest: /usr/local/lib/libopencv_photo.3.1.0.dylib
LeagueTest: /usr/local/lib/libopencv_objdetect.3.1.0.dylib
LeagueTest: /usr/local/lib/libopencv_calib3d.3.1.0.dylib
LeagueTest: /usr/local/lib/libopencv_features2d.3.1.0.dylib
LeagueTest: /usr/local/lib/libopencv_ml.3.1.0.dylib
LeagueTest: /usr/local/lib/libopencv_highgui.3.1.0.dylib
LeagueTest: /usr/local/lib/libopencv_videoio.3.1.0.dylib
LeagueTest: /usr/local/lib/libopencv_imgcodecs.3.1.0.dylib
LeagueTest: /usr/local/lib/libopencv_flann.3.1.0.dylib
LeagueTest: /usr/local/lib/libopencv_video.3.1.0.dylib
LeagueTest: /usr/local/lib/libopencv_imgproc.3.1.0.dylib
LeagueTest: /usr/local/lib/libopencv_core.3.1.0.dylib
LeagueTest: CMakeFiles/LeagueTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/users/Cole/Desktop/Hackathons/MHacks 7/League Bot/LeagueBotTest/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable LeagueTest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/LeagueTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/LeagueTest.dir/build: LeagueTest

.PHONY : CMakeFiles/LeagueTest.dir/build

CMakeFiles/LeagueTest.dir/requires: CMakeFiles/LeagueTest.dir/LeagueBotTest.cpp.o.requires

.PHONY : CMakeFiles/LeagueTest.dir/requires

CMakeFiles/LeagueTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/LeagueTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/LeagueTest.dir/clean

CMakeFiles/LeagueTest.dir/depend:
	cd "/users/Cole/Desktop/Hackathons/MHacks 7/League Bot/LeagueBotTest" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/users/Cole/Desktop/Hackathons/MHacks 7/League Bot/LeagueBotTest" "/users/Cole/Desktop/Hackathons/MHacks 7/League Bot/LeagueBotTest" "/users/Cole/Desktop/Hackathons/MHacks 7/League Bot/LeagueBotTest" "/users/Cole/Desktop/Hackathons/MHacks 7/League Bot/LeagueBotTest" "/users/Cole/Desktop/Hackathons/MHacks 7/League Bot/LeagueBotTest/CMakeFiles/LeagueTest.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/LeagueTest.dir/depend

