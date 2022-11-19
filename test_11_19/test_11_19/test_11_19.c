#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//int main()
//{
//	long int year = 31560000;
//	int age;
//	long int s;
//	scanf("%d", &age);
//	s = age * year;
//	printf("%ld", s);
//	return 0;
//}

//int main()
//{
//	int n;
//	float max = 0;
//	float min = 100;
//	float ave, m,sum;
//	scanf("%d\n", &n);
//	int i;
//	for (i = 0;i <= n; i++)
//	{
//		while (scanf("%f",&m)!=EOF)
//		{
//			sum = sum + m;
//			if (m > max)
//			{
//				max = m;
//			}
//			if (m < min)
//			{
//				min = m;
//			}
//		}
//	}
//	ave = sum / n;
//	printf("%.2f %.2f %.2f",max,min,ave);
//	return 0;
//}

//#include<stdio.h>
//int main()
//{
//	float a, b, c, s;
//	while (1)
//	{
//		scanf("%f %f %f\n", &a, &b, &c);
//		if (a <= 0 || b <= 0 || c <= 0)
//		{
//			printf("输入错误，请重新输入：>");
//		}
//		else
//		{
//			if (a + b >= c && a + c >= b && b + c >= a)
//			{
//				float p = (a + b + c) / 2;
//				s = (float)(sqrt(p * (p - a) * (p - b) * (p - c)));
//				printf("circumference=%.2f area=%.2f\n", a+b+c, s);
//				break;
//			}
//			else
//				printf("输入不构成三角形，请重新输入：>");
//		}
//	}
//	return 0;
//}


//int main() 
//{
//    int n, h, m;
//    while (1)
//    {
//        while (scanf("%d%d%d", &n, &h, &m) != EOF)
//            printf("%d\n", n - m / h - (m % h == 0 ? 0 : 1));
//        break;
//   }
//    return 0;
//}

//int main()
//{
//	float c, f;
//	scanf("%f", &f);
//	c = 5.0 / 9 * (f - 32);
//	printf("%.3f", c);
//	return 0;
//}

int main()
{
	int r;
	float area,p;
	p = 3.14;
	scanf("%d", &r);
	printf("%f", p * r * r);
	return 0;
}

 