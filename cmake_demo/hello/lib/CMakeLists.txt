# 添加源文件入口路径
aux_source_directory(./ LIB_SRC_DIR)

# 设置库的输出路径
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

# 添加创建库
add_library(zsflib_base SHARED ${LIB_SRC_DIR})
