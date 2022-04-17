#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int StrStr(const char* arr1, const char* arr2)
{
	int i = 0;
	int len = strlen(arr2);
	for (i = 0; i <= len; i++)
	{
		if (arr1[i] == arr2[i])
		{
			if (((arr1[i] == ' ') || (arr1[i] == '\0'))
				&& (arr2[i] == '\0'))
			{
				return 1;
			}
		}
	}
	return 0;
}
int Str(const char* arr1, const char* arr2)
{
	int i = 0;
	int len = strlen(arr1);
	for (i = 0; i < len; i++)
	{
		if (arr1[i] == arr2[0])
		{
			return StrStr(&arr1[i], arr2);
		}
	}
	return 0;
}
int main()
{
	char arr1[] = "hello bit";
	char arr2[] = "bit";
	int ret = Str(arr1, arr2);
	if (ret == 1)
	{
		printf("%s\n", arr2);
	}
	else
	{
		printf("没有找到！\n");
	}
	system("pause");
	return 0;
}