#define _CRT_SECURE_NO_WARNINGS 1

#include "szq.h"

void InitBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}
void DisplayBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		if (i < row)//打印分隔行
		{
			for (j = 0; j < row; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("+");
			}
		}
		printf("\n");  //换行
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");//打印棋格之间的间隔
		}
		printf("\n");//换行
	}
	for (j = 0; j < row; j++)
	{
		printf("---");
		if (j < col - 1)
			printf("+");
	}
	printf("\n");
}
void player_move(char board[ROW][COL], int row, int col)
{
	printf("玩家下棋，请输入坐标->\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x >= 1 && y >= 1 && x <= row && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("该坐标已有棋子，请重新上一步操作\n");
			}
		}
		else
		{
			printf("该坐标不存在，请重新上一步操作\n");
		}
	}
}
void computer_move(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋->\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		x = rand() % row;//x属于0到2
		y = rand() % col;//y属于0到2
		if (board[x - 1][y - 1] == ' ')
		{
			board[x - 1][y - 1] = '#';
			break;
		}
	}
}
char IsWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//判断行
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
		{
			return board[i][1];
		}
	}
	//判断列
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
		{
			return board[1][i];
		}
	}
	//判断对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//判断是否平局，若棋盘满了且没有赢家则平局
	if (IsFull(board, ROW, COL))
	{
		return 'E';
	}
	else
		return 'C';
}
int IsFull(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
			{
				return 0;//有空格棋盘没满，继续下
			}
		}
	}
	return 1;//没找到空格返回1，平局
}