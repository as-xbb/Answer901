#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int n;
	float i = 1.0;
	int j = 1;
	float sum = 0;
	for (n = 1; n <= 100; n++)
	{
		sum = sum + (i / n) * j;
		j = -j;
	}
	printf("%f\n", sum);
	return 0;
}
