#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include <stdlib.h>
////7
//int main() 
//{
//	char array[16];
//	gets(array);
//	char* buf = array;
//	int count;
//	for (count = 0; *buf != '\0'; count++)
//	{
//		buf++;
//	}
//	printf("len = %d\n", count);
//	return 0;
//}
//
//
//#include<stdio.h>
////8
//int main()
//{
//	int i, j;
//
//	char a[10];
//	char b[10];
//	char c[10];
//
//	char k[30];
//	int l = 0;
//	char* ch[3] = {a,b,c};//����ָ������
//
//	//����
//	for (i = 0; i < 3; ++i)
//	{
//		gets(ch[i]);
//	}
//
//	//�ж�
//	for (i = 0; i < 3; ++i)
//	{
//		for (j = 0; j < strlen(ch[i]); j++)
//		{
//			if (*(ch[i] + j) % 2 == 0)
//			{
//				k[l++] = *(ch[i] + j);
//			}
//		}
//	}
//	k[l] = '\0';
//
//	////���
//	//for (i = 0; i < 3; ++i)
//	//{
//	//	puts(ch[i]);
//	//	printf("\n");
//	//}
//
//	printf("%s", k);
//
//	return 0;
//}

//#include<stdio.h>
////9
//int main()
//{
//	//2��3��
//	int arr1[3];
//	int arr2[3];
//
//	int* p[2] = { arr1,arr2};
//	//����
//	printf("������2��3�����飺\n");
//	for (int i = 0; i < 2; ++i)
//	{
//		for (int j = 0; j < 3; ++j)
//		{
//			scanf("%d", p[i] + j);
//		}
//	}
//	//Ѱ��2��3�����ֵ
//	int max = *(p[0]);
//	for (int i = 0; i < 2;++i)
//	{
//		for (int j = 0; j < 3; ++j)
//		{
//			if (max < *(p[i] + j));
//			max = *(p[i] + j);
//		}
//	}
//
//	//���
//	printf("���ֵΪ%d\n", max);
//
//	return 0;
//}

//#include<stdio.h>
////10
//int main()
//{
//		//2��3��
//	int arr1[3];
//	int arr2[3];
//
//	int* p[2] = { arr1,arr2};
//	//����
//	printf("������2��3�����飺\n");
//	for (int i = 0; i < 2; ++i)
//	{
//		for (int j = 0; j < 3; ++j)
//		{
//			scanf("%d", p[i] + j);
//		}
//	}
//
//	//Ѱ��ÿ�����ֵ
//	for (int i = 0; i < 2; ++i)
//	{
//		int max = *(p[i]);
//		for (int j = 0; j < 3; ++j)
//		{
//			if (max < *(p[i] + j));
//			{
//				max = *(p[i] + j);
//			}
//		}
//		printf("��%d�����ֵΪ:%d\n", i+1, max);
//	}
//
//	return 0;
//}

//#include<stdio.h>
////11
//int main()
//{
//		//2��3��
//	int arr1[3];
//	int arr2[3];
//	int i, j;
//	int* p[2] = { arr1,arr2};
//	//����
//	printf("������2��3�����飺\n");
//	for (int i = 0; i < 2; ++i)
//	{
//		for (int j = 0; j < 3; ++j)
//		{
//			scanf("%d", p[i] + j);
//		}
//	}
//
//	//Ѱ�����ֵ
//	for (j = 0; j < 3; ++j)
//	{
//		int max = *(p[0]+j);
//		for (int i = 1; i < 2; ++i)
//		{
//			if (max < *(p[i] + j));
//			{
//				max = *(p[i] + j);
//			}
//		}
//		printf("��%d�����ֵΪ:%d\n", j+1, max);
//	}
//
//	return 0;
//}

//#include<stdio.h>
////12
//int main()
//{
//	//3��4��
//	int arr1[4];
//	int arr2[4];
//	int arr3[4];
//	int* p[3] = { arr1,arr2,arr3};
//	int i, j;
//	//����
//	printf("������3��4�����飺\n");
//	for (int i = 0; i < 3; ++i)
//	{
//		for (j = 0; j < 4; ++j)
//		{
//			scanf("%d", p[i] + j);
//		}
//	}
//
//	//Ѱ��3��4�����ֵ
//	int max = *(p[0]);
//	for (i = 0; i < 3;++i)
//	{
//		for (j = 0; j < 4; ++j)
//		{
//			if (max < *(p[i] + j));
//			max = *(p[i] + j);
//		}
//	}
//
//	//���
//	printf("���ֵΪ��%d������Ϊ%d %d", max,i,j);
//
//	return 0;
//}












