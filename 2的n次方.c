#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    printf("2的%d次方为：%d", n ,2 << (n - 1));
    return 0;
}
