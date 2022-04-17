#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
    float a = 0;
    float b = 0;
    float c = 0;
    scanf("%f %f %f", &a, &b, &c);
    printf("%.2f %.2f", a + b + c, (a + b + c) / 3);
    //%.2f 表示 显示小数点后两位 四舍五入
    return 0;
}
