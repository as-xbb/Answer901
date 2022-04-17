#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>  
#include<string.h>
#include<assert.h>
void my_memcpy(char* arr2, const char* arr1, int n)
{
	char* ret = arr2;
	const char* dst = arr1;
	assert(arr1);
	assert(arr2);
	while (n)
	{
		*ret = *dst;
		ret++;
		dst++;
		n--;
	}
}
int main()
{
	char arr1[] = "i love bit";
	char arr2[32];
	my_memcpy(arr2, arr1, strlen(arr1) + 1);
	printf("arr2数组元素为:%s\n", arr2);
	return 0;
}
