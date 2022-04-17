#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int x = 0;
    scanf("%d", &x);
    int i = 0;
    for (i = 0; i < 4; i++)
    {
        printf("%d", x% 10);
        x /= 10;
    }
    return 0;
}
