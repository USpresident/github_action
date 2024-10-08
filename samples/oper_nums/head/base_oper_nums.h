#ifndef BASE_OPER_NUMS_H
#define BASE_OPER_NUMS_H

int add2nums(int a, int b);
int add3nums(int a, int b, int c);

// BUILD_TESTS是在CMakeLists.txt中设置的，add_definitions(-DBUILD_TESTS)
#ifdef BUILD_TESTS
    int subnums(int a, int b);
#endif

#endif