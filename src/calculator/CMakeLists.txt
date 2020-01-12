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
add_subdirectory(test)


