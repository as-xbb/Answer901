#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

void reverse(char* arr)
{
	char* left = arr;
	char* right = arr + strlen(arr) - 1;
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++, right--;
	}
}

int main()
{
	char arr[] = "Hello I am ansai";
	printf("逆序前:%s\n", arr);
	reverse(arr);
	printf("逆序后:%s\n", arr);
	system("pause");
	return 0;
}
