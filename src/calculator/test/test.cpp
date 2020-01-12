//test.cpp

#include "gtest/gtest.h"
#include "calculator/Calculator.h"

class CalcTest
{
    
};

TEST(CalcTest,TestAdd)
{
    Calculator calc;
    //EXPECT_EQ(a,b)
    //EXPECT_LT, EXPECT_GT, _GE, LE, ...
    EXPECT_EQ(0, calc.add(0,0));
    EXPECT_EQ(4, calc.add(2,2));
    EXPECT_EQ(-5, calc.add(-2,-3));
    EXPECT_EQ(-2, calc.add(4,-6));
}

TEST(CalcTest, TestSubtract)   //name of suite, name of test
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
