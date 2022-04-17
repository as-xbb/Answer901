#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#define N 23
int change(int* arr, int p, int q) 
{
    int tmp = arr[p];
    arr[p] = arr[q];
    arr[q] = tmp;
}
int odd_even(int* arr, int len)
{
    int  i = 0;
    int j = len - 1;
    while (i < j)
    {
        while (i < j && arr[i] % 2) 
        {
            i++;
        }
        while (i < j && !(arr[j] % 2))

        {
            j--;
        }
        if (i < j)   
        {
            change(arr, i, j);
        }
    }
}
int main()
{
    int arr[N] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23};
    int i = 0;
    printf("请输入一组数：\n");
    for (i = 0; i < N; i++)
    {
        scanf("%d", &arr[i]);
    }
    odd_even(arr, N);
    for (i = 0; i < N; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    system("pause");
    return 0;
}