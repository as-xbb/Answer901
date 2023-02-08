#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//	int arr3[5] = { 3,4,5,6,7 };
//
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", parr[i][j]);
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;//整形指针 - 指向整形的指针，存放整型变量地址的
//
//	char ch = 'w';
//	char* pc = &ch;//字符指针 - 指向字符的指针，存放的是字符变量的地址
//
//	//数组指针 - 指向数组的指针
//	int* p1[10];
//	int(*p2)[10];
//	//p1, p2分别是什么？
//	//p1是数组，指针数组
//	//p2是指针，数组指针
//	return 0;
//}

////int main()
////{
////	int a = 10;
////	int* p = &a;
////
////	int arr[10] = { 0 };
////	//数组名是首元素的地址
////	printf("%p\n", arr);
////	printf("%p\n", arr+1);
////
////	printf("%p\n", arr[0]);
////	printf("%p\n", arr[0]+1);
////
////	printf("%p\n", &arr);
////	printf("%p\n", &arr+1);
////
////	return 0;
////}

//
//数组名该怎么理解呢？
//
//通常情况下，我们说的数组名都是数组首元素的地址
//但是有2个例外：
//1. sizeof(数组名)，这里的数组名表示整个数组，sizeof(数组名)计算的是整个数组的大小
//2. &数组名，这里的数组名表示整个数组，&数组名取出的是整个数组的地址
//

////形参写出数组
//void print1(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}

////形参写成指针的形式
//void print1(int *arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//写一个函数打印arr数组的内容
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print1(arr,sz);
//	return 0;
//}

//
//void print1(int(*p)[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//*p 相当于数组名，数组名又是首元素的地址，所以*p就是&arr[0] 
//		printf("%d ", *(*p + i));
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//写一个函数打印arr数组的内容
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print1(&arr, sz);
//
//	return 0;
//}

//void print2(int (*p)[5], int c, int r)
//{
//	int i = 0;
//	for(i = 0; i < c; i++)
//	{
//		int j = 0;
//		for (j = 0; j < r; j++)
//		{
//			//p+i是指向第i行的
//			//*(p+i)相当于拿到了第i行，也相当于第i行的数组名
//			//数组名表示首元素的地址，*(p+i)就是第i行第一个元素的地址
//			printf("%d ", *(*(p + i) + j));
//			//printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//写一个函数，打印arr数组
//	print2(arr, 3, 5);
//	return 0;
//}


