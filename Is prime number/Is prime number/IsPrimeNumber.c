#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#include<math.h>

IsPrimeNumber(int num)
{
	if (num > 2)
	{
		int i = 0;
		for (i = 2; i < sqrt(num); ++i)
		{
			if (num % i == 0)
			{
				return 0;
			}
		}
		return 1;
	}
	else if (2 == num)
		return 1;

}

int main()
{
	int num = 0;
	//判断是否为素数，如果为素数返回1，如果不是则返回0
	for (num = 100; num <= 200; ++num)
	{
		int ret = IsPrimeNumber(num);
		if (ret == 1)
			printf("%d ", num);
	}
	printf("\n");
	return 0;
}