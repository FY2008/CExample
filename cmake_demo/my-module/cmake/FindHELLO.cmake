# 包含路径
FIND_PATH(HELLO_INCLUDE_DIR helloFun.h /tmp/include/helloFun)

# 包含库
find_library(HELLO_LIBRARY NAMES hello PATH /tmp/lib)

# 判断 库和头文件是否存在
if(HELLO_INCLUDE_DIR AND HELLO_LIBRARY)
    set(HELLO_FOUND TRUE)
endif(HELLO_INCLUDE_DIR AND HELLO_LIBRARY)


if(HELLO_FOUND)
    if(NOT HELLO_FIND_QUIETLY)
        MESSAGE(STATUS "Found Hello: ${HELLO_LIBRARY}")
    endif(NOT HELLO_FIND_QUIETLY)
else(HELLO_FOUND)
    if(HELLO_FIND_REQUIRED)
        MESSAGE(FATAL_ERROR "Could not find hello library")
    endif(HELLO_FIND_REQUIRED)
endif(HELLO_FOUND)
