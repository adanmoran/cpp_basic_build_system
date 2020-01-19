/******************************************************************************
* File:             test.cpp
*
* Author:           Adan Moran-Macdonald  
* Created:          ages ago 
* Description:      How to use Test suites with GTest
*****************************************************************************/

#include "gtest/gtest.h"
#include "calculator/Calculator.h"

class CalcTest : public ::testing::Test
{
public:
	CalcTest() 
	{
		// This runs when each test is created
	}
protected:
	void SetUp() override
	{
		// This runs at the start of each test
	}

	void TearDown() override
	{
		// This runs at the end of each test
	}

	// Place your variables you want to use in each test here
	Calculator calc_;
};

// TEST_F is for test suites which are parts of a class
// and can use protected or public variables in the CalcTest object.
// Note that the suite name (CalcTest) must match the class which inherits
// from ::testing::Test (the CalcTest class above)
TEST_F(CalcTest,TestAdd)
{
    //EXPECT_EQ(a,b)
    //EXPECT_LT, EXPECT_GT, _GE, LE, ...
    EXPECT_EQ(0, calc_.add(0,0));
    EXPECT_EQ(4, calc_.add(2,2));
    EXPECT_EQ(-5, calc_.add(-2,-3));
    EXPECT_EQ(-2, calc_.add(4,-6));
}

// TEST is for test suites which do not need to use local class variables,
// and is mostly for basic functions. It does not need to be part of a class,
// so you can name the test suite anything you want (here it is CalcTest2)
// Note that you cannot mix TEST_F and TEST
TEST(CalcTest2, TestSubtract)   //name of suite, name of test
{
   Calculator calc;
   EXPECT_EQ(0, calc.subtract(0,0));
   EXPECT_EQ(3, calc.subtract(6,3));
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

/* vim: set tw=80 ts=4 sw=4 sts=0 et ffs=unix : */
