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

## UNCOMMENT THE FOLLOWING TO USE GTEST ##
## Download and include external repositories for GoogleTest
# include(${CMAKE_SOURCE_DIR}/cmake/DownloadGTest.cmake)
# include(CTest)

##########################
# Compile Subdirectories #
##########################
# You can include CMakeLists.tt that are in any 
# subdirectories using the add_subdirectory command.
add_subdirectory(src)

# vim: set ts=4 sw=4 tw=80 et :
