#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//加密过程
int jm(char* text, char* result, char* k)
{
    int l, i, j = 0, z = 0;
    for (l = 0; text[l] != '\0'; l++);
    for (i = 0; i < l; i++)
    {
        result[z] = (text[i] - 'a' + k[j] - 'a') % 26 + 'a';
        j++;
        z++;
    }
    return 0;
}

//解密过程
int jiemi(char* text, char* result, char* k)
{
    int l, i, j = 0, z = 0;
    for (l = 0; text[l] != '\0'; l++);
    for (i = 0; i < l; i++)
    {
        result[z] = (text[i] - k[j] + 26) % 26 + 'a';
        j++;
        z++;
    }
    return 0;
}

int main()
{
    char text[50] = "";
    char result[50] = "";
    char k[50] = "";
    int type;
    /**欢迎**/
    printf("--------欢迎使用Vigenere密码-----------\n");
    printf("请填写明文或者密文\n");
    scanf("%[^\n]", text);
    printf("请选择加密方式，输入1加密，输入2解密\n");
    scanf("%d", &type);
    printf("请输入密钥k\n");
    scanf("%s", k);
    if (type == 1) {
        /**加密**/
        jm(text, result, k);
        printf("明文%s的密文为:%s\n", text, result);
    }
    else if (type == 2) {
        /**解密**/
        jiemi(text, result, k);
        printf("密文%s的明文为:%s\n", text, result);
    }
    return 0;
}

