#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	char arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	//��Ҫ�ҵ�����
	int k = 0;
	scanf("%d", &k);
	//���±�
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	//���±�
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
			printf("�ҵ���\n");
			break;
		}
	}
	if (flag == 0)
		printf("�Ҳ���\n");
	return 0;
}