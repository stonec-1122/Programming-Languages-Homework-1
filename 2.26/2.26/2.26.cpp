#include <stdio.h>

int main() {
    int a, b;
    printf("輸入兩個整數: ");
    scanf_s("%d %d", &a, &b);

    if (a % b == 0)
        printf("%d 是 %d 的倍數\n", a, b);
    else
        printf("%d 不是 %d 倍數\n", a, b);

    return 0;
}
