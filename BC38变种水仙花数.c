﻿#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	for (i = 10000; i <= 99999; i++)
	{
		int j = 10;
		int sum = 0;
		int tmp = i;
		for (j = 10; j <= 10000; j *= 10)
		{
			sum += (tmp % j) * (tmp / j);
		}
		if (sum == i)
			printf("%d ", i);
	}
	return 0;
}