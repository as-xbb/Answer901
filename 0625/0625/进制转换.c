#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a;
	while (scanf("%x", &a) != EOF)//����һ��ʮ�����Ƶ���
	{
		printf("%d\n", a);//�������ֵ��ʮ���Ʊ�ʾ
	}
	return 0;
}
