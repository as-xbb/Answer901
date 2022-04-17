#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    int x = 0;
    int y = 0;
    scanf("%d %d", &a, &b);//输入
    x = a / b;
    y = a % b;
    printf("%d %d", x, y);//输出
    return 0;
}
