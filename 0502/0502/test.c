#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>

//int main()
//{
//	int age = 0;
//	scanf("%d", &age);
//
//	/*if (age >= 18)
//		printf("成年\n");*/
//
//	//if(age>=18)
//	//	printf("成年\n");
//	//else
//	//	printf("未成年\n");
//
//	if (age < 18)
//	{
//		printf("青少年\n");
//		printf("好好学习\n");
//	}
//	else if (age >= 18 && age < 30)
//	{
//		printf("青年\n");
//	}
//	else if (age >= 30 && age < 50)
//	{
//		printf("中年\n");
//	}
//	else if (age >= 50 && age < 80)
//	{
//		printf("中老年\n");
//	}
//	else if (age >= 80 && age < 100)
//	{
//		printf("老年\n");
//	}
//	else
//	{
//		printf("老寿星\n");
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
//		printf("奇数\n");
//	}
//
//	return 0;
//}

//int main()
//{
//	//打印1~100之间的奇数
//	int i = 1;
//	while (i <= 100)
//	{
//		//对i进行判断，是奇数才打印
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
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default:
//		printf("输入错误\n");
//		break;
//	}
//	//if (1 == day)
//	//	printf("星期1\n");
//	//else if (2 == day)
//	//	printf("星期2\n");
//	//else if (3== day)
//	//	printf("星期3n");
//	//…
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
//        {//switch允许嵌套使用
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
//	printf("请输入密码:>");
//	scanf("%s", password);//123456
//
//	//方法1
//	//getchar();处理\n
//
//	//方法2
//	int tmp = 0;
//	while ((tmp = getchar()) != '\n')
//	{
//		;
//	}
//	printf("请输入密码(Y\N):>");
//	int ch = getchar();
//	if ('Y' == ch)
//		printf("确认成功\n");
//	else
//		printf("确认失败\n");
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