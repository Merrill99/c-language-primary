#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int fac(int n)
{
	int ret = 1;
	for (int i = 1; i <= n; ++i)
	{
		ret = ret * i;
	}
	return ret;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = fac(n);
	printf("%d\n", ret);
	return 0;
}