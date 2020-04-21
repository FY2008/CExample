#include <stdio.h>
#include <string.h>
#include "../inc/zsf_match.h"


int main() {
    printf("Hello, World!\n");
    int a, b;
    a = 10;
    b = 20;
    printf("a+b=%d\n", add(a, b));

    printf("a=%d\nb=%d\n", a, b);
    swop_int(&a, &b);
    printf("a=%d\nb=%d\n", a, b);

    LINE;

    double r1, cr;
    printf("请输入圆的半径: ");
    scanf("%lf", &r1);
    cr = circle_area(r1);
    printf("圆的半径: %lf\n圆的面积：%lf\n", r1, cr);

    LINE;
    
    // 创建一个人
    Person p1;

    Person *prt = NULL;
    prt = &p1;
    setPerson(prt, "李鸿章", MALE, 45);
    getPerson(p1);

    LINE;

    char cc;
    printf("请输入一个字符: ");
    cc = getchar();
    printf("输出字符: ");
    putchar(cc);
    printf("\n");

    LINE;

    // 把年转换为天
    ageToday(3);
    
    return 0;
}