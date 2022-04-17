#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
int main()
{
	int money = 0;
	printf("小盆友，你有多少钱？");
	scanf("%d", &money);
	int total = money;
	int empty = money;
	while (empty >= 2)
	{
		total += empty / 2;
		empty = empty / 2 + empty % 2;
	}
	printf("你可以喝 %d 瓶饮料\n", total);
	system("pause");
	return 0;
}