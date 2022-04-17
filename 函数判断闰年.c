#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int leap(int X)
{
	if (((X % 4 == 0) && (X % 100 != 0)) || (X % 400))
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
	int year = 0;
	printf("请输入年份：");
	scanf("%d", &year);
	{
		if (leap(year) == 1)
		{
			printf("%d不是润年\n", year);
		}
		if (leap(year) == 0)
		{
			printf("%d是润年\n", year);
		}
	}
	system("pause");
	return 0;
}