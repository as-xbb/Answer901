#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void hai(char str1[], char str2[], int m, int n)
{
	int i, k;
	for (i = m, k = 0; i < n + m; i++, k++)
	{
		str2[k] = str1[i];
	}
	str2[k] = '\0';
}
int main()
{
	char str1[100], str2[200];
	gets(str1);
	hai(str1, str2, 2, 3);
	puts(str2);
}