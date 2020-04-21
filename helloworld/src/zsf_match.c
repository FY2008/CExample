#include <stdio.h>
#include <string.h>
#include "../inc/zsf_match.h"

/**
 * 求两个整数的和
 */
int add(int n1, int n2)
{
    return n1 + n2;
}

/**
 * 交换两个整数的数值
 */
void swop_int(int *n1, int *n2)
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

/**
 * 计算圆的面积
 * 公式: S = 2r*Pi
 */
double circle_area(double radius)
{
    return 2 * radius * PI;
}

/**
 * 录入个人基本信息
 */
void setPerson(Person *p, const char *name, Sex sex, unsigned char age){
    strcpy(p->name, name);
    p->sex = sex;
    p->age = age;
}

void getPerson(Person p)
{
    printf("姓名: %s\n", p.name);
    printf("年龄: %d\n", p.age);

    switch (p.sex)
    {
    case MALE:
        printf("性别: 男\n");
        break;
    case FEMALE:
        printf("性别: 女\n");
        break;
    default:
        printf("性别: 保密\n");
        break;
    }
}

/**
 * @brief 把年转为天
 * 
 * @note 公式: 1Age = 365Day
 * 
 * @param Age
 * 
 * @retval None
 */
void ageToday(int Age){
    int day = 0;
    day = 365 * Age;
    printf("%d年等于: %d天\n", Age, day);
}
