#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int DigitSum(int num)
{
	static int sum = 0;
	if (num > 9)
	{
		DigitSum(num / 10);
	}
	sum = sum + num % 10;
	return sum;
}

int main()
{
	int num = 0;
	scanf("%d", &num);
	int ret = DigitSum(num);
	printf("%d\n", ret);
	return 0;
}