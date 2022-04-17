#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int jc(int n)
{
	int a = 1;
	while (n > 1)
	{
		a *= n;
		n -= 1;
	}
	return a;
}
int main()
{
	int n = 0;
	int m = 0;
	scanf("%d", &n);
	m = jc(n);
	printf("%d\n", m);
	return 0;
}
