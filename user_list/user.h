/*
 * @Author: 信念D力量
 * @Github: https://www.github.com/fy2008
 * @Gitee: https://gitee.com/zsf90
 * @FilePath: /CExample/user_list/user.h
 * @Date: 2020-11-10 15:07:03
 * @LastEditTime: 2020-11-15 12:32:31
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
#include <stdlib.h>
#include <stdbool.h>
#define USER_NAME_LENGTH 25
#define GET_USER_COUNT(h) printf("共有: %d 个用户\n", h->count)
/* 用户性别 */
typedef enum {
    MALE=0,
    FEMALE
} Sex;

/* 用户结构 */
struct user_t {
    struct user_t *prev; // 指向前一个
    char name[USER_NAME_LENGTH];
    unsigned int id;
    unsigned int count; // 用户基数
    Sex sex;
    int age;
    struct user_t *next; // 指向后一个
};

/**
 * 判断链表是否为空
 * 链表为空返回 true(1), 不为空返回 false(0)
 */
bool user_empty(struct user_t *head);

/* 初始化用户 */
struct user_t* user_init();

/* 添加用户 */
void user_append(struct user_t *head, const char *name, Sex sex, int age);

/* 获取用户 */
void user_get(struct user_t *head, const char *name);

/* 遍历用户 */
void user_for_each(struct user_t *head);

/* 反向遍历 */
void user_for_reverse_each(struct user_t *head);

/* 遍历下一个用户 */
void user_next(struct user_t *new_user, struct user_t **ret);

/* 遍历上一个用户 */
void user_prev(struct user_t *new_user, struct user_t **ret);

/* 删除用户 */
void delete_user();

/* 更加输入的字符串返回性别 */
Sex to_sex(const char *sex);
#endif