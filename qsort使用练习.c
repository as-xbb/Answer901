#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int cmp(const void* p1, const void* p2) 
{
	//整型
	return *((int*)p1) - *((int*)p2);
}

int cmp2(const void* p1, const void* p2) 
{
	//字符型
	return *((char*)p1) - *((char*)p2);
}

int cmp3(const void* p1, const void* p2) 
{
	//字符串
	return strcmp(*((char**)p1), *((char**)p2));
}

int cmp4(const void* p1, const void* p2) 
{
	//浮点型
	return *((double*)p1) - *((double*)p2);
}

int main() {
	int arr1[] = { 5 , 2 , 33 , 0 , 6 , 7 , 1 };
	qsort(arr1, sizeof(arr1) / sizeof(arr1[0]), sizeof(arr1[0]), cmp);
	for (int i = 0; i < sizeof(arr1) / sizeof(arr1[0]); i++) 
	{
		printf("%d ", arr1[i]);
	}
	printf("\n");

	char arr2[] = { 'a' , 'n' , 's' , 'w' ,'e' , 'r' };
	qsort(arr2, sizeof(arr2) / sizeof(arr2[0]), sizeof(arr2[0]), cmp2);
	for (int i = 0; i < sizeof(arr2) / sizeof(arr2[0]); i++) 
	{
		printf("%c ", arr2[i]);
	}
	printf("\n");

	char* arr3[] = {  "I", "like", "bite", "and", "pengge" };
	qsort(arr3, sizeof(arr3) / sizeof(arr3[0]), sizeof(arr3[0]), cmp3);
	for (int i = 0; i < sizeof(arr3) / sizeof(arr3[0]); i++) 
	{
		printf("%s ", arr3[i]);
	}
	printf("\n");

	double arr4[] = { 0.0 , 99.9 , 23.6 , 67.1 , 2.33 };
	qsort(arr4, sizeof(arr4) / sizeof(arr4[0]), sizeof(arr4[0]), cmp4);
	for (int i = 0; i < sizeof(arr4) / sizeof(arr4[0]); i++) 
	{
		printf("%f ", arr4[i]);
	}
	printf("\n");

	system("pause");
	return 0;
}
