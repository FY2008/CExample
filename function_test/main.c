/*
 * @Copyright(C): 信念D力量 (freerealmshn@163.com)
 * All Rights Reserved.
 * **********************************************
 * @FilePath: /CExample/function_test/main.c
 * @Author: 信念D力量
 * @Github: https://www.github.com/fy2008
 * @Date: 2020-09-04 21:40:36
 * @LastEditTime: 2020-09-04 22:24:36
 * @Description: 函数测试
 */
#include <stdio.h>

// 枚举
typedef enum
{
    M,
    F
} Sex;

// 结构体定义
typedef struct
{
    char name[25];
    Sex sex;
    short int age;
    unsigned int stu_id;
} Student;

typedef struct
{
    double x;
    double y;
} Point;

// 函数声明
void sawp(int *a, int *b);
int add(int a, int b);
double get_ag(double num[10]);

int main(void)
{
    int a, b, c;
    a = 10;
    b = 20;
    
    c = add(a, b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    sawp(&a, &b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    printf("c = %d\n", c);

    double n[] = {
        11.1,
        12.2,
        13.3,
        14.4,
        15.5,
        16.6,
        17.7,
        18.8,
        19.9,
        20.2
    };

    double tmp_d = get_ag(n);
    printf("tmp_d = %lf\n", tmp_d);


    return 0;
}

// 函数定义

/**
 * @description: 计算两个数的和，并返回结果
 * @param {type} 
 * @return {type} 
 */
int add(int a, int b)
{
    return a + b;
}

/**
 * @description: 交换两个数的值
 * @param {type} 
 * @return {void} 
 */
void sawp(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}


double get_ag(double num[10])
{
    double tmp = 0.0;
    for(int i = 0; i < 10; i++)
    {
        tmp += num[i];   
    }
    return tmp / 10.0;
}

void Init_Point(Point *point)
{
    point->x = 0;
    point->y = 0;
}