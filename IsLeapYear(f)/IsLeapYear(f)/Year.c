#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
int is_leap_year(int year)
{
	return ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
}

int main()
{
	int y = 0;
	
	scanf("%d", &y);
	//判断y是否为闰年
	//如果是闰年返回1
	//不是闰年返回0
	int ret = is_leap_year(y);
	if (ret == 1)
		printf("是闰年");
	else
		printf("不是闰年");
	return 0;
}