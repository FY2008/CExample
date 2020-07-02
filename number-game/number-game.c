/**
 * 程序功能：猜子游戏
 *
 * 1. 有程序生成一个 1~100 之间的随机数
 * 2. 用户输入一个数字
 * 3. 判断 随机数和用户输入数字的大小
 * 
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    srand(time(0));
    int number = rand()%100 + 1;
    int count = 0;
    int a;
    printf("我已经想好了一个 (1 ～ 100) 之间的数字，您要来玩一次猜字游戏吗？：\n");
    do
    {
        printf("输入一个1~100的数字进行猜字游戏： ");
        scanf("%d", &a);
        count++;
        if (a > number)
        {
            printf("『您猜的数字大了』\n");
        } else {
            printf("『您猜的数字小了』\n");
        }
    } while (a != number);
    printf("********** 恭喜您猜对了，正确的数字为%d,您猜了%d次 **********\n", number, count);
    
    return 0;
}