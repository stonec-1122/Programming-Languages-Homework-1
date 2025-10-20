#include <stdio.h>
#include <iostream>

int main()
{
    int n;
    printf("輸入一個整數: ");
    scanf_s("%d", &n);

    if (n % 2 == 0)
        printf("%d 是偶數.\n", n);
    else
        printf("%d 是奇數.\n", n);

    return 0;
}
