# 这是顶级 CMakeLists.txt 文件
cmake_minimum_required(VERSION 3.5)

project(hello)

# 添加编译选项
add_compile_options(
    -std=c11
)

# 添加子目录
add_subdirectory(./src)
add_subdirectory(./lib)