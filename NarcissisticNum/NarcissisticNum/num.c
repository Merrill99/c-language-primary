#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

int main()
{
	int num = 0;
	for (num = 1; num <= 100000; ++num)
	{
		int n = 0;
		//就数字存在临时变量中
		int tmp1 = num;
		int tmp2 = num;
		//记录数字的位数
		while (tmp1)
		{
			tmp1 /= 10;
			n++;
		}
		int sum = 0;
		//判断是否为水仙花数
		while (tmp2)
		{
			sum = sum + pow((tmp2 % 10), n);
			tmp2 /= 10;
		}
		if (sum == num)
		{
			printf("%d ", num);
		}
	}
	return 0;
}