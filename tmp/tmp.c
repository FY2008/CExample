/*
 * @Copyright(C): 信念D力量 (freerealmshn@163.com)
 * All Rights Reserved.
 * **********************************************
 * @FilePath: /CExample/tmp/tmp.c
 * @Author: 信念D力量
 * @Github: https://www.github.com/fy2008
 * @Date: 2020-08-31 20:45:28
 * @LastEditTime: 2020-09-04 21:37:55
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
#include <stddef.h>
#include <string.h>

int main(int argc, char *argv[])
{

    // unsigned char c = 150;
    // int i = 900;
    // printf("i/c=%d\n", i/c);

    // int array[] = { 1, 2, 3, 4, 5, 6 };
    // int i = -1;
    // if ( i <= (int) sizeof(array) )
    // {
    //     printf(" i <= sizeof(array)\n");
    // }
    // else
    // {
    //     printf(" i > sizeof(array)\n");
    // }

    // printf("sizeof(array) = %ld\n", sizeof(array));

    // printf("**************************\n");
    // unsigned int i_a = 4294967295;
    // unsigned int i_b = 2;
    // unsigned int i_c = 4;
    // printf("%u\n", i_a + i_b);
    // printf("%u\n", i_b - i_c);
    #if 0
    float f1 = 34.6;
    float f2 = 34.5;
    float f3 = 34.0;
    printf("34.6-34.0=%f\n", f1 - f3);
    printf("34.5-34.0=%f\n", f2 - f3);
    #endif

    typedef enum SEX{
        Man
    };
    struct student {
        char name[20];
        bool sex;
        short int age;
        unsigned int num;
    };

    struct student s1;
    strcpy(s1.name, "lll");


    return 0;
}