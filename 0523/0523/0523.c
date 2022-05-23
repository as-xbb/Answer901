#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    char str[1000] = { 0 }, ch, count = 0;/*数组保存字符串，ch是第二次输入的字符，count统计个数*/
    scanf("%[^\n]\n", &str);//读入输入字符，遇到回车停止读入
    scanf("%c\n", &ch);//输入要统计数量的字符
    for (int i = 0; i < strlen(str); i++)//遍历数组
    {
        if ((ch >= '0' && ch <= '9') && (ch == str[i]))//若是数字
        {
            count++;
        }//若不是数字
        else if (((ch == str[i]) || (ch == (str[i] + 32)) || (ch == (str[i] - 32))) && !(ch >= '0' && ch <= '9'))
        {
            count++;//字符个数加一
        }
    }
    printf("%d", count);
    return 0;
}
