#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int ticket = 100;
//	int x = 0;
//	scanf("%d", &x);
//	printf("%d", ticket * x);
//	return 0;
//}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d", a /10% 10);
//	return 0;
//}

//int main()
//{
//	int  Week, Day;
//	scanf("%d %d", &Week, &Day);
//	printf("%d\n", (Week + Day - 1) % 7 + 1);//好处：避免余数为0
//	return 0;
//}

//int main()
//{
//	int seconds;
//	scanf("%d", &seconds);
//	printf("%d %d %d", seconds / 3600, (seconds % 3600)/60,(seconds % 3600)%60);
//	return 0;
//}

int main()
{
	int n;
	while (scanf("%d", &n) != EOF)
	{
		printf("%d", 2 << (n-1));
	}

	return 0;
}