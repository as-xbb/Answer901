#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void revier(char ch[], int n, int sz)
//{
//	int i = 0;
//	char tmp[20];
//	for (i = 0; i < n; i++)
//	{
//		tmp[i] = ch[i];
//	}
//	for (i = 0; i < sz - n; i++)
//	{
//		ch[i] = ch[i + n];
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		ch[sz - n + i] = tmp[i];
//	}
//}
//int main()
//{
//	char ch[] = "ABCD";
//	int n = 0;
//	scanf("%d", &n);
//	int sz = strlen(ch);
//	revier(ch, n, sz);
//	puts(ch);
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//#define ROW 3
//#define COL 3
//int Find(int arr[ROW][COL], int *row, int *col, int n)
//{
//    *row = 0;
//    *col = COL - 1;
//    while ((*row < ROW) && (*col >= 0))
//    {
//        if (arr[*row][*col] > n)
//        {
//            (*col)--;
//        }
//        else if (arr[*row][*col] < n)
//        {
//            (*row)++;
//        }
//        else
//            return 1;
//    }
//    return 0;
//}
//int main()
//{
//    int arr[ROW][COL] = {{1,2,3},{4,5,6},{7,8,9}};
//    int input = 0; 
//    int row = 0;
//    int col = 0;
//    printf("请输入一个整数：");
//    scanf("%d", &input);
//    int ret = Find(arr, &row, &col, input);
//    if (ret == 1)
//    {
//        printf("存在row = %d,col = %d\n",row+1,col+1);
//    }
//    else
//    {
//        printf("Not found\n");
//    }
//    return 0;
//}



#include<string.h>
#include<stdio.h>
int  reverseLeftWords(char* str1, char* str2)
{
	int len = strlen(str1);
	int i = 0;
	for (i = 0; i < len; i++)
	{
		int j = 0;
		char temp = *str1;
		for (j = 0; j < len - 1; j++)
		{
			*(str1 + j) = *(str1 + j + 1);
		}
		*(str1 + len - 1) = temp;
		if (strcmp(str1, str2) == 0)
		{
			return 1;
		}
	}
	return 0;
}
int main()
{
	char str1[20] = "ABCDEF";
	char str2[] = "ABCDEF";
	int k = 0;
	int ret = reverseLeftWords(str1, str2);
	if (1 == ret)
	{
		printf("yes\n");
	}
	else {
		printf("no\n");
	}
	return 0;
}