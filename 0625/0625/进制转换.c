#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a;
	while (scanf("%x", &a) != EOF)//输入一个十六进制的数
	{
		printf("%d\n", a);//输出该数值的十进制表示
	}
	return 0;
}
