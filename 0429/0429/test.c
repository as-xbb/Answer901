#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//static修饰函数

//声明来自外部的函数
extern int Add(int, int);

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int sum = Add(a, b);
	printf("%d\n", sum);

	return 0;
}