###############
# Setup CMake #
###############
# Define the project and cmake versions
cmake_minimum_required(VERSION 3.5)
project(basic_build_system)

#############################
# Setup CMake Compile Rules #
#############################
# Enforce compilation using C++ version CXX, by setting the -std=c++CXX flag
# By default we use 11, but you can change this to 14, 17, 20, etc
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Download and include external repositories for GoogleTest
include(${CMAKE_SOURCE_DIR}/cmake/DownloadGTest.cmake)
include(CTest)

#############################
# Compile Code with Testing #
#############################
# This trivial example shows how to compile with gtest
# and gmock. The source code contains a sample class
# which is to be mocked, and the example_test object 
# that is generated contains the mock and test code.
add_executable(example example_test_code.cpp)
target_link_libraries(example gtest gmock_main)
add_test(NAME example_test COMMAND example)

########################
# Compile Library Code #
########################
# This example shows how to generate a library which
# is converted into a CMake target, which can then
# be included by any other main executables when compiling.
# This helps separate the code into independent units
# to reduce overall compilation time when one unit is changed.

# Create the Printer library
add_library(PrintLib Printer.cpp)
target_include_directories(PrintLib PUBLIC
    ${CMAKE_SOURCE_DIR}/include
)

# Create the executable which uses PrintLib, linking the
# library through the target_link_libraries command.
add_executable(main main.cpp)
target_include_directories(main PUBLIC 
    ${CMAKE_SOURCE_DIR}/include/
)
target_link_libraries(main
    PrintLib
)

##########################
# Compile Subdirectories #
##########################
# You can include CMakeLists.tt that are in any 
# subdirectories using the add_subdirectory command.
add_subdirectory(src)

# vim: set ts=4 sw=4 tw=80 et :
