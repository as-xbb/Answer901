#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	int n = 0;
	int a = 0;
	int sum = 0;
	printf("请输入一个数：");
	scanf("%d", &n);
	for (i = 0; i < 5; i++)
	{
		a = n + a * 10;
		sum += a;
	}
	printf("sum=%d\n", sum);
	system("pause");
	return 0;
}