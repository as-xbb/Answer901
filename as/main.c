#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main(void){
    char str[1000]="\0";
    char inputChar='\0';
    char* pSrch=str;
    int count=0;
    scanf("%[a-zA-Z0-9]",str);
    scanf(" %c",&inputChar);//这一这里%c前面有个空格，可以去除前导空白，否则你得不到这个输入
                             //核心就是这个while
    while(*pSrch != '\0'){
        if(tolower(*pSrch)==tolower(inputChar)){
            count++;
        }
        pSrch++;
    }
    printf("%i",count);
    return 0;
}