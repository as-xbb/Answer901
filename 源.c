#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	
	char* a[2] = { "one","two" }, ** p = a;
	printf("%s,", *(p++) + 1);
		printf("%c/n", **p - 1);
		return 0;

}