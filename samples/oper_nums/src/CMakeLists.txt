include_directories(../head)

aux_source_directory(./ SRC)

add_executable(demo ${SRC})

# 设置可执行文件的输出目录
set_target_properties(demo PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}")