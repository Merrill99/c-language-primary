#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//ͨѶ¼Ŀ¼
void menu()
{
	printf("****  1.Add.       2.Delet.  ****\n");
	printf("****  3.Search.    4.Modify. ****\n");
	printf("****  5.Show.      6.Sort.   ****\n");
	printf("****         0.Exit.         ****\n");
}

int main()
{
	int input = 0;
	contact con;
	//��ʼ��ͨѶ¼
	//��������Ϣ��ͨѶ¼��ȥ
	InitiContact(&con);
	do
	{
		//��ӡ�˵�
		menu();
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case ADD:
			AddContact(&con);
			break;
		case DELET:
			DeletContact(&con);
			break;
		case SEARCH:
			SearchByName(&con);
			break;
		case MODIFY:
			ModifyContact(&con);
			break;
		case SHOW:
			ShowContact(&con);
			break;
		case SORT:
			SortContact(&con);
			break;
		case EXIT:
			//����ͨѶ¼
			SaveContact(&con);
			//�ͷ��ڴ�
			DestroyContact(&con);
			printf("�˳�ͨѶ¼��\n");
			break;
		default:
			printf("ѡ�����\n");
			break;
		}
	} while (input);

	return 0;
}