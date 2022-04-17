#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	//sizeof是一个操作符，用来计算类型和变量大小的
//	printf("%d\n", sizeof(char));		//1
//	printf("%d\n", sizeof(short));		//2
//	printf("%d\n", sizeof(int));		//4
//	printf("%d\n", sizeof(long));		//4
//	printf("%d\n", sizeof(long long));	//8
//	printf("%d\n", sizeof(float));		//4
//	printf("%d\n", sizeof(double));		//8
//
//	return 0;
//}

//int main()
//{
//	short age = 10;
//
//	return 0;
//}


//int b = 20;//全局变量 - 大括号的外边定义的
//
//void test()
//{
//	int c = 1000;
//}
//int main()
//{
//	int a = 10;//局部变量 - 大括号内部定义的
//
//	return 0;
//}

//int a = 10;
//
//void test()
//{
//	printf("test:%d\n", a);
//}
//int main()
//{
//	printf("main:%d\n", a);
//		test();
//	return 0;
//}

//int a = 100;
//
//int main()
//{
//	int a = 10;
//	printf("a=%d\n", a);
//}

//写一个代码求2个整数的和
//int main()
//{
//	int num1 = 0;
//	int num2 = 0;
//	int sum = 0;
//	//输入
//	scanf("%d%d", &num1, &num2);
//	//求和
//	sum = num1 + num2;
//	//输出
//	printf("sum = %d\n", sum);
//	//printf("%d%d", num1, num2);
//	return 0;
//}

//局部变量的作用域就是局部变量所在的局部范围
//全局变量
int a = 10;

void test()
{
	printf("test: %d\n", a);
}
int main()
{
	printf("main: %d\n", a);
	return 0;
}