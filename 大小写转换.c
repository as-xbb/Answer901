﻿#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
    char A = 0;
    while ((A = getchar()) != EOF) {
        getchar();
        if (A >= 'A' && A <= 'Z') {
            putchar(A + 32);
            printf("\n");
        }
        else {
            putchar(A - 32);
            printf("\n");
        }
    }
}
