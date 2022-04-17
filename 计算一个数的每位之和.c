#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int qh(int n)
{
	int sum=0;
	int m=0;
	if(n!=0)
	{
		m=n%10;
		n=n/10;
		sum=m+qh(n);
	}
	return sum;
}
int main ()
{
	int a;
	printf("请输入一个整数： ");
	scanf("%d",&a);
	printf("各位数之和为：%d\n",qh(a));
	return 0;
}