/*
 * @Author: 信念D力量
 * @Github: https://www.github.com/fy2008
 * @Gitee: https://gitee.com/zsf90
 * @FilePath: /CExample/linux-list/types.h
 * @Date: 2020-11-09 14:16:45
 * @LastEditTime: 2020-11-09 15:36:41
 * @LastEditors: Please set LastEditors
 * @Copyright(C): 信念D力量 (freerealmshn@163.com)
 * All Rights Reserved.
 * ----------------------------------------------
 * @Description: 自定义类型
 * ----------------------------------------------
 * 
 */
#ifndef _TYPES_H
#define _TYPES_H


/* 链表结构 */
struct list_head {
    struct list_head *next, *prev;
};

#endif