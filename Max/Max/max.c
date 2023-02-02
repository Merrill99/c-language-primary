#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int max = 0;
	//输入十个数
	for (i = 0; i < 10; ++i)
	{
		scanf("%d", &arr[i]);
	}
	//假设第一个数最大
	max = arr[0];
	for (i = 0; i < 10; ++i)
	{
		//遍历数组，遇见比max大的数，就赋值给max
		if (max < arr[i])
		{
			max = arr[i];
		}
	}
	printf("%d\n", max);
	return 0;
}