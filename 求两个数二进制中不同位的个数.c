#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int count = 0;
	printf("输入两个数比较不同位的个数：\n");
	scanf("%d %d", &a, &b);
	c = a ^ b;
	while (c != 0)
	{
		count++;
		c = c & (c - 1);
	}
	printf("二进制码不同位的个数为：%d\n", count);
	return 0;
}