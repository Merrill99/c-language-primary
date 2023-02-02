#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int Strlen(char* arr)
{
	static int count = 0;
	if (*arr++)
	{
		count++;
		1 + Strlen(arr);
	}
	return count;
}

int main()
{
	char arr[] = "qwerty";
	int len = Strlen(arr);
	printf("%d\n", len);
	return 0;
}