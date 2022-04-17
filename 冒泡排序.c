#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print_arr(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void mppx(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] < arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print_arr(arr, sz);
	mppx(arr, sz);
	print_arr(arr, sz);
}
