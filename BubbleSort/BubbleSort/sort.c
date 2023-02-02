#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void BubbleSort(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; ++i)
	{
		//Ò»ÌËÃ°ÅÝÅÅÐò
		for (j = 0; j < sz - 1 - i; ++j)
		{
			if (arr[j] > arr[j + 1])
			{
				int tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
		}
	}
}

int main()
{
	int arr[10] = { 3,2,1,4,5,6,9,8,7,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	BubbleSort(arr, sz);
	for (int i = 0; i < sz; ++i)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}