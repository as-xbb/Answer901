#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int i;
	int count = 0;
	for (i = 1; i <= 100; i++) 
	{
		if (i % 10 == 9) 
		{
			count++;
		}
		if (i / 10 == 9) 
		{
			count++;
		}
	}
	printf("9的个数为：%d个", count);
	return 0;
}