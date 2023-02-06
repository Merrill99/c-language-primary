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

//�������-"*"
void PlayerPlay(char board[ROW][COL], int row, int col)
{
	printf("�������\n����������:");
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
				printf("����ռ�ã�����������:");
		}
		else
			printf("���������������������:");
	}
}

//�ж������Ƿ�����
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

//�ж���Ӯ
//���Ӯ������-'*'
//����Ӯ������-'#'
//ƽ�֣�����-'Q'
//����������-'C'
char JudgeWin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//�ж����Ƿ���������
	for (i = 0; i < row; ++i)
	{
		if (board[i][0] == board[i][1] && board[i][0] == board[i][2] && board[i][0] != ' ')
		{
			return board[i][0];
		}
	}
	//�ж����Ƿ���������
	for (j = 0; j < col; ++j)
	{
		if (board[0][j] == board[1][j] && board[0][j] == board[2][j] && board[0][j] != ' ')
		{
			return board[0][j];
		}
	}
	//�ж϶Խ����Ƿ���������
	if (board[0][0] == board[1][1] && board[0][0] == board[2][2] && board[0][0] != ' ')
	{
		return board[0][0];
	}
	if (board[0][2] == board[1][1] && board[0][2] == board[3][1] && board[0][2] != ' ')
	{
		return board[0][2];
	}
	//�������������δ�ֳ��������ƽ��
	if (IsFull(board, ROW, COL))
	{
		return 'Q';
	}
	//��Ϸ����
	return 'C';
}

//��������
void ComputerPlay(char board[ROW][COL], int row, int col)
{
	printf("��������\n");
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