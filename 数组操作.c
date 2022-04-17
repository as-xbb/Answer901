#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void init(int a[], int sz) {
	int i;
	for (i = 0; i < sz; i++) {
		a[i] = 0;
	}
}
void print(int arr[], int sz) {
	int i = 0;
	for (i = 0; i < sz; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void reverse(int a[], int sz) {
	int t;
	int left = 0;
	int right = sz - 1;
	while (left < right) {
		t = a[left];
		a[left] = a[right];
		a[right] = t;
		left++;
		right--;
	}
}
int main() {
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print(arr, sz);
	reverse(arr, sz);
	print(arr, sz);
	return 0;
}
