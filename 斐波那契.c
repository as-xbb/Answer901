﻿#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Fibonacci(int n);
int main()
{
	int n;
	printf("输入n值：");
	scanf_s("%d", &n);
	printf("%d\n", Fibonacci(n));
	return 0;
}

int Fibonacci(int n)
{
	if (n == 1 || n == 2)
	{
		return 1;
	}
	if (n > 2)
	{
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	}
}
