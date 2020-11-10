/*
 * @Copyright(C): 信念D力量 (freerealmshn@163.com)
 * All Rights Reserved.
 * **********************************************
 * @FilePath: /CExample/tmp/tmp.c
 * @Author: 信念D力量
 * @Github: https://www.github.com/fy2008
 * @Date: 2020-08-31 20:45:28
 * @LastEditTime: 2020-11-10 22:20:28
 * @Description: 临时测试
 * ///////////////////////////////////////////////
 * @基本数据类型
 * @数组
 * @指针
 * @结构体
 * @枚举
 * @联合体
 * @函数
 * 
 */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>


void fun1()
{
    printf("File: %s Line %d\n", __FILE__, __LINE__);
}

struct ttt{
    char n[25];
};

void str_demo(const char *name)
{
    struct ttt *t = (struct ttt*)malloc(sizeof(struct ttt));
    strcpy(t->n, name);
    printf("name: %s\n", t->n);
}

int main(int argc, char *argv[])
{
    
    
    str_demo("zhangshanfen");

    return 0;
}