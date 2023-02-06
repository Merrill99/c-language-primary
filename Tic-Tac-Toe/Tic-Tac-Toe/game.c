#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void InitiBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; ++i)
	{
		for (j = 0; j < col; ++j)
		{
			board[i][j] = ' ';
		}
	}
}

void PrintBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < row; ++i)
	{
		for (j = 0; j < col; ++j)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		for (j = 0; j < col; ++j)
		{
			if (i < row - 1)
				printf("---");
			if (i < row -1 && j < col - 1)
				printf("|");
		}
		printf("\n");
	}
}

//玩家下棋-"*"
void PlayerPlay(char board[ROW][COL], int row, int col)
{
	printf("玩家下棋\n请输入坐标:");
	int n1 = 0;
	int n2 = 0;
	while (1)
	{
		scanf("%d %d", &n1, &n2);
		if (n1 >= 1 && n1 <= row && n2 >= 1 && n2 <= col)
		{
			if (board[n1 - 1][n2 - 1] == ' ')
			{
				board[n1 - 1][n2 - 1] = '*';
				break;
			}
			else
				printf("坐标占用，请重新输入:");
		}
		else
			printf("坐标输入错误，请重新输入:");
	}
}

//判断棋盘是否下满
int IsFull(char board[ROW][COL], int row, int col)
{
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
		{
			if (board[i][j] == ' ')
			{
				return 0;
			}
		}
	}
	return 1;
}

//判断输赢
//玩家赢，返回-'*'
//电脑赢，返回-'#'
//平局，返回-'Q'
//继续，返回-'C'
char JudgeWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//判断行是否连成三个
	for (i = 0; i < row; ++i)
	{
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	//判断列是否连成三个
	for (j = 0; j < col; ++j)
	{
		if (board[0][j] == board[1][j] && board[0][j] == board[2][j] && board[0][j] != ' ')
		{
			return board[0][j];
		}
	}
	//判断对角线是否连成三个
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[0][2] == board[3][1] && board[0][2] != ' ')
	{
		return board[0][2];
	}
	//如果棋盘下满还未分出结果，则平局
	if (IsFull(board, ROW, COL))
	{
		return 'Q';
	}
	//游戏继续
	return 'C';
}

//电脑下棋
void ComputerPlay(char board[ROW][COL], int row, int col)
{
	printf("电脑下棋\n");
	while (1)
	{
		int x = rand() % 3;
		int y = rand() % 3;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
} 