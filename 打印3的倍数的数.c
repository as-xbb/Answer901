﻿#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//work5 安赛
int main()
{
	int i = 1;
	for (i = 1; i <= 100; ++i)
	{
		if (i % 3 == 0)
			printf("%d ", i);
	}
	return 0;
}