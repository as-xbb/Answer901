#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//
//	/*if (age >= 18)
//		printf("����\n");*/
//
//	//if(age>=18)
//	//	printf("����\n");
//	//else
//	//	printf("δ����\n");
//
//	if (age < 18)
//	{
//		printf("������\n");
//		printf("�ú�ѧϰ\n");
//	}
//	else if (age >= 18 && age < 30)
//	{
//		printf("����\n");
//	}
//	else if (age >= 30 && age < 50)
//	{
//		printf("����\n");
//	}
//	else if (age >= 50 && age < 80)
//	{
//		printf("������\n");
//	}
//	else if (age >= 80 && age < 100)
//	{
//		printf("����\n");
//	}
//	else
//	{
//		printf("������\n");
//	}
//
//	return 0;
//}

//#include <stdio.h>
//int main()
//{
//    int a = 0;
//    int b = 2;
//    if (a == 1)
//    {
//        if (b == 2)
//            printf("hehe\n");
//        else
//            printf("haha\n");
//    }
//    return 0;
//}

//int test()
//{
//	int a = 2;
//
//	if (2)
//		return 1;
//	return 0;
//}
//int main()
//{
//	int ret = test();
//	printf("ret=%d\n", ret);
//
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	//%2==1
//	if (n % 2 == 1)
//	{
//		printf("����\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	//��ӡ1~100֮�������
//	int i = 1;
//	while (i <= 100)
//	{
//		//��i�����жϣ��������Ŵ�ӡ
//		if (i % 2 == 1)
//	
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//	//if (1 == day)
//	//	printf("����1\n");
//	//else if (2 == day)
//	//	printf("����2\n");
//	//else if (3== day)
//	//	printf("����3n");
//	//��
//	return 0;
//}

#include <stdio.h>
//int main()
//{
//    int n = 1;
//    int m = 2;
//    switch (n)
//    {
//    case 1:
//        m++;
//    case 2:
//        n++;
//    case 3:
//        switch (n)
//        {//switch����Ƕ��ʹ��
//        case 1:
//            n++;
//        case 2:
//            m++;
//            n++;
//            break;
//        }
//    case 4:
//        m++;
//        break;
//    default:
//        break;
//    }
//    printf("m = %d, n = %d\n", m, n);
//    return 0;
//}

//int main()
//{
//	/*while (1)
//		printf("haha\n");*/
//
//	//1~10
//	int i = 1;
//	while (i<=10)
//	{
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//
//	return 0;
//}

////EOF - end of file
//int main()
//{
//	char password[20] = { 0 };
//	printf("����������:>");
//	scanf("%s", password);//123456
//
//	//����1
//	//getchar();����\n
//
//	//����2
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//	printf("����������(Y\N):>");
//	int ch = getchar();
//	if ('Y' == ch)
//		printf("ȷ�ϳɹ�\n");
//	else
//		printf("ȷ��ʧ��\n");
//
//	//while ((ch = getchar()) != EOF);
//	//{
//	//	getchar(ch);
//	//}
//
//	//while (scanf("%d", &ch) != EOF)
//	//{
//	//	printf("%d", ch);
//	//}
//
//	//return 0;
//}

int main()
{
	int i = 0;
	for (i = 1; i <= 10; i++)
	{
		printf("%d ", i);
	}
	return 0;
}