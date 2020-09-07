/*
 * @Copyright(C): 信念D力量 (freerealmshn@163.com)
 * All Rights Reserved.
 * **********************************************
 * @FilePath: /CExample/argv/main.c
 * @Author: 信念D力量
 * @Github: https://www.github.com/fy2008
 * @Date: 2020-08-27 22:38:34
 * @LastEditTime: 2020-08-27 22:42:02
 * @Description: C 语言命令行参数
 */
#include <stdio.h>

int main(int argc, char *argv [])
{
    printf("filename: %s\n", argv[0]);
    printf("argv[1]: %s\n", argv[1]);
    return 0;
}