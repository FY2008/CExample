/*
 * @Copyright(C): 信念D力量 (freerealmshn@163.com)
 * All Rights Reserved.
 * **********************************************
 * @FilePath: /CExample/d-list/d-list.h
 * @Author: 信念D力量
 * @Github: https://www.github.com/fy2008
 * @Date: 2020-09-12 19:33:58
 * @LastEditTime: 2020-09-12 23:07:24
 * @Description: 双向链表头文件
 * @双链表常用操作列表
 * 1. 创建头结点
 */
#ifndef _D_LIST_H
#define _D_LIST_H

struct DList
{
    int num;
    struct DList *Next;
    struct DList *Prev;
};
typedef struct DList DList_t;


DList_t* initNode(DList_t *head);
int list_is_empty(DList_t *head);
void list_destroy(DList_t *head);



#endif