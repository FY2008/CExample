/*
 * @Copyright(C): 信念D力量 (freerealmshn@163.com)
 * All Rights Reserved.
 * **********************************************
 * @FilePath: /CExample/struct-demo/inc/struct-demo.h
 * @Author: 信念D力量
 * @Github: https://www.github.com/fy2008
 * @Date: 2020-08-24 21:40:54
 * @LastEditTime: 2020-08-24 22:07:31
 * @Description: 结构体练习
 */
#ifndef _STRUCT_DEMO_H
#define _STRUCT_DEMO_H

#include <stdio.h>

/**
 * 点 结构体
 */
typedef struct
{
    int x;
    int y;
    int z;
} Point;

void initPoint(Point *point, int x, int y, int z);
void printPoint(Point *point);
void pointTest(void);

#endif