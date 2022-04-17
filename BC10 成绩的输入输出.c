#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int i = 0;
	int score[3] = { 0 };
	for (i = 0; i < 3; i++)
	{
		scanf("%d", &score[i]);
	}

	printf("score1=%d,score2=%d,score3=%d\n", score[0], score[1], score[2]);
	return 0;
}