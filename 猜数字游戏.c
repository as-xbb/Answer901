#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	int input = 0;
	printf("*****欢迎来到猜数字游戏*****\n");
	printf("********1：进入游戏*********\n");
	printf("********0：退出游戏*********\n");
	printf("****************************\n");
}
void game()
{
	
	int random_num = rand() % 100 + 1;
	while (1)
	{
		int guess = 0;
		printf("请输入猜测的数字：");
		scanf("%d", &guess);
		if (guess < random_num)
			printf("猜小了\n");
		else if (guess > random_num)
			printf("猜大了\n");
		else
		{
			printf("恭喜你,猜对了\n");
			break;
		}
	}
}
int main()
{
	srand((unsigned)time(NULL));

	int input = 0;
	do
	{
		menu();
		printf("请输入你的选择：");
		scanf("%d", &input);
		if (input == 1)
		{
			game();
		}
		else if (input == 0)
		{
			printf("游戏已经退出");
			break;
		}
		else
		{
			printf("您输入的是无效指令，请重新输入\n");
		}

	} while (input != 0);
	return 0;
}