#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//�ҵ�����1
//�Ҳ�������0
int FindNum(int arr[3][3], int* row, int* col, int num)
{
	int x = 0;
	int y = *col - 1;
	while ((x <= *row - 1) && (y >= 0))
	{
		//���num�������Ͻǵ�Ԫ�أ���ȥ��һ��
		if (num > arr[x][y])
		{
			x++;
		}
		//���numС�����Ͻǵ�Ԫ�أ���ȥ��һ��
		else if (num < arr[x][y])
		{
			y--;
		}
		else
		{
			*row = x;
			*col = y;
			return 1;
		}
	}
	return 0;
}

int main()
{
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};

	int x = 3;
	int y = 3;

	//Ҫ�ҵ�Ԫ��
	int num = 0;
	scanf("%d", &num);
	//x��y��ַ���ã����Խ��ı���ֵ����
	int ret = FindNum(arr, &x, &y, num);
	if (1 == ret)
	{
		printf("�ҵ���!\n���±���:%d %d\n", x, y);
	}
	else
	{
		printf("�Ҳ���");
	}
	return 0;
}