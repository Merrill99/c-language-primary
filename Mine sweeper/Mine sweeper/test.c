#define _CRT_SECURE_NO_WARNINGS 1

#include"game.h"

void menu()
{
	printf("*****************************\n");
	printf("*********   1.play  *********\n");
	printf("*********   0.exit  *********\n");
	printf("*****************************\n");
}

//��Ϸ�����ʵ��
void game()
{
	//mine������ר�Ŵ�Ų��úõ��׵���Ϣ
	char mine[ROWS][COLS] = { 0 };
	//show������ר�Ŵ���Ų�����׵���Ϣ
	char show[ROWS][COLS] = { 0 };

	//��ʼ������
	Initiboard(mine, ROWS, COLS, '0');//��ʼ��Ϊ'0'
	Initiboard(show, ROWS, COLS, '*');//��ʼ��Ϊ'*'

	//��ӡ����
	//DisplayBoard(mine, ROW, COL);
	DisplayBoard(show, ROW, COL);

	//������
	SetMine(mine, ROW, COL);
	//���ú��ӡ
	//DisplayBoard(mine, ROW, COL);

	//�Ų���
	FindMine(mine, show, ROW, COL);
}

int main()
{
	int choice = 0;
	srand((unsigned int)time(NULL));
	do
	{
		//�˵�
		menu();
		printf("��ѡ��:>");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
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