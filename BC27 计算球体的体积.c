#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int main()
{
    double n;
    double cube;
    double p = acos(-1.);
    scanf("%lf", &n);
    cube = 4. / 3. * p * pow(n, 3);
    printf("%.3lf", cube);
    return 0;
}
