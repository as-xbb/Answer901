#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 2,3,4,5,6 };
//	int arr3[5] = { 3,4,5,6,7 };
//
//	int* parr[3] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			//printf("%d ", parr[i][j]);
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* p = &a;//����ָ�� - ָ�����ε�ָ�룬������ͱ�����ַ��
//
//	char ch = 'w';
//	char* pc = &ch;//�ַ�ָ�� - ָ���ַ���ָ�룬��ŵ����ַ������ĵ�ַ
//
//	//����ָ�� - ָ�������ָ��
//	int* p1[10];
//	int(*p2)[10];
//	//p1, p2�ֱ���ʲô��
//	//p1�����飬ָ������
//	//p2��ָ�룬����ָ��
//	return 0;
//}

////int main()
////{
////	int a = 10;
////	int* p = &a;
////
////	int arr[10] = { 0 };
////	//����������Ԫ�صĵ�ַ
////	printf("%p\n", arr);
////	printf("%p\n", arr+1);
////
////	printf("%p\n", arr[0]);
////	printf("%p\n", arr[0]+1);
////
////	printf("%p\n", &arr);
////	printf("%p\n", &arr+1);
////
////	return 0;
////}

//
//����������ô����أ�
//
//ͨ������£�����˵������������������Ԫ�صĵ�ַ
//������2�����⣺
//1. sizeof(������)���������������ʾ�������飬sizeof(������)���������������Ĵ�С
//2. &���������������������ʾ�������飬&������ȡ��������������ĵ�ַ
//

////�β�д������
//void print1(int arr[],int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//}

////�β�д��ָ�����ʽ
//void print1(int *arr, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(arr + i));
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//дһ��������ӡarr���������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	print1(arr,sz);
//	return 0;
//}

//
//void print1(int(*p)[10], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		//*p �൱����������������������Ԫ�صĵ�ַ������*p����&arr[0] 
//		printf("%d ", *(*p + i));
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//дһ��������ӡarr���������
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	print1(&arr, sz);
//
//	return 0;
//}

//void print2(int (*p)[5], int c, int r)
//{
//	int i = 0;
//	for(i = 0; i < c; i++)
//	{
//		int j = 0;
//		for (j = 0; j < r; j++)
//		{
//			//p+i��ָ���i�е�
//			//*(p+i)�൱���õ��˵�i�У�Ҳ�൱�ڵ�i�е�������
//			//��������ʾ��Ԫ�صĵ�ַ��*(p+i)���ǵ�i�е�һ��Ԫ�صĵ�ַ
//			printf("%d ", *(*(p + i) + j));
//			//printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}
//
//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	//дһ����������ӡarr����
//	print2(arr, 3, 5);
//	return 0;
//}


