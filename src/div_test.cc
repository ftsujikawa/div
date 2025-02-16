/*
 * add_test.cc
 *
 *  Created on: 2013/06/23
 *      Author: shanai
 */
#include "gtest/gtest.h"
#include "div.h"

TEST(DivTest, fiveDivTwoGivesTwo) {
    EXPECT_EQ(2, divi(5, 2));
}
/*TEST(DivTest, ThreeDivZeroGivesZero) {
    EXPECT_EQ(0, divi(3, 0));
}*/

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}



