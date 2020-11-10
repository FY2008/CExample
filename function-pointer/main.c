/*
 * @Copyright(C): 信念D力量 (freerealmshn@163.com)
 * All Rights Reserved.
 * **********************************************
 * @FilePath: /CExample/function-pointer/main.c
 * @Author: 信念D力量
 * @Github: https://www.github.com/fy2008
 * @Date: 2020-09-10 11:10:36
 * @LastEditTime: 2020-09-10 11:20:04
 * @Description: 函数指针练习
 */
#include <stdio.h>

// 函数声明
int max(int a, int b);

int main(void)
{
    int (*p_max)(int, int);
    p_max = max;
    
    int a, b;
    printf("请输入两个整数：");
    scanf("%d%d\n", &a, &b);
    printf("最大值：%d\n", p_max(a, b));
    return 0;
}

int max(int a, int b)
{
    int t;
    if (a != b)
    {
        t = (a > b) ? a : b;
        return t;
    } else {
        printf("a = b");
    }
    return;
}