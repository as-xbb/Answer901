#define _CRT_SECURE_NO_WARNINGS 1
//static 修饰全局变量
#include<stdio.h>

//extern 是用来声明外部符号的
extern int g_val;

int main()
{
	printf("%d\n", g_val);
	return 0;
}