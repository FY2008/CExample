/*
 * @Copyright(C): 信念D力量 (freerealmshn@163.com)
 * All Rights Reserved.
 * **********************************************
 * @FilePath: /CExample/lists-demo/loop-list.c
 * @Author: 信念D力量
 * @Github: https://www.github.com/fy2008
 * @Date: 2020-09-05 21:49:48
 * @LastEditTime: 2020-09-05 23:26:13
 * @Description: 循环单链表例子
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINE printf("-----------------------------------------------\n");

typedef enum
{
    OK,
    ERROR
} State;

typedef struct
{
    char name[25];
    int age;
} Student_t;

typedef struct List
{
    Student_t Stu;
    struct List *Next;
    
} List_t;


List_t* list_init(void);
State list_empty(List_t *list);
State list_append(List_t *list, Student_t stu);
State list_insert(List_t *list, int pos, Student_t stu);
void list_ForEach(List_t *list);




int main(void)
{
    List_t *list_head;
    Student_t stu;

    list_head = list_init();

    printf("--------------- 菜单栏 ---------------\n");
    printf("(1) 尾部追加 || （2）遍历输出 || （3) 退出\n");
    for(;;)
    {
        int s;
        scanf("%d", &s);
        switch (s)
        {
        case 1:
            printf("请输入学生姓名：");
            scanf("%s", &stu.name);
            printf("请输入学生年龄：");
            scanf("%d", &stu.age);
            list_append(list_head, stu);
            break;
        case 2:
            list_ForEach(list_head);
            break;
        case 3:
            goto quit;
            break;
        default:
            break;
        }
        printf("(1) 尾部追加 || （2）遍历输出 || （3) 退出\n");
    }
    quit:
    return 0;
}

/**
 * @description: 初始化链表，返回一个头结点 
 * @param {None} 
 * @return {List_t} 
 */
List_t* list_init(void)
{
    List_t *list = (List_t *)malloc(sizeof(List_t));
    list->Next = NULL;
    return list;
}
State list_empty(List_t *list)
{
    if(list->Next == NULL)
    {
        return OK;
    } else {
        return ERROR;
    }
}
State list_append(List_t *list, Student_t stu)
{
    List_t *list_new = (List_t *)malloc(sizeof(List_t));
    strcpy(list_new->Stu.name, stu.name);
    list_new->Stu.age = stu.age;
    list_new->Next = NULL;

    if (OK == list_empty(list))
    {
        list->Next = list_new;
    } else {
        list = list->Next;
        while( list->Next != NULL)
        {
            list = list->Next;
        }
        list->Next = list_new;
    }
    return OK;
}
State list_insert(List_t *list, int pos, Student_t stu)
{
    return OK;
}

/**
 * @description: 遍历链表
 * @param {type} 
 * @return {void} 
 */
void list_ForEach(List_t *list)
{
    if (OK == list_empty(list))
    {
        printf("链表为空！\n");
    } else {
        list = list->Next;
        while( list != NULL)
        {
            printf("Name: %s | ", list->Stu.name);
            printf("Age: %d\n", list->Stu.age);
            LINE
            list = list->Next;
        }
    }
}