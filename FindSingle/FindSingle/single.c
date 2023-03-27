#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//找出这两个只出现一次的数字
void FindSingle(const int arr[], int sz)
{
	int i = 0;
	int j = 0;
	int flag = 0;
	//遍历
	for (i = 0; i < sz; ++i)
	{
		flag = 0;
		for (j = 0; j < sz ; ++j)
		{
			//跳过自己与自己的比较
			if (i == j)
			{
				continue;
			}
			//如果元素相等，将flag置为1
			if (arr[i] == arr[j])
			{
				flag = 1;
			}
		}
		if (0 == flag)
		{
			printf("%d ", arr[i]);
		}
	}
	printf("\n");
}

int main()
{
	int arr[] = { 1,2,2,3,3,4,4,5,8,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	FindSingle(arr, sz);
	return 0;
}