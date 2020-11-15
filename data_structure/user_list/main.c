/*
 * @Author: 信念D力量
 * @Github: https://www.github.com/fy2008
 * @Gitee: https://gitee.com/zsf90
 * @FilePath: /CExample/user_list/main.c
 * @Date: 2020-11-10 15:08:19
 * @LastEditTime: 2020-11-15 12:32:42
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
    struct user_t *h_user, *current_user;
    h_user = user_init();
    // current_user = (struct user_t*)malloc(sizeof(struct user_t));
    current_user = h_user;
    char name[25];
    char sex[10];
    int age;

    for(;;)
    {
        printf("\n---------------------------------------------------------\n");
        printf("(1): 添加用户、(2): 通过用户名查询、(3): 输出所有用户、(4): 反向输出所有用户、(5): 下一个、（6）：上一个、(7): 退出\n");
        printf("请输入您的操作（输入上面括号中的数字):");
        int i=0;
        scanf("%d", &i);
        switch (i)
        {
        case 1:
            // 向链表尾部插入用户
            printf("请输入用户名>>>");
            scanf("%s", name);
            printf("请输入用户性别>>>");
            scanf("%s", sex);
            printf("请输入用户年龄>>>");
            scanf("%d", &age);
            user_append(h_user, name, to_sex(sex), age);
            break;
        case 2:
            // 根据用户名查询用户
            printf("请输入要查询的用户名：");
            scanf("%s", name);
            user_get(h_user, name);
            break;
        case 3:
            // 遍历输出所有用户数据判断
            printf("----------------- all user ------------------\n");
            user_for_each(h_user);
            break;
        case 4:
            // 反向遍历所有用户
            printf("----------------- 反向 用户列表 ------------------\n");
            user_for_reverse_each(h_user);
            break;
        case 5:
            // 单步查询下一个用户
            printf("------------------ 查询结果 --------------------\n");
            user_next(current_user, &current_user);
            break;
        case 6:
            // 单步查询上一个用户
            printf("------------------ 查询结果 --------------------\n");
            user_prev(current_user, &current_user);
            break;
        case 7:
            // 跳出死循环
            goto exit_loop;
            break;
        default:
            break;
        }
    }
    exit_loop:
    GET_USER_COUNT(h_user);

    return 0;
}
