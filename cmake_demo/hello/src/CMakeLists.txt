# 添加源文件入口路径
aux_source_directory(./ SRC_DIR)

# 包含库路径
include_directories(${PROJECT_SOURCE_DIR}/lib)

# 设置可执行文件生成路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

# 生成可执行目标文件
add_executable(hello ${SRC_DIR})

# 链接库到目标
target_link_libraries(hello zsflib_base)