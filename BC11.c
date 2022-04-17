#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int number = 0;
	float score_c = 0.0;
	float score_math = 0.0;
	float score_eng = 0.0;
	scanf("%d;%f,%f,%f", &number, &score_c, &score_math, &score_eng);
	printf("The each subject score of No. %d is %.2f, %.2f, %.2f.\n", \
		number, score_c, score_math, score_eng);
	return 0;
}