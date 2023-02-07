#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void Swap(int* n1, int* n2)
{
	*n1 = *n1 ^ *n2;
	*n2 = *n1 ^ *n2;
	*n1 = *n1 ^ *n2;
}

int main()
{
	int a = 6;
	int b = 8;
	//交换前
	printf("交换前\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	Swap(&a, &b);
	//交换后
	printf("交换后\n");
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	return 0;
}