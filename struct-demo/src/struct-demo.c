/*
 * @Copyright(C): 信念D力量 (freerealmshn@163.com)
 * All Rights Reserved.
 * **********************************************
 * @FilePath: /CExample/struct-demo/src/struct-demo.c
 * @Author: 信念D力量
 * @Github: https://www.github.com/fy2008
 * @Date: 2020-08-24 21:33:41
 * @LastEditTime: 2020-08-24 22:08:08
 * @Description: 结构体练习
 */
#include "../inc/struct-demo.h"

void initPoint(Point *point, int x, int y, int z){
    point->x = x;
    point->y = y;
    point->z = z;
}

void printPoint(Point *point){
    printf("x: %d\n", point->x);
    printf("y: %d\n", point->y);
    printf("z: %d\n", point->z);
}

void pointTest(void)
{
    Point p1, p2, p3, p4;
    Point *pp = &p1;

    initPoint(pp, 33, 44, 55);
    printPoint(pp);

    pp = &p2;
    initPoint(pp, 0, 90, 810);
    printPoint(pp);

    pp = &p3;
    initPoint(pp, -40, -90, 10);
    printPoint(pp);

    pp = &p4;
    initPoint(pp, 610, -940, 100);
    printPoint(pp);
}