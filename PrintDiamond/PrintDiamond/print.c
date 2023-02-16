#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int n = 0;
	//输入一个数(奇数)，打印n行的菱形
	printf("请输入一个奇数:>");
	scanf("%d", &n);
	int m = n / 2 + 1;
	
	for (i = 1; i <= n; ++i)
	{
		//打印上半部分
		if (i <= m)
		{
			//打印空格
			for (j = 0; j < m - i; ++j)
			{
				printf(" ");
			}
			//打印*(类似等比数列)
			for (j = 0; j < 2 * i - 1; ++j)
			{
				printf("*");
			}
			printf("\n");
		}
		//打印下半部分
		else
		{
			//打印空格
			for (j = 0; j < i - m; ++j)
			{
				printf(" ");
			}
			//打印*,减去两边的空格
			for (j = 0; j < n - 2 * (i - m); ++j)
			{
				printf("*");
			}
			printf("\n");
		}

	}
	return 0;
}