#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main() 
{
    int a, b, c, min, max;
    printf("輸入三個變數:");
    scanf_s("%d %d %d", &a, &b, &c);
    max = a;
    min = a;

    if(b > max)
    {
        max = b;
    }
    if (c > max)
    {
        max = c;
    }
    
    if (b < min)
    {
        min = b;
    }
    if (c < min)
    {
        min = c;
    }
    printf("最大: %d\n最小: %d\n", max, min);
    return 0;
}
