/*
 * @Copyright(C): 信念D力量 (freerealmshn@163.com)
 * All Rights Reserved.
 * **********************************************
 * @FilePath: /CExample/array/main.c
 * @Author: 信念D力量
 * @Github: https://www.github.com/fy2008
 * @Date: 2020-08-22 12:54:06
 * @LastEditTime: 2020-08-22 16:44:13
 * @Description: C语言数组的使用
 */

#include <stdio.h>
#include <math.h>

#define LINE(c)     printf("%s\n", c);

void array_test1(void)
{
    int num[10];
    for(int i = 0; i<10; i++){
        num[i] = i * 2;
    }
    for(int i = 0; i<10; i++){
        printf("i=%d\n", num[i]);
    }
}

int main(void)
{
    LINE("***********************************************************")
    
    for (int i = 1; i <= 4; i++)
    {
        switch ( i % 2)
        {
        case 0:
            printf("even\n");
            break;
        case 1:
            printf("odd\n");
        
        default:
            break;
        }
    }
    
    return 0;
}
