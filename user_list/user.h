/*
 * @Author: 信念D力量
 * @Github: https://www.github.com/fy2008
 * @Gitee: https://gitee.com/zsf90
 * @FilePath: /CExample/user_list/user.h
 * @Date: 2020-11-10 15:07:03
 * @LastEditTime: 2020-11-10 18:09:38
 * @LastEditors: Please set LastEditors
 * @Copyright(C): 信念D力量 (freerealmshn@163.com)
 * All Rights Reserved.
 * ----------------------------------------------
 * @Description: 用户
 * ----------------------------------------------
 * 用户链表的实现：
 * @name: 用户名
 * @sex: 性别
 * @age: 年龄
 * 用户操作：
 * @add_user(): 添加用户
 * @delete_user(): 删除用户
 * @get_user(): 获取用户
 */
#ifndef _USER_H
#define _USER_H

#define USER_NAME_LENGTH 25

/* 用户性别 */
typedef enum {
    MALE=0,
    FEMALE
} Sex;

/* 用户结构 */
struct user_t {
    char name[USER_NAME_LENGTH];
    Sex sex;
    int age;
    struct user_t *next, *prev;
};

/* 初始化用户 */
void user_init();

/* 添加用户 */
void add_user();

/* 获取用户 */
void get_user();

/* 删除用户 */
void delete_user();
#endif