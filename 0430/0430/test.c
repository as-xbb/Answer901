#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//static 修饰函数

//声明来自外部的函数

//声明来自外部的函数
//extern int Add(int, int);
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//#define 定义常量和宏

//define 定义常量
//#define NUM 100
//#define STR "hehe"
//
////#define 定义宏
//#define ADD(x,y)(x+y)
//
//int main()
//{
//	//printf("%d\n", NUM);//printf("%d\n", 100);
//	//printf("%s\n", STR);//printf("%s\n", "hehe");
//	int a = 10;
//	int b = 20;
//	int sum = ADD(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}

////内存单元有编号 （地址/指针）
//
//int main()
//{
//	int a = 10;
//	int *pa = &a;//& - 取地址
//	*pa = 20;//* 解引用操作符
//
//	//
//	//指针变量是用来存放地址的一种变量
//	//
//	printf("%d\n", a);
//
//	char ch = 'w';
//	char *pc = &ch;
//
//	//pa被称为指针变量
//
//	//0000 0000 0000 0000 0000 0000 0000 1010
//	//00 00 00 0a
//	//
//	return 0;
//}

//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//	*pc = 'b';
//	printf("%c\n", ch);
//
//	return 0;
//}
//
//1.	内存会被划分为小的内存单元，一个内存单元的大小是1个字节
//2.	每个内存单元都有编号，这个编号也被称为：地址/指针
//3.	地址/指针就可以存放在一个变量中，这个变量被称为指针变量
//4.通过指针变量中存储的地址，就能找到指针指向的空间
//

int main()
{
	char ch = 'w';
	int n = 100;
	double d = 3.14;

	char* pc = &ch;
	int* pi = &n;
	double* pd = &d;

	printf("%d\n", sizeof(pc));
	printf("%d\n", sizeof(pi));
	printf("%d\n", sizeof(pd));

	return 0;
}