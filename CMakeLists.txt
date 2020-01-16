# Define the project and cmake versions
cmake_minimum_required(VERSION 3.5)
project(Test)

# Enforce compilation using C++ version CXX, by setting the -std=c++CXX flag
# By default we use 11, but you can change this to 14, 17, 20, etc
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Download and include external repositories
include(${CMAKE_SOURCE_DIR}/cmake/DownloadGTest.cmake)
include(CTest)

# Trivial example using gtest and gmock
add_executable(example example.cpp)
target_link_libraries(example gtest gmock_main)
add_test(NAME example_test COMMAND example)

##################

add_library(PrintLib Printer.cpp)
target_include_directories(PrintLib PUBLIC
    ${CMAKE_SOURCE_DIR}/include
)

add_executable(main main.cpp)
target_include_directories(main PUBLIC 
    ${CMAKE_SOURCE_DIR}/include/
)
target_link_libraries(main
    PrintLib
)

add_subdirectory(src)

# vim: set ts=4 sw=4 et :
