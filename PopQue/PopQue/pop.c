#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	//һƿ��ˮһԪ
	int pop = 1;
	int money = 0;
	int sum = 0;
	//��¼����ƿ�ӵı���
	int tmp = 0;
	//����������Ǯ��
	scanf("%d", &money);
	//��ƿ������
	int battle = money / pop;
	//ÿ������ƿ��һ��
	while (battle)
	{
		sum += battle;
		battle /= 2;
		//����ʣ��һ����ƿ�����
		if (battle % 2 != 0)
		{
			tmp += battle % 2;
			if (tmp == 2)
			{
				sum++;
				tmp = 0;
			}
		}
	}
	printf("%d\n", sum);
	return 0;
}