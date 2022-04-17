#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h> 
int main()
{
	int i, j,
		t = 0,
		leap = 1;
	for (i = 101; i <= 200; i++) {
		for (j = 2; j <= sqrt(i); j++) 
			if (i % j == 0) {
				leap = 0;
				break;
			}
		if (leap == 1) {
			printf("%-5d", i);	
			t++;
		}
		leap = 1;
		if (t % 10 == 0) printf("\n");
	}

	return 0;
}


