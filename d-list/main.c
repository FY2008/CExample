/*
 * @Copyright(C): 信念D力量 (freerealmshn@163.com)
 * All Rights Reserved.
 * **********************************************
 * @FilePath: /CExample/d-list/main.c
 * @Author: 信念D力量
 * @Github: https://www.github.com/fy2008
 * @Date: 2020-09-12 20:13:38
 * @LastEditTime: 2020-09-12 22:58:39
 * @Description: 双向链表测试
 */
#include <stdio.h>
#include "d-list.h"

int main(void)
{
    DList_t *head = NULL;
    head = initNode(head);
    printf("head->Next: %p\n", head->Next);
    printf("head->Prev: %p\n", head->Prev);
    printf("head->num: %d\n", head->num);

    printf("链表是否为空：%d\n", list_is_empty(head));
    return 0;
}