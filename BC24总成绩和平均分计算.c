#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	float sum = 0.0;
	float avg = 0.0;
	float score = 0.0;
	for (i = 0; i < 3; i++)
	{
		scanf("%f", &score);
		sum += score;
	}
	printf("%.2f %.2f\n", sum, sum / 3.0);
	return 0;
}