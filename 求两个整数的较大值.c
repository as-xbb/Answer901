#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int jdz(int a, int b)//定义求两个整数较大值的函数
{
	return((a > b) ? a : b);
}
void main()
{
	int x = 0;
	int y = 0;
	int max=0;
	printf("请输入两个数：");
	scanf("%d %d", &x, &y);
	max = jdz(x, y);
	printf("较大值 = %d", max);
}