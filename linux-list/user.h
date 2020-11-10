/*
 * @Author: 信念D力量
 * @Github: https://www.github.com/fy2008
 * @Gitee: https://gitee.com/zsf90
 * @FilePath: /CExample/linux-list/user.h
 * @Date: 2020-11-09 15:34:48
 * @LastEditTime: 2020-11-09 20:14:11
 * @LastEditors: Please set LastEditors
 * @Copyright(C): 信念D力量 (freerealmshn@163.com)
 * All Rights Reserved.
 * ----------------------------------------------
 * @Description: USER 头文件
 * ----------------------------------------------
 * 
 */
#ifndef _USER_H
#define _USER_H
#include "./types.h"

#define USER_NAME_MAX_LENGTH    25

enum Sex {
    MALE=0,
    FEMALE
};

/* 用户链表 */
struct user_list {
    char name[USER_NAME_MAX_LENGTH];
    enum Sex sex;
    int age;
    struct list_head user_head;
};

// 初始化用户
void user_init();
// 从头部添加用户
void 
#endif /* USER */
