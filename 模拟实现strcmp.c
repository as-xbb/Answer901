#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

int my_strcmp(const char* str1, const char* str2)
{
    assert(str1 != NULL);
    assert(str2 != NULL);
    while ((*str1 == *str2) && (*str1 != '\0'))
    {
        str1++;
        str2++;
    }
    return *str1 - *str2;
}
int main()
{
    char* str1 = "hello bits";
    char* str2 = "hello bit";
    int ret = 0;
    ret = my_strcmp(str1, str2);
    printf("%d\n", ret);
    system("pause");
    return 0;
}