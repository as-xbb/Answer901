#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	float a, b, c, s;
	while (1)
	{
		scanf("%f %f %f\n", &a, &b, &c);
		if (a <= 0 || b <= 0 || c <= 0)
		{
			printf("输入错误，请重新输入：>");
		}
		else
		{
			if (a + b >= c && a + c >= b && b + c >= a)
			{
				float p = (a + b + c) / 2;
				s = (float)(sqrt(p * (p - a) * (p - b) * (p - c)));
				printf("circumference=%.2f area=%.2f\n", a + b + c, s);
				break;
			}
			else
				printf("输入不构成三角形，请重新输入：>");
		}
	}
	return 0;
}