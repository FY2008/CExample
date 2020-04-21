/**
 * @brief C语言基本数据类型
 * 
 */
#include <stdio.h>

int main(void)
{
    int age = 0;
    while (1)
    {
        printf("请输入 age: ");
        scanf("%d", &age);
        if (age == 100) break; //如果输入 100 则退出循环
        printf("age=%d\n", age);
        printf("%lu\n", sizeof(int));
    }
    
    return 0;
}

