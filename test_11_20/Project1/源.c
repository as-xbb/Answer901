#define _CRT_SECURE_NO_WARNINGS 1
//int main()
//{
//	float r1 = 0.0f, r2 = 0.0f;
//	scanf("%f%f", &r1, &r2);
//	float r3;
//	r3 = r1 * r2 / (r1 + r2);
//	printf("%.1f", r3);
//	return 0;
//}

//int main()
//{
//    int h, r,c;
//    float v;
//    float p;
//    scanf("%d%d", &h, &r);
//    v = 3.14 * h * r * r;
//    p = (int)(10000.0 / v);
//  //  c = (int)(10000.0 / v) + (10000.0 / v == p ? 0 : 1);
//    c = p == (10000.0 / v) ? p : p + 1;
//    printf("%d", c);
//       return 0;
//}

//int main()
//{
//	int a, b;
//	scanf("%d %d", &a, &b);
//	printf("%d", b + b - a);
//	return 0;
//}

//int main()
//{
//	int r;
//	float p = 3.14;
//	scanf("%d", &r);
//	printf("%.2f", 4.0/3*p * r * r*r);
//	return 0;
//}

int main()
{
	int h, m, k;
	scanf("%d:%d %d", &h, &m, &k);
	h = ((m + k) / 60 + h) % 24;
	m = (m + k) % 60;
	printf("%02d:%02d\n", h, m);
	return 0;
} 