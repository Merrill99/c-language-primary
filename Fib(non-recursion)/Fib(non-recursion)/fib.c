#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int fib(int n)
{
	if (n <= 2)
		return 1;
	else if (n > 2)
	{
		int next1 = 1;
		int next2 = 1;
		int ret = 0;
		for (int i = 0; i < n - 2; ++i)
		{
			ret = next1 + next2;
			next2 = next1;
			next1 = ret;
		}
		return ret;
	}

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