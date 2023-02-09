#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

//初始化棋盘
void Initiboard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; ++i)
	{
		for (j = 0; j < cols; ++j)
		{
			board[i][j] = set;
		}
	}
}

//打印棋盘
void DisplayBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	printf("------扫雷------\n");
	for (i = 1; i <= row; ++i)
	{
		for (j = 1; j <= col; ++j)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}

//布置雷
void SetMine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}
	}
}

//获取周边雷的数量
int GetMineNum(char mine[ROWS][COLS], int x, int y)
{
	return (mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y - 1] +
		mine[x][y + 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] - 8 * '0');
		   
}

//排查雷
void FindMine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win < row * col - EASY_COUNT)
	{
		printf("请输入要排查雷的坐标:>");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (show[x][y] == '*')
			{
				if (mine[x][y] == '1')
				{
					printf("很遗憾，你被炸死了，游戏结束！\n");
					//打印雷所在位置
					DisplayBoard(mine, ROW, COL);
					break;
				}
				if (mine[x][y] == '0')
				{
					//统计周围雷的个数
					int ret = GetMineNum(mine, x, y);
					show[x][y] = ret + '0';
					DisplayBoard(show, ROW, COL);
					win++;
				}
			}
			else
			{
				printf("坐标已经被排查，请重新输入\n");
			}
		}
		else
		{
			printf("坐标非法，请重新输入\n");
		}
	}
	if (win == row * col - EASY_COUNT)
	{
		printf("恭喜您，排雷成功！\n");
		DisplayBoard(mine, ROW, COL);
	}
}