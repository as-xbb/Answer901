#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };//定义一个整形有序数组
	int key = 0;//要查找的数
	scanf("%d", &key);
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] < key)//说明key在中间数右边
		{
			left = mid + 1;
		}
		else if (arr[mid] > key)
		{
			right = mid - 1;
		}
		else
		{
			printf("找到了，下标是：%d", mid);
			break;
		}
	}
	if (left > right)//

	{
		printf("没找到");
	}
	return 0;
}
