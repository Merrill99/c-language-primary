#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int Strlen(char* str)
{
	int count = 0;
	while (*str++)
	{
		count++;
	}
	return count;
}

int main()
{
	char arr[] = "abcdef";
	int len = Strlen(arr);
	printf("%d\n", len);
	return 0;
}