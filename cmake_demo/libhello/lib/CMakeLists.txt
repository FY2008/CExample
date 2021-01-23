aux_source_directory(./ LIB_DIR)

# 添加动态库和静态库
add_library(hello SHARED ${LIB_DIR})
add_library(hello_static STATIC ${LIB_DIR})

# 设置静态库 `hello_static` 的属性 OUTPUT_NAME
set_target_properties(hello_static PROPERTIES OUTPUT_NAME "hello")

# 获取目标属性
get_target_property(HELLO_STATIC_DIR hello_static OUTPUT_NAME)
MESSAGE(STATUS "静态库生成的名字：" ${HELLO_STATIC_DIR})

# 给动态库添加版本号
set_target_properties(hello PROPERTIES VERSION 1.2 SOVERSION 1)

# 安装库文件到系统目录
# 静态库使用 ARCHIVE
# 动态库使用 LIBRARY
install(
    TARGETS hello hello_static
    LIBRARY DESTINATION lib
    ARCHIVE DESTINATION lib
)

# 安装头文件到系统目录
install(
    FILES helloFun.h
    DESTINATION include/helloFun
)