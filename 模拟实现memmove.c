#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
void* MyMemmove(void* dest, const void* src, size_t count)
{
	assert(dest != NULL);
	assert(src != NULL);
	void* pd = dest;

	if (dest < src)
	{
		while (count--)
		{
			*(char*)dest = *(char*)src;
			dest = (char*)dest + 1;
			src = (char*)src + 1;
		}
	}
	else
	{
		while (count--)
		{
			*((char*)dest + count) = *((char*)src + count);
		}
	}
	return pd;
}
int main()
{
	int arr1[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	MyMemmove(arr1 + 2, arr1, 20);

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", arr1[i]);
	}
	return 0;
}