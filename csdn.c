#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stddef.h>
struct S1
{
	char c1;//1
	int i;//1
	char c2;//4
};

struct S2
{
	char c1;
	char c2;
	int i;
};

struct S3
{
	double d;
	char c;
	int i;
};

struct S4
{
	char c1;
	struct S3 s3;
	double d;
};

int main()
{
	printf("%d\n", sizeof(struct S4));
	/*printf("%u\n", offsetof(struct S3, d));
	printf("%u\n", offsetof(struct S3, c));
	printf("%u\n", offsetof(struct S3, i));*/
	//struct S1 s;
	//struct S2 s2;
	//printf("%d\n", sizeof(s));
	//printf("%d\n", sizeof(s2));
	return 0;
}