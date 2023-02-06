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
//	char* ch[3] = {a,b,c};//定义指针数组
//
//	//输入
//	for (i = 0; i < 3; ++i)
//	{
//		gets(ch[i]);
//	}
//
//	//判断
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
//	////输出
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
//	//2行3列
//	int arr1[3];
//	int arr2[3];
//
//	int* p[2] = { arr1,arr2};
//	//输入
//	printf("请输入2行3列数组：\n");
//	for (int i = 0; i < 2; ++i)
//	{
//		for (int j = 0; j < 3; ++j)
//		{
//			scanf("%d", p[i] + j);
//		}
//	}
//	//寻找2行3列最大值
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
//	//输出
//	printf("最大值为%d\n", max);
//
//	return 0;
//}

//#include<stdio.h>
////10
//int main()
//{
//		//2行3列
//	int arr1[3];
//	int arr2[3];
//
//	int* p[2] = { arr1,arr2};
//	//输入
//	printf("请输入2行3列数组：\n");
//	for (int i = 0; i < 2; ++i)
//	{
//		for (int j = 0; j < 3; ++j)
//		{
//			scanf("%d", p[i] + j);
//		}
//	}
//
//	//寻找每行最大值
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
//		printf("第%d行最大值为:%d\n", i+1, max);
//	}
//
//	return 0;
//}

//#include<stdio.h>
////11
//int main()
//{
//		//2行3列
//	int arr1[3];
//	int arr2[3];
//	int i, j;
//	int* p[2] = { arr1,arr2};
//	//输入
//	printf("请输入2行3列数组：\n");
//	for (int i = 0; i < 2; ++i)
//	{
//		for (int j = 0; j < 3; ++j)
//		{
//			scanf("%d", p[i] + j);
//		}
//	}
//
//	//寻找最大值
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
//		printf("第%d列最大值为:%d\n", j+1, max);
//	}
//
//	return 0;
//}

//#include<stdio.h>
////12
//int main()
//{
//	//3行4列
//	int arr1[4];
//	int arr2[4];
//	int arr3[4];
//	int* p[3] = { arr1,arr2,arr3};
//	int i, j;
//	//输入
//	printf("请输入3行4列数组：\n");
//	for (int i = 0; i < 3; ++i)
//	{
//		for (j = 0; j < 4; ++j)
//		{
//			scanf("%d", p[i] + j);
//		}
//	}
//
//	//寻找3行4列最大值
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
//	//输出
//	printf("最大值为：%d，坐标为%d %d", max,i,j);
//
//	return 0;
//}












