#define _CRT_SECURE_NO_WARNINGS 1

//
//猜数字游戏
//1. 电脑随机生成一个数字 （1~100）
//2. 玩家猜数字
//	 玩家猜小了，就告知猜小了
//	 玩家猜大了，就告知猜大了
//	 直到猜对为止
//3. 游戏可以一直玩
//

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("********************\n");
	printf("****** 1.play ******\n");
	printf("****** 0.exit ******\n");
	printf("********************\n");
}

//RAND_MAX
//rand 函数返回的随机数的范围是（0~32767）
//猜数字游戏的实现
void game()
{
	int guess = 0;
	//1. 生成一个随机数
	int ret = rand() % 100 + 1;
	//printf("%d\n", ret);
	//2. 猜数字
	
	while (1)
	{
		printf("猜数字：>\n");
		scanf("%d", &guess);
		if (guess < ret)
		{
			printf("猜小了\n");
		}
		else if (guess > ret)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
			break;
		}
	}
}


int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));

	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，重新选择！\n");
			break;
		}
	} while (input);
	return 0;
}