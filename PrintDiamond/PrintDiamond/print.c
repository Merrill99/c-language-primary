#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int n = 0;
	//����һ����(����)����ӡn�е�����
	printf("������һ������:>");
	scanf("%d", &n);
	int m = n / 2 + 1;
	
	for (i = 1; i <= n; ++i)
	{
		//��ӡ�ϰ벿��
		if (i <= m)
		{
			//��ӡ�ո�
			for (j = 0; j < m - i; ++j)
			{
				printf(" ");
			}
			//��ӡ*(���Ƶȱ�����)
			for (j = 0; j < 2 * i - 1; ++j)
			{
				printf("*");
			}
			printf("\n");
		}
		//��ӡ�°벿��
		else
		{
			//��ӡ�ո�
			for (j = 0; j < i - m; ++j)
			{
				printf(" ");
			}
			//��ӡ*,��ȥ���ߵĿո�
			for (j = 0; j < n - 2 * (i - m); ++j)
			{
				printf("*");
			}
			printf("\n");
		}

	}
	return 0;
}