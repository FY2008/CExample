/*
 * @Author: 信念D力量
 * @Github: https://www.github.com/fy2008
 * @Gitee: https://gitee.com/zsf90
 * @website: https://fy2008.github.io
 * @FilePath: /CExample/string_strcmp/main.c
 * @Date: 2021-01-09 22:16:58
 * @LastEditTime: 2021-01-09 22:20:54
 * @LastEditors: Please set LastEditors
 * @Copyright(C): 信念D力量 (freerealmshn@163.com)
 * All Rights Reserved.
 * ----------------------------------------------
 * @Description: strcmp() 函数使用例子
 * ----------------------------------------------
 * 
 */
#include <stdio.h>
#include <string.h>

#define RX_BUFFER_MAX   100

char rxBuffer[RX_BUFFER_MAX] = "Hello,World";

char rxBuffer2[RX_BUFFER_MAX] = "Hello, World";

int main(void)
{

    int rs = strcmp(rxBuffer2, rxBuffer);
    printf("结果：%d\n", rs);
    return 0;
}