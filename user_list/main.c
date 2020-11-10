/*
 * @Author: 信念D力量
 * @Github: https://www.github.com/fy2008
 * @Gitee: https://gitee.com/zsf90
 * @FilePath: /CExample/user_list/main.c
 * @Date: 2020-11-10 15:08:19
 * @LastEditTime: 2020-11-11 01:48:34
 * @LastEditors: Please set LastEditors
 * @Copyright(C): 信念D力量 (freerealmshn@163.com)
 * All Rights Reserved.
 * ----------------------------------------------
 * @Description: Main
 * ----------------------------------------------
 * 
 */
#include "user.h"
#include <stdio.h>


int main()
{
    struct user_t *h_user;
    h_user = user_init();
    // user_append(h_user, "张吴哲", MALE, 30);
    // user_append(h_user, "陈红", FEMALE, 29);
    // user_append(h_user, "李青", FEMALE, 19);
    // user_append(h_user, "李斌", MALE, 15);
    // user_append(h_user, "李斌", FEMALE, 25);

    // user_for_each(h_user);
    // printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    // user_get(h_user, "李斌");
    char name[25];
    char sex[10];
    int age;

    for(;;)
    {
        printf("(1): 添加用户、(2): 通过用户名查询、(3): 输出说有用户、(4): 退出\n");
        printf("请输入您的操作（输入上面括号中的数字):");
        int i=0;
        scanf("%d", &i);
        switch (i)
        {
        case 1:
            printf("----- 请输入用户名：");
            scanf("%s", name);
            printf("----- 请输入用户性别：");
            scanf("%s", sex);
            printf("----- 请输入用户年龄：");
            scanf("%d", &age);
            user_append(h_user, name, to_sex(sex), age);
            break;
        case 2:
            printf("请输入要查询的用户名：");
            scanf("%s", name);
            user_get(h_user, name);
            break;
        case 3:
            printf("----------------- all user ------------------\n");
            user_for_each(h_user);
            break;
        case 4:
            goto exit_loop;
            break;
        default:
            break;
        }
    }
    exit_loop:
    

    return 0;
}
