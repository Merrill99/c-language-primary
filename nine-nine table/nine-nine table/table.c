#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int row = 0;
	int column = 0;
	//生成九行
	for (row = 1; row <= 9; ++row)
	{
		//生成九列
		for (column = 1; column <= row; ++column)
		{
			printf("%d*%d=%-2d ", row, column, row * column);
		}
		printf("\n");
	}
	return 0;
}