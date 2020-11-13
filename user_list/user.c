/*
 * @Author: 信念D力量
 * @Github: https://www.github.com/fy2008
 * @Gitee: https://gitee.com/zsf90
 * @FilePath: /CExample/user_list/user.c
 * @Date: 2020-11-10 15:07:11
 * @LastEditTime: 2020-11-13 22:41:29
 * @LastEditors: Please set LastEditors
 * @Copyright(C): 信念D力量 (freerealmshn@163.com)
 * All Rights Reserved.
 * ----------------------------------------------
 * @Description: User
 * ----------------------------------------------
 * 
 */
#include "user.h"
#include <string.h>
#include <stdio.h>


/**
 * 判断链表是否为空
 * 链表为空返回 true(1), 不为空返回 false(0)
 */
bool user_empty(struct user_t *head)
{
    return (head->next == head) && (head->prev == head);
}

/* 初始化用户 */
struct user_t* user_init()
{
    struct user_t *head = (struct user_t *)malloc(sizeof(struct user_t));
    head->next = head;
    head->prev = head;
    head->id = 0;
    return head;
}

/**
 * 向循环链表尾部添加用户
*/
void user_append(struct user_t *head, const char *name, Sex sex, int age)
{
    struct user_t *new_user = (struct user_t *)malloc(sizeof(struct user_t));
    strcpy(new_user->name, name);
    new_user->next = NULL;
    new_user->prev = NULL;
    new_user->sex = sex;
    new_user->age = age;
    new_user->id = head->id + 1;

    if (user_empty(head)){
        head->next = new_user;
        head->prev = new_user;
        new_user->next = head;
        new_user->prev = head;
        head->id += 1;
    } else {
        // printf("表为非空\n");
        head->prev->next = new_user;
        new_user->next = head;
        new_user->prev = head->prev;
        head->prev = new_user;
        head->id += 1;
    }
}

/* 遍历用户 */
void user_for_each(struct user_t *head)
{
    // 如果为空链表（没有数据节点的链表）
    if (user_empty(head)){
        printf("<<<用户列表为空，不能遍历>>>\n");
    } else {
        struct user_t * new_user = head;
        new_user = new_user->next;
        
        // loop 指针指向 head 时退出循环
        // loop 指针一直循环指向下一个节点知道循环够一圈，在此使 loop == head，退出循环
        while (new_user != head)
        {
            printf("ID: %d\t", new_user->id);
            printf("姓名：%s\t", new_user->name);
            if (new_user->sex == MALE){
                printf("性别：男\t");
            } else {
                printf("性别：女\t");
            }
            printf("年龄: %d\n", new_user->age);
            new_user = new_user->next;
        }
    }
}

/* 反向遍历 */
void user_for_reverse_each(struct user_t *head)
{
    if (user_empty(head)) printf("空链表，无法执行遍历操作！\n");
    else{
        struct user_t *new_user = head;
        new_user = new_user->prev;
        while (new_user != head){
            printf("ID: %d\t", new_user->id);
            printf("姓名：%s\t", new_user->name);
            if (new_user->sex == MALE){
                printf("性别：男\t");
            } else {
                printf("性别：女\t");
            }
            printf("年龄: %d\n", new_user->age);   
            new_user = new_user->prev;
        }
    }
}

/**
 * 根据用户名获取单个用户的信息
 */
void user_get(struct user_t *head, const char *name)
{
    if (user_empty(head)){
        printf("用户链表为空，不能获取单个用户的信息\n");
    } else {
        struct user_t *t_user = head;
        t_user = t_user->next;
        int user_count = 0;
        while(t_user != head)
        {
            if(strcmp(t_user->name, name) == 0)
            {
                user_count++;
                printf("姓名：%s\t", t_user->name);
                if (t_user->sex == MALE){
                    printf("性别：男\t");
                } else {
                    printf("性别：女\t");
                }
                printf("年龄: %d\n", t_user->age);
            }
            t_user = t_user->next;
        }
        if (user_count == 0)
        {
            printf("<<<没有找到名字叫 {{ %s }} 的用户>>>\n", name);
        } else {
            printf("<<<共找到 %d 个名叫 {{ %s }} 的用户>>>\n", user_count, name);
        }
    }
}

/* 更加输入的字符串返回性别 */
Sex to_sex(const char *sex)
{
    Sex s;
    if(strcmp(sex, "男") == 0)
    {
        s = MALE;
    }
    if(strcmp(sex, "女") == 0)
    {
        s = FEMALE;
    }
    return s;
}