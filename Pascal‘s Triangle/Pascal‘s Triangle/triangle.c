#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int n = 0;
	int arr[100][100] = { 0 };
	printf("����Ҫ��ӡ������ǵ�����:>");
	scanf("%d", &n);
	//��һ�е�һ������Ϊ1
	for (i = 0; i < n; ++i)
	{
		arr[i][0] = 1;
	}
	//�ӵڶ����𣬳��˵�һ�е�һ��Ԫ�أ�ÿ��Ԫ�ض�������Ӧ��һ������Ԫ��֮��
	//������
	for (i = 0; i < n; ++i)
	{
		//��������ĸ���Ԫ�أ�Ҳ������
		for (j = 1; j < i; ++j)
		{
			arr[i][j] = arr[i - 1][j - 1] + arr[i - 1][j];
		}

	}
	//��ӡ
	for (i = 0; i < n; ++i)
	{
		//��ӡ������ߵĿո�
		for (j = 0; j < n - i - 1; ++j)
		{
			printf(" ");
		}
		for (j = 0; j < i; ++j)
		{
			printf("%-3d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}