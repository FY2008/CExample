/*
 * @Author: 信念D力量
 * @Github: https://www.github.com/fy2008
 * @Gitee: https://gitee.com/zsf90
 * @FilePath: /CExample/linux-list/list.h
 * @Date: 2020-11-09 16:25:24
 * @LastEditTime: 2020-11-09 16:38:27
 * @LastEditors: Please set LastEditors
 * @Copyright(C): 信念D力量 (freerealmshn@163.com)
 * All Rights Reserved.
 * ----------------------------------------------
 * @Description: 
 * ----------------------------------------------
 * 
 */
#ifndef _LIST_H
#define _LIST_H

#include "./types.h"

// 初始化头指针
#define LIST_HEAD_INIT(name) { &(name), &(name)}

#define LIST_HEAD(name) \
    struct list_head name = LIST_HEAD_INIT(name)

// 遍历链表
#define __list_for_each(pos, head) \
    for (pos = (head)->next; pos != (head); pos = pos->next)

// 获取节点首地址（不是list_head地址，是数据层节点首地址
#define list_entry(ptr, type, member) \
    container_of(ptr, type, member)

// container_of 在Linux内核中是一个常用的宏，用于从包含在某个
// 结构中的指针获得结构体本身的指针，通俗地讲就是通过结构体变量中
// 某个成员的首地址进而获得整个结构体变量的首地址
#define container_of(ptr, type, member) ({  \
    const typeof( ((type*)0)->member )*__mptr = (ptr); \
    (type *)( (char *)__mptr - offsetof(type, member) );})

#define offsetof(s, m) (size_t)&(((s *)0)->m)

#endif