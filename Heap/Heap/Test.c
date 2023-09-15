#define _CRT_SECURE_NO_WARNINGS 1
#include"Heap.h"
//int main()
//{
//	//int a[] = { 65,100,70,32,50,60 };
//	int a[] = { 2,3,5,7,4,6,8 };
//
//	HP hp;
//	HeapInit(&hp);
//
//	for (size_t i = 0; i < sizeof(a) / sizeof(int); i++)
//	{
//		HeapPush(&hp,a[i]);
//	}
//	HeapPrint(&hp);
//
//	while (!HeapEmpty(&hp))
//	{
//		printf("%d ",HeapTop(&hp));
//		HeapPop(&hp);
//	}
//
//	HeapDestroy(&hp);
// return 0;
//}


//这种写法的缺点：
//1.先有一个堆的数据结构
//2.空间复杂度复杂度的消耗
//void HeapSort(int* a, int n)
//{
//		HP hp;
//	HeapInit(&hp);
//
//	for (int i = 0; i < n; i++)
//	{
//		HeapPush(&hp,a[i]);
//	}
//	HeapPrint(&hp);
//
//	int i = 0;
//	while (!HeapEmpty(&hp))
//	{
//		//printf("%d ",HeapTop(&hp));
//		a[i++] = HeapTop(&hp);
//		HeapPop(&hp);
//	}
//	HeapDestroy(&hp);
//}

//升序
void HeapSort(int* a, int n)
{
	//建堆	（大堆）or （小堆）
	for (int i = 1; i < n; i++)
	{
		AdjustUP(a, i);
	}
	int end = n - 1;
	while (end > 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		--end;
	}
}

int main()
{
	//int a[] = { 65,100,70,32,50,60 };
	//int a[] = { 2,3,5,7,4,6,8,65,100,70,32,50,60 };
	int a[] = { 70,65,100,32,50,60 };
	HeapSort(a, sizeof(a) / sizeof(int));

	return 0;
}
