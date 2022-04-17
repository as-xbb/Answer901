#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COL 3
int jz(int arr[ROW][COL], int row, int col, int key)
{
	int left = row - 1;
	int right = 0;
	while ((left < row) && (right >= 0))
	{
		if (arr[left][right] < key)
		{
			right++;
		}
		if (arr[left][right] > key)
		{
			left--;
		}
		if (arr[left][right] == key)
		{
			return 1;
		}
	}
	return 0;
}
int main() {
	int arr[ROW][COL] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	printf("请输入要查找的数字：");
	int key = 0;
	scanf("%d", &key);
	int ret = jz(arr, ROW, COL, key);
	if (1 == ret)
	{
		printf("查找成功\n");
	}
	if (0 == ret)
	{
		printf("无该数字\n");
	}
	system("pause");
	return 0;
}
