#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int one(unsigned int m) {
	int count = 0;
	while (m) {
		if (m % 2 == 1) 
		{
			count++;
		}
		m = m / 2;
	}
	return count;
}
int main() {
	int n = 0;
	printf("请输入一个正数：");
	scanf("%d", &n);
	int num = one(n);
	printf("%d个1\n", num);
	system("pause");
	return 0;
}
