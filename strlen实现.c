#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<assert.h>
int as_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);
	while (*str != 0)
	{
		count++;
			str++;
	}
	return count;
}
int main()
{
	char arr[] = "hello I am AnSai";
	int ret = as_strlen(arr);
	printf("%d", ret);
	return 0;
}
