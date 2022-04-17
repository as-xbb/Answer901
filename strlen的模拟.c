#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Strlen(char* ch)
{
	int x = 0;
	while (*ch != '\0') {
		*ch++;
		x++;
	}
	return x;
}
void main()
{
	char ch[] = "ansaisaiyaojiayouuya";
	printf("原字符串是 > %s\n", ch);
	int result = Strlen(ch);
	printf("输出字符串的长度 > %d ", result);
	printf("\n");
	system("pause");
}
