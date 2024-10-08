include_directories("${PROJECT_SOURCE_DIR}/samples/oper_nums/head")
include_directories(/usr/src/googletest/googletest/include)
include_directories(/usr/lib/x86_64-linux-gnu)

aux_source_directory(./ TEST_SRC)
set(SRC ${PROJECT_SOURCE_DIR}/samples/oper_nums/src/base_oper_nums.cpp)

add_executable(test_demo ${TEST_SRC} ${SRC})

target_link_libraries(test_demo gtest)

set_target_properties(test_demo PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")