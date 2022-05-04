#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	//1~10
//	int i = 0;
//	do
//	{
//		printf("%d ", i);
//		i++;
//	} while (i<=10);
//
//		return 0;
//}

//int main()
//{
//	int n = 0;
//	//输入
//	scanf("%d", &n);//
//	//产生1~n的数字
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret * i;
//	}
//
//	printf("%d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	//产生1~n的数字
//	int i = 0;
//	int ret = 1;
//	int sum = 0;
//	for (n = 1; n <= 10; n++)
//	{
//		ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret = ret * i;
//		}
//		sum = sum + ret;
//	}
//
//	printf("%d\n", sum);
//
//	return 0;
//}

//在一个有序数组中查找具体的某个数字n。

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	//查找k
	int sz = sizeof(arr) / sizeof(arr[0]);

	int left = 0;//左下标
	int right = sz - 1;//右下标

	while (left<=right)
	{
		//int  mid = (left + right) / 2;//中间元素的下标
		int mid = left + (right - left) / 2;
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是：%d\n", mid);
			break;
		}
	}
	//
	if (left > right)
	{
		printf("找不到了\n");
	}
	return 0;
}