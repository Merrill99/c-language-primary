#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int max = 0;
	//����ʮ����
	for (i = 0; i < 10; ++i)
	{
		scanf("%d", &arr[i]);
	}
	//�����һ�������
	max = arr[0];
	for (i = 0; i < 10; ++i)
	{
		//�������飬������max��������͸�ֵ��max
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);
	return 0;
}