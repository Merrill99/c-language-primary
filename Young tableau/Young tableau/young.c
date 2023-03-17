#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//找到返回1
//找不到返回0
int FindNum(int arr[3][3], int* row, int* col, int num)
{
	int x = 0;
	int y = *col - 1;
	while ((x <= *row - 1) && (y >= 0))
	{
		//如果num大于右上角的元素，则去掉一行
		if (num > arr[x][y])
		{
			x++;
		}
		//如果num小于右上角的元素，则去掉一列
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

	//要找的元素
	int num = 0;
	scanf("%d", &num);
	//x、y传址调用，可以将改变后的值带回
	int ret = FindNum(arr, &x, &y, num);
	if (1 == ret)
	{
		printf("找到了!\n其下标是:%d %d\n", x, y);
	}
	else
	{
		printf("找不到");
	}
	return 0;
}