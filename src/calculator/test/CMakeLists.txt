add_executable(CalcTest test.cpp)
target_link_libraries(CalcTest
	Calc
	gtest
)

add_test(NAME calculator_test COMMAND CalcTest)
