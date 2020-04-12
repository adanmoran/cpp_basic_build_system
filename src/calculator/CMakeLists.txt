######################
# Calculator Library #
######################
add_library(Calc Calculator.cpp)
target_include_directories(Calc PUBLIC
	${CMAKE_SOURCE_DIR}/include/
)

########
# Test #
########
# Add a subdirectory which contains test code
# for the calculator library
add_subdirectory(test)


