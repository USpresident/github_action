#include "base_oper_nums.h"

int add2nums(int a, int b)
{
    return a + b;
}

int add3nums(int a, int b, int c)
{
    return a + add2nums(b, c);
}

#ifdef BUILD_TESTS
int subnums(int a, int b)
{
    return a - b;
}
#endif