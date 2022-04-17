#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	char xs;
	for (xs = 'A'; xs <= 'D'; xs++)
	{
		if (((xs != 'A') + (xs == 'C') + (xs == 'D') + (xs != 'D')) == 3)  
		{
			printf("%c是凶手\n", xs);
			break;
		}
	}
	return 0;
}