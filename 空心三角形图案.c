#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int num, i, j;
    while (scanf("%d", &num) != EOF)
    {
        for (i = 0; i < num; i++)
        {
            for (j = 0; j < num; j++)
            {
                if (j == 0 | i == num - 1)
                    printf("* ");
                else if (j == i && i != 0)
                    printf("* ");
                else
                    printf("  ");
            }
            printf("\n");
        }
    }
    return 0;
}
