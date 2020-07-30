/**
 * 版权归：信念D力量 freerealmshn@163.com
 * 文件：main.c
 * 描述：设计并实现链表功能
 * 日期：2020-07-30
 * 版本：V1.0
 */
#include <stdio.h>


/**
 * 定义一个学生链表
 * 字段包括：
 * 1. score (成绩)
 * 
 */
typedef struct
{
    int score;
    struct StudentListTypeDef *next;
} StudentListTypeDef;



// 主函数
int main(void)
{
    printf("--------------------- 欢迎来到 C 语言的世界 ! ---------------------\n");
    return 0;
}