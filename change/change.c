/**
*   程序目标：找零钱
*   1. 输入应付（价格）price
*   2. 输入支付金额 bill
*   3. 计算应找金额 
*   
*/

#include <stdio.h>


// 找零函数
void getChange(float price, float bill, float *change)
{
    // 判断支付金额是否 >= 购物总金额
    if(bill >=price)
    {
        if(bill == price)
            printf("您支付的金额%.2f刚好，无需找您零钱，欢迎下次再来！\n", bill);
        else
            *change = bill - price;
    } else {
        float temp = price - bill;
        printf("您支付的金额不够，请再支付：%.2f\n", temp);
    }
}

int main(void)
{
    float price = 0.00f; // 购物总金额
    float bill = 0.00f; // 支付的金额
    float change = 0.00f; // 应找零钱
    int flow_flag = 0;

    while (1)
    {
        printf("请输入您要的操作：1->继续计算；2->退出计算\n");
        scanf("%d", &flow_flag);
    
        switch (flow_flag)
        {
            case 1:
                // 计算
                printf("请输入购物总金额: ");
                scanf("%f", &price);
                printf("请输入您支付的金额: ");
                scanf("%f", &bill);
                // 调用 getChange() 函数
                getChange(price, bill, &change);
                printf("应该找您：%.2f元\n", change);
                printf("*******************************************************\n");
                break;
            case 2:
                printf("欢迎下次再使用找零计算功能！\n");
                goto end;
        default:
            printf("没有你输入的选项，请输入给出的选项；\n");
            printf("*******************************************************\n");
            break;
        }
    }
    end:
    
    return 0;
}