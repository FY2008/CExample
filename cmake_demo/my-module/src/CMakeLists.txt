# 设置系统环境变量
set(ENV{CMAKE_INCLUDE_PATH} /tmp/include/helloFun/)
set(ENV{CMAKE_LIBRARY_PATH} /tmp/lib/)

SET(CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

find_package(HELLO)
if(HELLO_FOUND)
    add_executable(hello main.c)
    include_directories(${HELLO_INCLUDE_DIR})
    target_link_libraries(hello ${HELLO_LIBRARY})
endif(HELLO_FOUND)
