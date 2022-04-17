#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>  
#include<assert.h>  
#include<Windows.h>
char* my_strcat(char* dest, char* src)
{
    char* cp = dest;
    assert(src && dest);
    while (*dest != '\0')
    {
        dest++;
    }
    while (*dest++ = *src++)
    {
        ;
    }
    return cp;
}
int main()
{
    char str[23] = "hello";
    char buf[23] = "bit";
    printf("%s\n", my_strcat(str, buf));
    system("pause");
    return 0;
}

