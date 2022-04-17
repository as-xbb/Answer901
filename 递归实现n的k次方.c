#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int nk(int n, int k)
{
	if (k <= 0)
		return 1;
	else
		return n * nk(n, k - 1);
}
int main()
{
	int n = 0;
	int k = 0;
	scanf("%d%d", &n, &k);
	int jg = nk(n, k);
	printf("%d\n", jg);
	system("pause");
	return 0;
}