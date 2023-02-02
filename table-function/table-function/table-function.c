#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int n)
{
	int row = 0;
	int colum = 0;
	//生成行
	for (row = 1; row <= n; ++row)
	{
		//生成列
		for (colum = 1; colum <= row; ++colum)
		{
			printf("%d*%-2d=%-3d ", colum, row, row * colum);
		}
		//换行
		printf("\n");
	}

}

int main()
{
	int n = 0;
	//输入n行n列
	scanf("%d", &n);
	//打印n行n列的乘法表
	print(n);
	return 0;
}