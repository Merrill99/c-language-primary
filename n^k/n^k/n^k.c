#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int n_k(int n, int k)
{
	if (0 == k)
		return 1;
	else if (k > 0)
	{
		k -= 1;
		return n * n_k(n, k);
	}

}

int main()
{
	int n = 0;
	int k = 0;
	scanf("%d %d", &n, &k);
	int ret = n_k(n, k);
	printf("%d\n", ret);
	return 0;
}