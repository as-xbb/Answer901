﻿#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	int a[10], max;
	printf("请输入10个整数：");
	for (int i = 0; i < 10; i++) 
	{
		scanf("%d", &a[i]);
	}
	max = a[0];
	for (int i = 0; i < 10; i++) 
	{
		if (a[i] > max) 
		{
			max = a[i];
			i++;
		}
	}
	printf("max = %d", max);
	return 0;
}
