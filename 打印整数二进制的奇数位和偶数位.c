﻿#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
	int num = 0;
	printf("请输入一个数:");
	scanf("%d", &num);
	printf("奇数位：");
	for (int i = 31; i >= 1; i -= 2) {
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
	printf("偶数位：");
	for (int i = 30; i >= 0; i -= 2) {
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
	system("pause");
	return 0;
}
