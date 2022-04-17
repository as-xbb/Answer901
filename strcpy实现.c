#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
char* my_strcpy(char* arr2, const char* arr1)
{
	printf("实现前：arr1: %s arr2: %s\n", arr1, arr2);
	char* ret = arr2;
	while (*arr2++ = *arr1++)
	{
		;
	}
	return (ret);
}
int main()
{
	char arr1[10] = "abcdefj";
	char arr2[20] = "iloveyou";
	char* ret = my_strcpy(arr2, arr1);
	printf("实现后：arr1: %s arr2: %s\n", arr1 ,arr2);
	return 0;
}
