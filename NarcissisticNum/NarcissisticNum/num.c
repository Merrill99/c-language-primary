#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<math.h>

int main()
{
	int num = 0;
	for (num = 1; num <= 100000; ++num)
	{
		int n = 0;
		//�����ִ�����ʱ������
		int tmp1 = num;
		int tmp2 = num;
		//��¼���ֵ�λ��
		while (tmp1)
		{
			tmp1 /= 10;
			n++;
		}
		int sum = 0;
		//�ж��Ƿ�Ϊˮ�ɻ���
		while (tmp2)
		{
			sum = sum + pow((tmp2 % 10), n);
			tmp2 /= 10;
		}
		if (sum == num)
		{
			printf("%d ", num);
		}
	}
	return 0;
}