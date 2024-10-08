# --------------------------
# option和add_definitions的区别
# 
# （1）option：
# option 用于定义 CMake 的构建选项，允许用户在构建项目时选择某些特定的配置。这通常用于开启或关闭一些功能、选项或特性。
# option 可以在 CMakeLists.txt 文件中提供一个选项，允许用户通过 CMake 命令行或 GUI 工具选择是否启用某个选项。
# 语法：option(<option_name> "Help string" ON/OFF)
# 
# option(ENABLE_FEATURE "Enable some feature" ON)
# if(ENABLE_FEATURE)
#     add_definitions(-DENABLE_FEATURE)
# endif()
# 
# （2）add_definitions：
# add_definitions 用于向编译器添加预定义的宏，这些宏会影响源代码的编译过程。
# 通常用于定义预处理器宏，比如在代码中使用 #ifdef 来根据宏的定义与否进行条件编译。
# 语法：add_definitions(-DMY_MACRO)
# add_definitions(-DENABLE_FEATURE)
# 
# （3）区别总结：
# option 用于定义 CMake 的构建选项，允许用户在构建时选择某些配置。它与用户的输入交互，常用于开关某些功能。
# add_definitions 用于向编译器添加预定义的宏，通常用于在源代码中进行条件编译。它直接影响编译过程，而不涉及用户选择。
# 在某些情况下，这两者一同使用。例如，使用 option 定义一个开关，
# 然后在 CMakeLists.txt 中使用 add_definitions 根据这个开关的状态来定义宏。
# --------------------------

# 不影响源码编译
option(BUILD_TESTS "Build tests." OFF)

# 可控制源码编译, 如果源码中出现 #ifdef BUILD_TESTS，要使用add_definitions
#add_definitions(-DBUILD_TESTS)

# 两者一起使用，先定义开关，再根据开关状态来加宏定义
if (BUILD_TESTS)
    add_definitions(-DBUILD_TESTS)
    add_subdirectory(test bin_test)
endif()

add_subdirectory(oper_nums bin_oper_nums)
