#include <gtest/gtest.h>
#include "base_oper_nums.h"

TEST(OperNums, add2)
{
    EXPECT_EQ(add2nums(3, 7), 10);
}

TEST(OperNums, add3)
{
    EXPECT_EQ(add3nums(3, 7, 5), 15);
}

#ifdef BUILD_TESTS
TEST(OperNums, sub)
{
    EXPECT_EQ(subnums(19, 4), 15);
}
#endif

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}