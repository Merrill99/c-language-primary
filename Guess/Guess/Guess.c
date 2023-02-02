#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void menu()
{
	printf("-----------------------------\n");
	printf("------1.begin---0.exit-------\n");
	printf("-----------------------------\n");
}

void game()
{
	//生成一个1-100的随机数
	int ret = rand() % 100 + 1;
	int input = 0;
	while (1)
	{
		printf("please guess the number:>");
		scanf("%d", &input);
		if (input > ret)
		{
			printf("The secret number is higher.\n");
		}
		if (input < ret)
		{
			printf("The secret number is lower.\n");
		}
		if (input == ret)
		{
			printf("The secret number is right.\n");
			printf("Congratulations!\n");
			break;
		}
	}
}

int main()
{
	int choice = 0;
	srand((unsigned int)time(NULL));
	do 
	{
		//打印菜单
		menu();
		printf("please choose:>");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("error,please choose once again:>");
			break;
		}
	} while (choice);
	return 0;
}