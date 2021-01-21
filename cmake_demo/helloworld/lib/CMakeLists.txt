# 库文件 CMakeLists.txt

# 包含源文件路径
aux_source_directory(. DIR_SRC)

set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)

# 添加库
add_library(zsfMath STATIC ${DIR_SRC})