#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

void inti(int str[], int sz)
{
	for (int i = 0; i < sz; ++i)
	{
		str[i] = 0;
	}
}

void print(int str[], int sz)
{
	for (int i = 0; i < sz; ++i)
	{
		printf("%d ", str[i]);
	}
	//����
	printf("\n");
}

void reverse(int arr[], int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz - 1; ++i)
	{
		//һ��ð������
		for (j = 0; j < sz - 1 - i; ++j)
		{
			if (arr[j] < arr[j + 1])
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
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);

	//��ӡ����
	print(arr, sz);

	//��������
	reverse(arr, sz);

	//������ӡ
	print(arr, sz);

	//��ʼ������
	inti(arr, sz);

	//��ӡ����
	print(arr, sz);

	return 0;
}