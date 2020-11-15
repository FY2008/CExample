/*
 * @Author: 信念D力量
 * @Github: https://www.github.com/fy2008
 * @Gitee: https://gitee.com/zsf90
 * @FilePath: /CExample/leetcode/topic_1/main.c
 * @Date: 2020-11-15 15:45:48
 * @LastEditTime: 2020-11-15 16:10:37
 * @LastEditors: Please set LastEditors
 * @Copyright(C): 信念D力量 (freerealmshn@163.com)
 * All Rights Reserved.
 * ----------------------------------------------
 * @Description: 
 * ----------------------------------------------
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int nums[] = { 2, 3, 6, 7, 9, 1 };
    int target = 10;
    int *result = NULL;
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<6; j++){
            if(nums[i] + nums[j] == target)
            {
                result = (int*)malloc(sizeof(int)*2);
                result[0] = i;
                result[1] = j;
            }
        }
    }
    printf("result: %d\n", result[0]);
    printf("result: %d\n", result[1]);
    return 0;
}