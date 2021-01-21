/*
 * @Author: 信念D力量
 * @Github: https://www.github.com/fy2008
 * @Gitee: https://gitee.com/zsf90
 * @website: https://fy2008.github.io
 * @FilePath: /CExample/return-demo/main.c
 * @Date: 2021-01-06 14:18:27
 * @LastEditTime: 2021-01-06 14:46:58
 * @LastEditors: Please set LastEditors
 * @Copyright(C): 信念D力量 (freerealmshn@163.com)
 * All Rights Reserved.
 * ----------------------------------------------
 * @Description: Return 例子
 * ----------------------------------------------
 * 
 */
#include <stdio.h>


void demo(int a){
    if (a < 0) {
        printf("a 小于0\n");
        return; // 直接跳出函数
    } else {
        printf("a 为正数\n");
        return;
    }

    printf("测试能否执行到这里\n"); // 这条语句不会被执行到
}

int main(void)
{
    demo(5);
    return 0;
}

