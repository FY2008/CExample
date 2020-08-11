/*
 * @Copyright(C): 信念D力量 (freerealmshn@163.com)
 * All Rights Reserved.
 * **********************************************
 * @FilePath: /CExample/linked_list/list.h
 * @Author: 信念D力量
 * @Github: https://www.github.com/fy2008
 * @Date: 2020-08-11 00:03:24
 * @LastEditTime: 2020-08-11 11:46:34
 * @Description: >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 * > 链表头文件
 * 
 */


#ifndef LIST_H
#define LIST_H


/**
 * 列表结构定义
 */
struct list_head {
    struct list_head *head;
};

struct student
{
    struct list_head list;
    int age;
};

/**
 * 函数声明
 */
void list_head_init();  // 列表初始化
void list_append();
#endif