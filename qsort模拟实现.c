#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int comp(const void* a, const void* b) {
	return *(int*)a - *(int*)b;
}
void Swap(int* a, int* b) {
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void Bubblesort(int* arr, int size, int width, int(*comp)(const void* a, const void* b)) {
	for (int bound = 0; bound < size; bound++) {
		for (int cur = size - 1; cur > bound; cur--) {
			int ret = comp(&arr[cur - 1], &arr[cur]);
			if (ret > 0) {
				Swap(&arr[cur - 1], &arr[cur]);
			}
		}
	}
}

int main() {
	int arr[] = { 1, 2, 33 ,5 , 2 ,5233 };
	int size = sizeof(arr) / sizeof(arr[0]);
	Bubblesort(arr, size, sizeof(arr[0]), comp);
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}
