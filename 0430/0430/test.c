#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//static ���κ���

//���������ⲿ�ĺ���

//���������ⲿ�ĺ���
//extern int Add(int, int);
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}

//#define ���峣���ͺ�

//define ���峣��
//#define NUM 100
//#define STR "hehe"
//
////#define �����
//#define ADD(x,y)(x+y)
//
//int main()
//{
//	//printf("%d\n", NUM);//printf("%d\n", 100);
//	//printf("%s\n", STR);//printf("%s\n", "hehe");
//	int a = 10;
//	int b = 20;
//	int sum = ADD(a, b);
//	printf("%d\n", sum);
//
//	return 0;
//}

////�ڴ浥Ԫ�б�� ����ַ/ָ�룩
//
//int main()
//{
//	int a = 10;
//	int *pa = &a;//& - ȡ��ַ
//	*pa = 20;//* �����ò�����
//
//	//
//	//ָ�������������ŵ�ַ��һ�ֱ���
//	//
//	printf("%d\n", a);
//
//	char ch = 'w';
//	char *pc = &ch;
//
//	//pa����Ϊָ�����
//
//	//0000 0000 0000 0000 0000 0000 0000 1010
//	//00 00 00 0a
//	//
//	return 0;
//}

//int main()
//{
//	char ch = 'a';
//	char* pc = &ch;
//	*pc = 'b';
//	printf("%c\n", ch);
//
//	return 0;
//}
//
//1.	�ڴ�ᱻ����ΪС���ڴ浥Ԫ��һ���ڴ浥Ԫ�Ĵ�С��1���ֽ�
//2.	ÿ���ڴ浥Ԫ���б�ţ�������Ҳ����Ϊ����ַ/ָ��
//3.	��ַ/ָ��Ϳ��Դ����һ�������У������������Ϊָ�����
//4.ͨ��ָ������д洢�ĵ�ַ�������ҵ�ָ��ָ��Ŀռ�
//

int main()
{
	char ch = 'w';
	int n = 100;
	double d = 3.14;

	char* pc = &ch;
	int* pi = &n;
	double* pd = &d;

	printf("%d\n", sizeof(pc));
	printf("%d\n", sizeof(pi));
	printf("%d\n", sizeof(pd));

	return 0;
}