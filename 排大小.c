#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int bdx(int x, int y)
{
	int t;
	t = x;
	x = y;
	y = t;
}
int main()
{
	int a, b, c, t;
	printf("请输入三个数：\n");
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
		bdx(&a, &b);
	if (a < c)
		bdx(&a, &c);
	if (b < c)
		bdx(&b, &c);
	printf("从大到小为:%d %d %d\n", a, b, c);

}


