/*
 * @Copyright(C): 信念D力量 (freerealmshn@163.com)
 * All Rights Reserved.
 * **********************************************
 * @FilePath: /CExample/d-list/d-list.c
 * @Author: 信念D力量
 * @Github: https://www.github.com/fy2008
 * @Date: 2020-09-12 20:12:22
 * @LastEditTime: 2020-09-12 23:07:54
 * @Description: 双向链表
 */
#include "d-list.h"
#include <stdlib.h>

/**
 * 初始化结点函数，作用是创建一个双向链表的头结点，参数为一个链表指针
 */
DList_t* initNode(DList_t *head)
{
    head = (DList_t*)malloc(sizeof(DList_t));
    head->Next = NULL;
    head->Prev = NULL;
    return head;
}


/**
 * 判断链表是否为空
 * 为空返回     1
 * 不为空返回   0
 */
int list_is_empty(DList_t *head)
{
    return (head->Next == head->Prev) ? 1 : 0;
}


/**
 * 销毁链表
 */
void list_destroy(DList_t *head)
{
    
}