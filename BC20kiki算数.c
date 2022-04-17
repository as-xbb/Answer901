#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a, &b);
	int c = (a % 100 + b % 100) % 100;
	printf("%d\n", c);
	return 0;
}