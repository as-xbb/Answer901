#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
i {
	char a[777];
	char* p;
	int count = 0;
	gets(a);
	p = a;
	while (*p != '\0')
	{
		if (*p == ' ' || *p == '/t')
		{
			p++;
			continue;
		}
		if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z'))
		{
			count++;
			while (*p != '\0')
			{
				if ((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z'))
					p++;
				if (*p == ' ' || *p == '/t')
					break;
			}
		}
	}
	printf("你输入的有 % d个单词", count);
	return 0;
}