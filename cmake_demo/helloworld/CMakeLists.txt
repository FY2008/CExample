# 顶层 CMakeLists.txt

# cmake 最低版本
cmake_minimum_required(VERSION 3.5)

# 目标程序
project(zsf_Hello C)

# 添加子目录
add_subdirectory(./lib)
add_subdirectory(./src)

#启动对C++14标准的支持
#set(CMAKE_CXX_STANDARD 14)
# 显式要求指明支持C++标准
#set(CMAKE_CXX_STANDARD_REQUIRED True)

# 启动对C11的支持
set(CMAKE_C_STANDARD 11)
# 显式要求指明支持C标准
set(CMAKE_C_STANDARD_REQUIRED True)
