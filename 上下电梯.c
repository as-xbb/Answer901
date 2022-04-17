#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main(void)
{
    int n, m;
    scanf("%d", &n);
    m = ((n) / 12) * 4 + 2;//自己上去那一次，只存在上
    printf("%d", m);
    return 0;
}