/**
 * @brief C语言基本数据类型
 * 
 * 1. 整型
 *  # char, short, int, long int, long long int
 *  # 可以使用 unsigned 修饰整修为无符号整型
 * 2. 浮点型
 *  # float，double
 * 
 */
#include <stdio.h>

int main(void)
{
    // 整型字节占用情况
    printf("char=%ld(字节）\n", sizeof(char));
    printf("short=%ld(字节）\n", sizeof(short));
    printf("int=%ld(字节）\n", sizeof(int));
    printf("long=%ld(字节）\n", sizeof(long));
    
    // 小数字节占用情况
    printf("float=%ld(字节）\n", sizeof(float));
    printf("double=%ld(字节）\n", sizeof(double));
    printf("long double=%ld(字节）\n", sizeof(long double));

    
    return 0;
}

