#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	float score[5] = { 0.0 };
	int i = 0;
	for (i = 0; i < 5; i++)
	{
		int j = 0;
		float sum = 0.0;
		for (j = 0; j < 5; j++)
		{
			scanf("%f", &score[j]);
			sum = sum + score[j];
		}
		for (j = 0; j < 5; j++)
		{
			printf("%.1f ", score[j]);
		}
		printf("%.1f\n", sum);
	}
	return 0;
}