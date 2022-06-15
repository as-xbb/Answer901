#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int n, m;
    int a[501] = { 0 };
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &m);
        a[m]++;
    }
    for (int i = 1; i <= 500; i++)
    {
        if (a[i])
        {
            printf("%d\n", i);
        }
    }
}