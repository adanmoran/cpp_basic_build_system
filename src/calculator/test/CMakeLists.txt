################################
# Calculator Library Test Code #
################################
add_executable(CalcTest test.cpp)
target_link_libraries(CalcTest
	Calc
	gtest
)

# To generate a test, we use the add_test command.
# You will find this individual test in the 
# build folder at the same depth as here
# (i.e. build/src/calculator/test/calculator_test )
add_test(NAME calculator_test COMMAND CalcTest)
