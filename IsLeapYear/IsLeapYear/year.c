#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int is_leap_year(int year)
{
	return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
}

int main()
{
	int y = 0;
	for (y = 1000; y <= 2000; y++)
	{
		//判断y是否为闰年
		//如果是闰年返回1
		//不是闰年返回0
		if (is_leap_year(y) == 1)
		{
			printf("%d ", y);
		}
	}
	return 0;
}