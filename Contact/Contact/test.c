#define _CRT_SECURE_NO_WARNINGS 1
#include"contact.h"
void menu()
{
	printf("*********************************\n");
	printf("****** 1.add     2.del     ******\n");
	printf("****** 3.search  4.modify  ******\n");
	printf("****** 5.sort    6.print   ******\n");
	printf("****** 0.exit              ******\n");
}

void test()
{
	int input = 0;
	//创建通讯录 
	Contact con;//通讯录
	//初始化通讯录
	InitContact(&con);

	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
			switch (input)
			{
			case 1:
				AddContact(&con);			
				break;
			case 2:
				DelContact(&con);
				break;
			case 3:
				SearchContact(&con);
				break;
			case 4:		
				break;
			case 5:
				
				break;
			case 6:
				PrintContact(&con);
				break;
			case 7:
				printf("退出通讯录\n");
				break;
			default:
				printf("选择错误\n");
				break;
			}
	} while (input);
}
int main()
{
	test();
	return 0;
}