#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int fib(int n)
{
	if (n < 2)
		return 1;
	else if (n > 2)
		return fib(n - 2) + fib(n - 1);
}

int main()
{
	int n = 0;
	//输入第n个斐波那契数列
	scanf("%d", &n);
	int ret = fib(n);
	printf("%d", ret);
	return 0;
}