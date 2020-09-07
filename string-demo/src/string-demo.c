/*
 * @Copyright(C): 信念D力量 (freerealmshn@163.com)
 * All Rights Reserved.
 * **********************************************
 * @FilePath: /CExample/string-demo/src/string-demo.c
 * @Author: 信念D力量
 * @Github: https://www.github.com/fy2008
 * @Date: 2020-08-25 00:05:28
 * @LastEditTime: 2020-08-25 00:13:55
 * @Description: C字符串练习
 */
#include "../inc/string-demo.h"

void stringTest(void){
    char s1[] = "Hello, World!";
    printf("s1->Length: %zd\n", strlen(s1));
    printf("s1->Size: %zd\n", sizeof(s1));
}