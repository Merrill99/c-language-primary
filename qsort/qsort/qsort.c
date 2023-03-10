#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

#include<stdlib.h>

int cmp_int(const void* p1, const void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}

int cmp_char(const void* p1, const void* p2)
{
	return (*(char*)p1 - *(char*)p2);
}

void print_int(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void print_char(char arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; ++i)
	{
		printf("%c",arr[i]);
	}
	printf("\n");
}

int main()
{
	int arr1[] = { 2,3,1,5,4,6,8,7,9,10 };
	char arr2[] = "love";
	//求数组的长度
	int sz1 = sizeof(arr1) / sizeof(*arr1);
	int sz2 = sizeof(arr2) / sizeof(*arr2);

	//调用qsort
	qsort(arr1, sz1, sizeof(arr1[0]), cmp_int);
	print_int(arr1, sz1);

	qsort(arr2, sz2, sizeof(arr2[0]), cmp_char);
	print_char(arr2, sz2);
	return 0;
}