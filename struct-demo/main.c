/*
 * @Copyright(C): 信念D力量 (freerealmshn@163.com)
 * All Rights Reserved.
 * **********************************************
 * @FilePath: /CExample/struct-demo/main.c
 * @Author: 信念D力量
 * @Github: https://www.github.com/fy2008
 * @Date: 2020-08-24 21:30:30
 * @LastEditTime: 2020-11-15 20:31:23
 * @Description: 结构体练习 main.c 文件
 */
#include <stdio.h>
#include <stdbool.h>
#include "./inc/struct-demo.h"

struct tt
{
    int a;
    int b;
    int c;
    char e;
};

int main(void)
{
    // Point 测试函数
    pointTest();

    struct tt t;
    printf("tt size: %zd\n", sizeof(t));
    
    return 0;
}
