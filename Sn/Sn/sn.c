#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

int main()
{
	int a = 0;
	int sum = 0;
	int Sn = 0;
	//����һ����a
	scanf("%d", &a);
	int i = 0;
	for (i = 1; i <= 5; ++i)
	{
		sum = 0;
		//�ֱ�õ�������ǰ����
		for (int j = 0; j < i; ++j)
		{
			sum = sum + a * (pow(10, j));
		}
		Sn += sum;
	}
	printf("%d\n", Sn);
	return 0;
}