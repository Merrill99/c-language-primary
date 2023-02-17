#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	//一瓶汽水一元
	int pop = 1;
	int money = 0;
	int sum = 0;
	//记录多余瓶子的变量
	int tmp = 0;
	//输入所花的钱数
	scanf("%d", &money);
	//空瓶的数量
	int battle = money / pop;
	//每两个空瓶换一个
	while (battle)
	{
		sum += battle;
		battle /= 2;
		//处理剩下一个空瓶的情况
		if (battle % 2 != 0)
		{
			tmp += battle % 2;
			if (tmp == 2)
			{
				sum++;
				tmp = 0;
			}
		}
	}
	printf("%d\n", sum);
	return 0;
}