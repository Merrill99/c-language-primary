#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

//通讯录目录
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
	//初始化通讯录
	InitiContact(&con);
	do
	{
		//打印菜单
		menu();
		printf("请选择:>");
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
			printf("退出通讯录！");
			break;
		default:
			printf("选择错误！");
			break;
		}
	} while (input);

	return 0;
}