# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/robotarm/workspace/gdbus_demo2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/robotarm/workspace/gdbus_demo2/build

# Include any dependencies generated for this target.
include Sources/Client/CMakeFiles/client_main.dir/depend.make

# Include the progress variables for this target.
include Sources/Client/CMakeFiles/client_main.dir/progress.make

# Include the compile flags for this target's objects.
include Sources/Client/CMakeFiles/client_main.dir/flags.make

Sources/Client/CMakeFiles/client_main.dir/client_main.c.o: Sources/Client/CMakeFiles/client_main.dir/flags.make
Sources/Client/CMakeFiles/client_main.dir/client_main.c.o: ../Sources/Client/client_main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/robotarm/workspace/gdbus_demo2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object Sources/Client/CMakeFiles/client_main.dir/client_main.c.o"
	cd /home/robotarm/workspace/gdbus_demo2/build/Sources/Client && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/client_main.dir/client_main.c.o   -c /home/robotarm/workspace/gdbus_demo2/Sources/Client/client_main.c

Sources/Client/CMakeFiles/client_main.dir/client_main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/client_main.dir/client_main.c.i"
	cd /home/robotarm/workspace/gdbus_demo2/build/Sources/Client && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/robotarm/workspace/gdbus_demo2/Sources/Client/client_main.c > CMakeFiles/client_main.dir/client_main.c.i

Sources/Client/CMakeFiles/client_main.dir/client_main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/client_main.dir/client_main.c.s"
	cd /home/robotarm/workspace/gdbus_demo2/build/Sources/Client && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/robotarm/workspace/gdbus_demo2/Sources/Client/client_main.c -o CMakeFiles/client_main.dir/client_main.c.s

Sources/Client/CMakeFiles/client_main.dir/client_main.c.o.requires:

.PHONY : Sources/Client/CMakeFiles/client_main.dir/client_main.c.o.requires

Sources/Client/CMakeFiles/client_main.dir/client_main.c.o.provides: Sources/Client/CMakeFiles/client_main.dir/client_main.c.o.requires
	$(MAKE) -f Sources/Client/CMakeFiles/client_main.dir/build.make Sources/Client/CMakeFiles/client_main.dir/client_main.c.o.provides.build
.PHONY : Sources/Client/CMakeFiles/client_main.dir/client_main.c.o.provides

Sources/Client/CMakeFiles/client_main.dir/client_main.c.o.provides.build: Sources/Client/CMakeFiles/client_main.dir/client_main.c.o


Sources/Client/CMakeFiles/client_main.dir/__/gdbus/libgdbus_s.c.o: Sources/Client/CMakeFiles/client_main.dir/flags.make
Sources/Client/CMakeFiles/client_main.dir/__/gdbus/libgdbus_s.c.o: ../Sources/gdbus/libgdbus_s.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/robotarm/workspace/gdbus_demo2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object Sources/Client/CMakeFiles/client_main.dir/__/gdbus/libgdbus_s.c.o"
	cd /home/robotarm/workspace/gdbus_demo2/build/Sources/Client && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/client_main.dir/__/gdbus/libgdbus_s.c.o   -c /home/robotarm/workspace/gdbus_demo2/Sources/gdbus/libgdbus_s.c

Sources/Client/CMakeFiles/client_main.dir/__/gdbus/libgdbus_s.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/client_main.dir/__/gdbus/libgdbus_s.c.i"
	cd /home/robotarm/workspace/gdbus_demo2/build/Sources/Client && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/robotarm/workspace/gdbus_demo2/Sources/gdbus/libgdbus_s.c > CMakeFiles/client_main.dir/__/gdbus/libgdbus_s.c.i

Sources/Client/CMakeFiles/client_main.dir/__/gdbus/libgdbus_s.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/client_main.dir/__/gdbus/libgdbus_s.c.s"
	cd /home/robotarm/workspace/gdbus_demo2/build/Sources/Client && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/robotarm/workspace/gdbus_demo2/Sources/gdbus/libgdbus_s.c -o CMakeFiles/client_main.dir/__/gdbus/libgdbus_s.c.s

Sources/Client/CMakeFiles/client_main.dir/__/gdbus/libgdbus_s.c.o.requires:

.PHONY : Sources/Client/CMakeFiles/client_main.dir/__/gdbus/libgdbus_s.c.o.requires

Sources/Client/CMakeFiles/client_main.dir/__/gdbus/libgdbus_s.c.o.provides: Sources/Client/CMakeFiles/client_main.dir/__/gdbus/libgdbus_s.c.o.requires
	$(MAKE) -f Sources/Client/CMakeFiles/client_main.dir/build.make Sources/Client/CMakeFiles/client_main.dir/__/gdbus/libgdbus_s.c.o.provides.build
.PHONY : Sources/Client/CMakeFiles/client_main.dir/__/gdbus/libgdbus_s.c.o.provides

Sources/Client/CMakeFiles/client_main.dir/__/gdbus/libgdbus_s.c.o.provides.build: Sources/Client/CMakeFiles/client_main.dir/__/gdbus/libgdbus_s.c.o


# Object files for target client_main
client_main_OBJECTS = \
"CMakeFiles/client_main.dir/client_main.c.o" \
"CMakeFiles/client_main.dir/__/gdbus/libgdbus_s.c.o"

# External object files for target client_main
client_main_EXTERNAL_OBJECTS =

Sources/Client/client_main: Sources/Client/CMakeFiles/client_main.dir/client_main.c.o
Sources/Client/client_main: Sources/Client/CMakeFiles/client_main.dir/__/gdbus/libgdbus_s.c.o
Sources/Client/client_main: Sources/Client/CMakeFiles/client_main.dir/build.make
Sources/Client/client_main: Sources/Client/CMakeFiles/client_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/robotarm/workspace/gdbus_demo2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable client_main"
	cd /home/robotarm/workspace/gdbus_demo2/build/Sources/Client && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/client_main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
Sources/Client/CMakeFiles/client_main.dir/build: Sources/Client/client_main

.PHONY : Sources/Client/CMakeFiles/client_main.dir/build

Sources/Client/CMakeFiles/client_main.dir/requires: Sources/Client/CMakeFiles/client_main.dir/client_main.c.o.requires
Sources/Client/CMakeFiles/client_main.dir/requires: Sources/Client/CMakeFiles/client_main.dir/__/gdbus/libgdbus_s.c.o.requires

.PHONY : Sources/Client/CMakeFiles/client_main.dir/requires

Sources/Client/CMakeFiles/client_main.dir/clean:
	cd /home/robotarm/workspace/gdbus_demo2/build/Sources/Client && $(CMAKE_COMMAND) -P CMakeFiles/client_main.dir/cmake_clean.cmake
.PHONY : Sources/Client/CMakeFiles/client_main.dir/clean

Sources/Client/CMakeFiles/client_main.dir/depend:
	cd /home/robotarm/workspace/gdbus_demo2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/robotarm/workspace/gdbus_demo2 /home/robotarm/workspace/gdbus_demo2/Sources/Client /home/robotarm/workspace/gdbus_demo2/build /home/robotarm/workspace/gdbus_demo2/build/Sources/Client /home/robotarm/workspace/gdbus_demo2/build/Sources/Client/CMakeFiles/client_main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : Sources/Client/CMakeFiles/client_main.dir/depend

