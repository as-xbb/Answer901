#define _CRT_SECURE_NO_WARNINGS 1

////编写代码，演示多个字符从两端移动，向中间汇聚。
////welcome to bit!!!!!!
////####################
////w##################!
////We################!!
////wel##############!!!
////…
////welcome to bit!!!!!!
////
//#include<stdio.h>
//#include<string.h>
//#include<windows.h>
//#include<stdlib.h>
//
//int main()
//{
//	//sizeof(arr1)/sizeof(arr1[0]-2);//4
//	//char arr[] = "abc";
//	// strlen
//	//[a b c \0]
//	//
//	char arr1[] = "welcome to bit!!!!!!";
//	char arr2[] = "####################";
//	
//	int left = 0;
//	//int right= sizeof(arr1) / sizeof(arr1[0] - 2);
//	int right = strlen(arr1) - 1;
//
//	while (left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//单位是毫秒
//		system("cls");
//		left++;
//		right--;
//	}
//	printf("%s\n", arr2);
//
//	return 0;
//}

////两个字符串的比较是不能使用==
////应该使用strcmp
//
//#include<stdio.h>
//#include<string.h>
//
//int main()
//{
//	int i = 0;
//	char password[20] = { 0 };
//	//假设正确的密码是"abcdef"
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：>");
//		scanf("%S", password);
//		if (strcmp(password, "abcdef")==0)
//		{
//			printf("密码正确\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误，重新输入\n");
//		}
//
//	}
//	//1,2
//	if (i == 3)
//	{
//		printf("三次密码均输入错误，退出程序\n");
//	}
//	return 0;
//}

