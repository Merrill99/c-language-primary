#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("*************************\n");
	printf("****1.strat    0.exit****\n");
	printf("*************************\n");

}

void game()
{
	//定义棋盘
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	InitiBoard(board, ROW, COL);
	//打印棋盘
	PrintBoard(board, ROW, COL);

	char ret = 0;

	//游戏过程
	while (1)
	{
		//玩家下棋-"*"
		PlayerPlay(board, ROW, COL);
		//打印棋盘
		PrintBoard(board, ROW, COL);
		//判断输赢
		ret = JudgeWin(board, ROW, COL);
		if ('C' != ret)
			break;
		//电脑下棋
		ComputerPlay(board, ROW, COL);
		//打印棋盘
		PrintBoard(board, ROW, COL);
		//判断输赢
		ret = JudgeWin(board, ROW, COL);
		if ('C' != ret)
			break;
	}
	if ('*' == ret)
		printf("玩家获胜\n");
	else if ('#' == ret)
		printf("电脑获胜\n");
	else
		printf("平局\n");
}

int main()
{
	int choice = 0;
	srand((unsigned)time(NULL));
	do
	{
		//菜单
		menu();
		printf("请选择:");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("游戏开始\n");
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (choice);
	return 0;
}