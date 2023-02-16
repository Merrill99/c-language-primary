#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

int main()
{
	int a = 0;
	int sum = 0;
	int Sn = 0;
	//输入一个数a
	scanf("%d", &a);
	int i = 0;
	for (i = 1; i <= 5; ++i)
	{
		sum = 0;
		//分别得到该数的前五项
		for (int j = 0; j < i; ++j)
		{
			sum = sum + a * (pow(10, j));
		}
		Sn += sum;
	}
	printf("%d\n", Sn);
	return 0;
}