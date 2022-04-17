#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//1.字面常量
//int main()
//{
//	//int a = 100;
//	//char ch = 'c';
//	//"abcdef";//字符串常量
//	//3.14;
//
//	return 0;
//}

////2. const修饰的常变量
//int main()
//{
//	const int n = 10;
//	printf("n=%d\n", n);//10
//	n = 20;
//	printf("n=%d\n", n);//20
//	return 0;
//}

//int main()
//{
//	const int n = 10;//这里的n具有常属性，但是本质上是一个变量
//	int arr[n] = { 0 };
//	return 0;
//}

//3.#define 定义的标识符常量
//int main()
//{
//	int arr[10] = { 0 };//C99之前的语法
//	return 0;
//}

//#define MAX 100
//int main()
//{
//	MAX = 101;
//	int m = MAX;
//	printf("%d\n", m);
//	return 0;
//}

//4.枚举常量
//枚举就是一一列举
//枚举是C语言提供的一种自定义类型的方法

enum Sex
{
	MALE,
	FEMALE,
	SECRET
};


//enum COLOR
//{
//	RED,
//	GREEN,
//	BLUE
//};
//int main()
//{
//	MALE = 5;
//	printf("%d\n", MALE);
//	printf("%d\n", FEMALE);
//	printf("%d\n", SECRET);
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abc\0def";
//	char arr2[] = { 'a','b','c','d','e','f', '\0'};
//
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//
//	return 0;
//}

//int main()
//{
//	/*printf("c:\test\test.c");*/
//	printf("abcndef");
//	printf("abc\ndef");
//	return 0;
//}

//转义字符 - 转义就是转变它的意思
//int main()
//{
//	printf("c:\\test\\test.c");
//	printf("abcndef");
//	printf("abc\ndef");
//	//三字母词 - 
//	//??) -> ]
//	printf("(are you ok\?\?)");//(are you ok]
//	printf("%c\n", 'a');
//	printf("%c\n", '\'');
//	printf("%s\n", "abc");
//	printf("%s\n", "a");
//	printf("%s\n", "\"");
//
//	printf("\a\a\a\a\a");
//
//	printf("%c\n", '\135');
//	              64+24+5 =  
//	printf("%c\n", '\x42');
//
//	return 0;
//}

//int main()
//{
//	char arr1[] = "abcdef";
//	char arr2[] = { 'a','b','c','d','e','f' };
//
//	printf("%d\n", strlen(arr1));
//	printf("%d\n", strlen(arr2));
//
//	return 0;
//}

//int main()
//{
//	/*
//	int b = 20;
//	*/
//	int a = 10;//创建一个整型变量，并赋值10
//
//	return 0;
//}

//int main()
//{
//	int input = 0;
//	printf("跟着小赛毛游历C语言\n");
//	printf("你要好好学习嘛？(1/0):\n");
//	scanf("%d", &input);
//	if (1 == input)
//	{
//		printf("学好C语言，进入新大陆！\n");
//	}
//	else
//	{
//		printf("回家卖烤红薯\n");
//	}
//	return 0;
//}

//int main()
//{
//	int time = 0;
//	printf("听小赛毛说书\n");
//
//		while (time < 23333)
//		{
//			if (time == 1688)
//				break;
//			printf("听书，喝茶，一键三连%d次\n",time);
//			time++;
//		}
//		if (time >= 23333)
//		{
//			printf("获得小赛毛真传，有资格进入下一阶段听书，喝茶，一键三连\n");
//		}
//	return 0;
//}

//Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}

//Add(int x, int y)
//{
//	return x + y;
//}
//
//int main()
//{
//	int sum = 0;
//	int n1 = 0;
//	int n2 = 0;
//	//输入
//	scanf("%d%d", &n1, &n2);
//	//计算求和
//	//sum = n1 + n2;
//	// 函数的方式来实现
//	sum = Add(n1, n2);
//	//输出
//	printf("sum=%d\n", sum);
//
//	return 0;
//}

//int main()
//{
//	//int a = 10;
//	//int b = 11;
//	//int c = 12;
//	//...
//	//数组 - 一组相同类型元素的集合
//	int arr[10] = {10,11,12,13,14,15,16,17,18,19};
//	              //0 1  2 ...
//	int i = 0;
//	while (i < 10)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	//i=10
//	i = 0;
//	while (i < 10)
//	{
//		printf("%d ", arr[i]);
//		i++;
//	}
//	/*printf("%d\n", arr[5]);*/
//
//	//char ch[] = { 'a', 'b', 'c', 'd', 'x' ,'y'};
//
//	return 0;
//}

int main()
{
	int n = 10;
	int arr[n];
	//输入
	return 0;
}