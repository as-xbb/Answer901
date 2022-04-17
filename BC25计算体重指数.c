#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int weight, high;
    scanf("%d %d", &weight, &high);
    double high_metre = high / 100.0;
    printf("%.2lf", weight / (high_metre * high_metre));
    return 0;
}
