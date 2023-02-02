#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//所要找的数字
	int k = 0;
	scanf("%d", &k);
	//左下标
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//右下标
	int right = sz - 1;
	int flag = 0;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (k < arr[mid])
		{
			right = mid - 1;
		}
		else if (k > arr[mid])
		{
			left = mid + 1;
		}
		else
		{
			flag = 1;
			printf("找到了\n");
			break;
		}
	}
	if (flag == 0)
		printf("找不到\n");
	return 0;
}