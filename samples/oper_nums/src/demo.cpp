#include "base_oper_nums.h"
#include <iostream>

int main()
{
    std::cout << add2nums(4, 6) << std::endl;

    std::cout << add3nums(4, 5, 6) << std::endl;

#ifdef BUILD_TESTS
    std::cout << subnums(4, 6) << std::endl;
#endif

    return 0;
}
