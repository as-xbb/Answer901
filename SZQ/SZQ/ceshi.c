#define _CRT_SECURE_NO_WARNINGS 1

#include "szq.h"

void menu()//打印菜单
{
	printf("************************************************\n");
	printf("****************   1.开始游戏   ****************\n");
	printf("****************   0.退出游戏   ****************\n");
	printf("************************************************\n");
}
void game()
{
	//初始化棋盘元素全部为0
	char board[ROW][COL] = { 0 };
	//将棋盘每一个元素变为空格
	InitBoard(board, ROW, COL);
	//打印棋盘
	DisplayBoard(board, ROW, COL);
	char win = 0;
	while (1)
	{
		//玩家开始下棋
		player_move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		win = IsWin(board, ROW, COL);
		if (win != 'C')
			break;
		//电脑开始下棋
		computer_move(board, ROW, COL);
		DisplayBoard(board, ROW, COL);
		win = IsWin(board, ROW, COL);
		if (win != 'C')
			break;
		//判断输赢，返回为*玩家胜，#电脑胜，'C'继续，'E'平局
		//char win = IsWin(board, ROW, COL);
	}
	if (win == '#')
		printf("我的天呐，你竟然连人工智障都不如\n");
	else if (win == '*')
		printf("哇偶，恭喜您获得胜利\n");
	else
		printf("很遗憾，您和电脑五五开\n");
}
void test_game()//测试游戏面板
{
	int input = 0;
	srand((unsigned int)time(NULL));//随机数
	do
	{
		menu();
		printf("亲爱的老司机童靴请输入：>");
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
			printf("输入错误请重新输入\n");
			break;
		}
	} while (input);
}
int main()
{
	test_game();
	return 0;
}