#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#define SwapBit(x) (x = ((x & 0x55555555) << 1) +((x & 0xaaaaaaaa) >> 1))

int main()
{
	int a = 0;
	printf("交换前:");
	scanf("%d", &a);
	SwapBit(a);
	printf("交换后:%d\n", a);
	return 0;
}