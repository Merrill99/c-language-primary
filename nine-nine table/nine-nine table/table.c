#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int row = 0;
	int column = 0;
	//���ɾ���
	for (row = 1; row <= 9; ++row)
	{
		//���ɾ���
		for (column = 1; column <= row; ++column)
		{
			printf("%d*%d=%-2d ", row, column, row * column);
		}
		printf("\n");
	}
	return 0;
}