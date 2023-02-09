#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("*****************************\n");
	printf("*********   1.play  *********\n");
	printf("*********   0.exit  *********\n");
	printf("*****************************\n");
}

//游戏主体的实现
void game()
{
	//mine数组是专门存放布置好的雷的信息
	char mine[ROWS][COLS] = { 0 };
	//show数组是专门存放排查出的雷的信息
	char show[ROWS][COLS] = { 0 };

	//初始化棋盘
	Initiboard(mine, ROWS, COLS, '0');//初始化为'0'
	Initiboard(show, ROWS, COLS, '*');//初始化为'*'

	//打印棋盘
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//布置雷
	SetMine(mine, ROW, COL);
	//布置后打印
	//DisplayBoard(mine, ROW, COL);

	//排查雷
	FindMine(mine, show, ROW, COL);
}

int main()
{
	int choice = 0;
	srand((unsigned int)time(NULL));
	do
	{
		//菜单
		menu();
		printf("请选择:>");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
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