#include <gtest/gtest.h>
#include "base_oper_nums.h"

TEST(OperNums, add)
{
    EXPECT_EQ(add2nums(3, 7), 10);
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}