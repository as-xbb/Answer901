#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	double ¦° = 3.1415926;
	double r = 0.0;
	scanf("%lf", &r);
	double v = (4.0 / 3) * ¦° * (r * r * r);
	printf("%0.3f\n", v);
	return 0;
}