#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int score = 0;
	while (scanf("%d", &score) != EOF)
	{
		if (score >= 90 && score <= 100)
			printf("Perfect");
	}
	return 0;
}