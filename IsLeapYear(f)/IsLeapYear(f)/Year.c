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
	//�ж�y�Ƿ�Ϊ����
	//��������귵��1
	//�������귵��0
	int ret = is_leap_year(y);
	if (ret == 1)
		printf("������");
	else
		printf("��������");
	return 0;
}