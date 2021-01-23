add_executable(curltest main.c)

find_package(CURL)
if(CURL_FOUND)
    INCLUDE_DIRECTORIES(${CURL_INCLUDE_DIR})
    target_link_libraries(curltest ${CURL_LIBRARY})
else(CURL_FOUND)
    message(FATAL_ERROR "CURL 库未找到")
endif(CURL_FOUND)