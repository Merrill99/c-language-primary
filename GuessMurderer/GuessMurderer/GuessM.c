#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

int main()
{
	//��������
	char killer = '0';
	//����ASCII��ֵ������A-D��ɸѡ������
	for(killer = 'A'; killer <= 'D'; killer++)
	{
		//A˵�������ҡ�
		//B˵����C��
		//C˵����D��
		//D˵��C�ں�˵
		//��������ֻ��һ����˵�˼ٻ�,֤�����ĸ��ж����������ķ���ֵΪ3
		if ((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D') == 3)
		{
			printf("%c������\n", killer);
		}
	}

	return 0;
}