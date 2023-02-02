#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void Swap(char source[], char dest[], int n)
{
	for (int i = 0; i < n; ++i)
	{
		char tmp = source[i];
		source[i] = dest[i];
		dest[i] = tmp;
	}
}

int main()
{
	char arr1[5] = "abcd";
	char arr2[5] = "efgk";
	Swap(arr1, arr2, 5);
	printf("%s\n", arr1);
	printf("%s\n", arr2);
	return 0;
}