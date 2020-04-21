/**
 * @brief 把年龄转换成秒
 * 1年 = 3.156x10^7
 */
#include <stdio.h>

int main(void)
{
    double sec;
    int day;
    int hour;
    int age;
    printf("请输入年龄: ");
    scanf("%d", &age);
    sec = 3.156E7 * age;
    day = age * 365;
    hour = day * 24;
    printf("年=%d\n", age);
    printf("天=%d\n", day);
    printf("小时=%d\n", hour);
    printf("秒=%.4e\n", sec);
    return 0;
}