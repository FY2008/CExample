/**
 * @brief 把 ASCII 转换为字符
 */
#include <stdio.h>

int main(void)
{
    char c;
    while (1)
    {
        printf("请输入一个ASCII字符: ");
        c = getchar();
        if(c=='\n' || c=='\r') break; // 按回车退出循环
        printf("\n");
        putchar(c);
        printf(" > %d\n", c);
    }
    
    return 0;
}