#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int n = 0;
	int arr[100][100] = { 0 };
	printf("输入要打印杨辉三角的行数:>");
	scanf("%d", &n);
	//第一行第一个数均为1
	for (i = 0; i < n; ++i)
	{
		arr[i][0] = 1;
	}
	//从第二行起，除了第一行第一个元素，每个元素都等于相应上一行两个元素之和
	//控制行
	for (i = 0; i < n; ++i)
	{
		//控制行里的各个元素，也就是列
		for (j = 1; j < i; ++j)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}

	}
	//打印
	for (i = 0; i < n; ++i)
	{
		//打印三角左边的空格
		for (j = 0; j < n - i - 1; ++j)
		{
			printf(" ");
		}
		for (j = 0; j < i; ++j)
		{
			printf("%-3d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}