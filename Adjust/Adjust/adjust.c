#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void Adjust(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; ++i)
	{
		//�ƶ�ż��
		for (j = 0; j < sz - i - 1; ++j)
		{
			if (arr[j] % 2 == 0)
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
	int arr[10] = { 0 };
	int i = 0;
	//����һ������
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; ++i)
	{
		scanf("%d", &arr[i]);
	}
	Adjust(arr, sz);
	for (i = 0; i < sz; ++i)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}