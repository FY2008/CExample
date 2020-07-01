/*
* 程序目标：把英寸(inch)转换成厘米（CM)
* 1英寸等于2.54厘米
*/

#include <stdio.h>


float inchToCM(float inch){
    return inch * 2.54;
}

int main(void)
{
    // 定义一个英寸变量
    float inch;

    printf("请输入一个英寸单位的长度：");
    scanf("%f", &inch);

    // 输出转换后的厘米值
    printf("转换后的厘米尺寸为：%.2f(CM)\n", inchToCM(inch));

    //return 0;
}