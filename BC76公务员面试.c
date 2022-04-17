#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int arr[7] = { 0 };
    int i = 0, j = 0;
    float sum = 0, aver = 0;
    for (i = 0; i < 7; i++)
    {
        scanf("%d ", &arr[i]);
    }
    for (i = 0; i < 7; i++)
    {
        for (j = 0; j < 7 - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = 0;
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
    for (i = 1; i < 6; i++)
    {
        sum += arr[i];
    }
    aver = sum / 5.00;
    printf("%.2f", aver);
    return 0;
}
