#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int main() {
	char a;
	while ((a = getchar()) != EOF)
	{
		getchar();
		if (a >= 'A' && a <= 'z') 
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}


