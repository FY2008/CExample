# 源文件 CMakeLists.txt

# 包含库路径
include_directories(${PROJECT_SOURCE_DIR}/lib)

# 源文件入口路径
aux_source_directory(./ DIR_SRC)

# 设置可执行文件的输出路径
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

# 编译源码生产目标
add_executable(zsf_Hello main.c)

# 链接库
target_link_libraries(zsf_Hello zsfMath)