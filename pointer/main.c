#include <stdio.h>
#include <stdlib.h>


char *toBinary(int num)
{
    char *binary = (char *)malloc(sizeof(char) * 33);
    int flag = 1;
    int i;

    for (i = 31; i >= 0; i--)
    {
        if (num & flag)
        {
            binary[i] = '1';
        }
        else
        {
            binary[i] = '0';
        }
        flag<<=1;
    }
    binary[32] = '\0';

    return binary;
}

/**
*   指针函数
*/
int* fun(int* x)
{
    int* tmp = x;
    return tmp;
}

/**
*   两个数相加
*/
int add(int x, int y){
    return x+y;
}


// 函数指针
int (*pAdd)(int, int);

int main(void){
    // int inum = 0x00000001;
    // char *tmp;

    // printf("inum=%d\n", inum);
    // printf("inum->size: %ld\n", sizeof(inum));

    // for(int i=0; i<32; i++) {
    //     inum = inum << 2;
    //     tmp = toBinary(inum);
    //     printf("binBuffer: %s\n", tmp);
    // }

    int b = 2;
    int *p = &b;
    printf("%d\n", *fun(p));

    int num1 = 10;
    
    pAdd = &add;
    printf("%d\n", pAdd(3, 5));


    return 0;
}