aux_source_directory(./ SRC_DIR)

set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)

add_executable(cmake_base ${SRC_DIR})

# if 语句1
set(Mobile "小米手机")
if(Mobile STREQUAL "苹果手机")
    MESSAGE("我的手机是苹果的")
elseif(Mobile STREQUAL "小米手机")
    MESSAGE("我的手机是小米的")
else(Mobile)
    MESSAGE("......else......")
endif(Mobile)



if(0)

# foreach 练习1
set(numbers 1 2 3 4 5)
foreach(n ${numbers})
    MESSAGE(STATUS ${n})
endforeach(n numbers)

# foreach 练习2
foreach(var RANGE 10)
    MESSAGE(${var})
endforeach(var RANGE 10)

# foreach 练习3
foreach(A RANGE 5 15 2)
    MESSAGE(${A})
endforeach(A)

endif(0)