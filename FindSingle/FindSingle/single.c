#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//�ҳ�������ֻ����һ�ε�����
void FindSingle(const int arr[], int sz)
{
	int i = 0;
	int j = 0;
	int flag = 0;
	//����
	for (i = 0; i < sz; ++i)
	{
		flag = 0;
		for (j = 0; j < sz ; ++j)
		{
			//�����Լ����Լ��ıȽ�
			if (i == j)
			{
				continue;
			}
			//���Ԫ����ȣ���flag��Ϊ1
			if (arr[i] == arr[j])
			{
				flag = 1;
			}
		}
		if (0 == flag)
		{
			printf("%d ", arr[i]);
		}
	}
	printf("\n");
}

int main()
{
	int arr[] = { 1,2,2,3,3,4,4,5,8,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	FindSingle(arr, sz);
	return 0;
}