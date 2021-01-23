aux_source_directory(./ SRC_DIR)

# 设置系统环境变量
set(ENV{CMAKE_INCLUDE_PATH} /tmp/include/helloFun/)
set(ENV{CMAKE_LIBRARY_PATH} /tmp/lib/)

# 添加头文件路径
# include_directories(/tmp/include/helloFun)

# 要设置系统环境变量 CMAKE_INCLUDE_PATH
find_path(myHeader helloFun.h)
if(myHeader)
include_directories(${myHeader})
endif(myHeader)

# 链接路劲
# LINK_DIRECTORIES(/tmp/lib/)

# 需要设置系统环境变量 CMAKE_LIBRARY_PATH
# find_library() 查找 hello 库
find_library(myLibrary hello PATHS $ENV{CMAKE_LIBRARY_PATH})
if(myLibrary)
MESSAGE(STATUS ${myLibrary})
endif(myLibrary)

add_executable(uselib ${SRC_DIR})

target_link_libraries(uselib ${myLibrary})

# exec_program(ls ARGS "./*.c" OUTPUT_VARIABLE LS_OUTPUT RETURN_VALUE LS_RVALUE)
# if(not LS_RVALUE)
# MESSAGE(STATUS "ls result: " ${LS_OUTPUT})
# endif(not LS_RVALUE)

EXEC_PROGRAM(ls ARGS ${PROJECT_SOURCE_DIR}/src/*.c OUTPUT_VARIABLE LS_OUTPUT RETURN_VALUE
LS_RVALUE)
IF(NOT LS_RVALUE)
MESSAGE(STATUS "ls result: " ${LS_OUTPUT})
ENDIF(NOT LS_RVALUE)