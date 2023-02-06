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
	//��������
	char board[ROW][COL] = { 0 };
	//��ʼ������
	InitiBoard(board, ROW, COL);
	//��ӡ����
	PrintBoard(board, ROW, COL);

	char ret = 0;

	//��Ϸ����
	while (1)
	{
		//�������-"*"
		PlayerPlay(board, ROW, COL);
		//��ӡ����
		PrintBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = JudgeWin(board, ROW, COL);
		if ('C' != ret)
			break;
		//��������
		ComputerPlay(board, ROW, COL);
		//��ӡ����
		PrintBoard(board, ROW, COL);
		//�ж���Ӯ
		ret = JudgeWin(board, ROW, COL);
		if ('C' != ret)
			break;
	}
	if ('*' == ret)
		printf("��һ�ʤ\n");
	else if ('#' == ret)
		printf("���Ի�ʤ\n");
	else
		printf("ƽ��\n");
}

int main()
{
	int choice = 0;
	srand((unsigned)time(NULL));
	do
	{
		//�˵�
		menu();
		printf("��ѡ��:");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("��Ϸ��ʼ\n");
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (choice);
	return 0;
}