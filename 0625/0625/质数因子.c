#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int num;
	scanf("%d", &num);
	for (int i = 2; i * i <= num; i++)
	{
		while (num % i == 0)
		{
			printf("%d", i);
			num /= i;
		}
	}
	if (num > 1)
		printf("%d", num);
	return 0;
}