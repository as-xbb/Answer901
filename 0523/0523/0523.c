#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    char str[1000] = { 0 }, ch, count = 0;/*���鱣���ַ�����ch�ǵڶ���������ַ���countͳ�Ƹ���*/
    scanf("%[^\n]\n", &str);//���������ַ��������س�ֹͣ����
    scanf("%c\n", &ch);//����Ҫͳ���������ַ�
    for (int i = 0; i < strlen(str); i++)//��������
    {
        if ((ch >= '0' && ch <= '9') && (ch == str[i]))//��������
        {
            count++;
        }//����������
        else if (((ch == str[i]) || (ch == (str[i] + 32)) || (ch == (str[i] - 32))) && !(ch >= '0' && ch <= '9'))
        {
            count++;//�ַ�������һ
        }
    }
    printf("%d", count);
    return 0;
}
