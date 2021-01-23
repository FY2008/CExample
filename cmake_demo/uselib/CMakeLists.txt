cmake_minimum_required(VERSION 3.5)

project(uselib)

add_test(test1 ${PROJECT_BINARY_DIR}/bin/${PROJECT_NAME})
enable_testing()



set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
add_subdirectory(./src)

