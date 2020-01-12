cmake_minimum_required(VERSION 3.5)

project(Test)

include(${CMAKE_SOURCE_DIR}/cmake/DownloadGTest.cmake)

include(CTest)

# Trivial example using gtest and gmock
add_executable(example example.cpp)
target_link_libraries(example gtest gmock_main)
add_test(NAME example_test COMMAND example)

##################3

add_library(PrintLib Printer.cpp)
target_include_directories(PrintLib PUBLIC
    ${CMAKE_SOURCE_DIR}/include
)

add_executable(Test main.cpp)
target_include_directories(Test PUBLIC 
    ${CMAKE_SOURCE_DIR}/include/
)
target_link_libraries(Test
    PrintLib
)

add_subdirectory(src)

# vim: set ts=4 sw=4 et :
