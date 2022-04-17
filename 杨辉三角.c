#define _CRT_SECURE_NO_WARNINGS 1
#include "stdio.h"
void main()
{
    int a[100][100];
    int i, j;
    int n;
    printf("请输入要打印の行数:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == j)
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = a[i - 1][j] + a[i - 1][j - 1];
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

}
