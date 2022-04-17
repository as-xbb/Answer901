#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int max3(int a, int b, int c)
{
    if (a > b) b = a;
    return b > c ? b : c;//对输入的三个数进行大小判断
}
int main() 
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);//输入三个数值
    printf("%.2f", (float)max3(a + b, b, c) / (max3(a, b + c, c) + max3(a, b, b + c)));//0.2f使结果保留两位函数
}