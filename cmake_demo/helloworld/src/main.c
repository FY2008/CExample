#include <stdio.h>
#include "zsf_math.h"

int main(void)
{
    printf("Hello,World!\n");
    printf("结果: %d\n", add(10, 20));

    #if DEBUG
    printf("DEBUG True\n");
    #endif

    return 0;
}
