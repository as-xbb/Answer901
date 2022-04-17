#define _CRT_SECURE_NO_WARNINGS 1
#include<stdlib.h>
#include<string.h>
#include<stdio.h>
//加密过程
int kaisa_encrypt(char* text, char* result, int k)
{
    char small_letter[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
    char big_letter[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
    //判断是否符合
    if (text == NULL || k <= 0) {
        return -1;
    }
    int m = strlen(text); //获取明文的长度
    if (m <= 0) {
        return -1;
    }
    for (int i = 0; i < m; i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            result[i] = big_letter[((text[i] - 'A') + k) % 26];
        }
        else if (text[i] >= 'a' && text[i] <= 'z') {
            result[i] = small_letter[((text[i] - 'a') + k) % 26];
        }
        else result[i] = text[i];
    }
    return 0;
}
//解密过程
int kaisa_decrypt(char* text, char* result, int k)
{
    int p;
    char small_letter[26] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };
    char big_letter[26] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };
    if (text == NULL || k <= 0) {
        return -1;
    }
    int m = strlen(text);
    if (m <= 0) {
        return -1;
    }
    for (int i = 0; i < m; i++) {
        if (text[i] >= 'A' && text[i] <= 'Z') {
            p = ((text[i] - 'A') - k);
            while (p < 0)p += 26;
            result[i] = big_letter[p];
        }
        else if (text[i] >= 'a' && text[i] <= 'z') {
            p = ((text[i] - 'a') - k);
            while (p < 0)p += 26;
            result[i] = small_letter[p];
        }
        else result[i] = text[i];
    }
    return 0;
}

int main()
{
    char text[50] = "";
    char result[50] = "";
    int k;
    int type;
   //主页
    printf("--------欢迎使用凯撒密码-----------\n");
    printf("请填写明文或者密文\n");
    scanf("%[^\n]", text);
    printf("请选择加密方式，输入1加密，输入2解密\n");
    scanf("%d", &type);
    printf("请输入密钥k\n");
    scanf("%d", &k);
    if (type == 1) {
       //加密操作
        kaisa_encrypt(text, result, k);
        printf("明文%s的密文为:%s\n", text, result);
    }
    else if (type == 2) {
        //解密操作
        kaisa_decrypt(text, result, k);
        printf("密文%s的明文为:%s\n", text, result);
    }
    return 0;
}


