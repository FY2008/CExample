/**
 * 程序目标： 计算平均数
 * 用户循环输入数字，然后计算这些数字总和的平均数，如果输入的为-1则退出循环
 * 需要的变量：
 * 1. number 保存用户的输入
 * 2. sum 保存计算后的总和
 * 3. count 保存多少个数字的总和
 */

#include <stdio.h>


int main(void)
{
    printf("请输入一个数字: ");
    int number;
    int sum = 0;
    int count = 0;
    scanf("%d", &number);
    printf("number = %d\n", number);
    while (number != -1)
    {
        sum += number;
        printf("当前的数字和为：%d\n", sum);
        count++;
        printf("请输入一个数字: ");
        scanf("%d", &number);   
    }

    printf("总和为：(%d); 平均数为：%.2f\n", sum, 1.0 * sum / count);
    
    return 0;
}