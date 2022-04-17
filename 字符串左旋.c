#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void leftturn(char* str, int len, int k) 
{
	for (int i = 0; i < k; i++) 
	{
		int n = 0;
		char tmp = str[0];
		for (int n = 0; n < len - 1; n++) 
		{
			str[n] = str[n + 1];
		}
		str[len - 1] = tmp;
	}
}
int main() {
	char str[] = "ABCD";
	int len = strlen(str);
	int k = 0;
	printf("请输入左旋字符的个数：");
	scanf("%d", &k);
	printf("左旋前：%s\n", str);
	leftturn(str, len, k);
	printf("左旋后：%s\n", str);
	system("pause");
	return 0;
}
