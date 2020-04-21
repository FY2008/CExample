/**
 * @brief 练习熟悉 C 语言输入输出功能
 * 输入: scanf()
 * 输出: printf()
 */
#include <stdio.h>

int main(void)
{
    unsigned char age;  // 年龄
    float weight;   // 体重(KG)
    float height;   // 身高(CM)

    printf("请输入年龄: ");
    scanf("%hhu", &age);
    printf("年龄: %d\n", age);

    printf("请输入体重: ");
    scanf("%f", &weight);
    printf("体重: %.3f\n", weight);

    printf("请输入身高: ");
    scanf("%f", &height);
    printf("身高: %.3f\n", height);

    return 0;
}
