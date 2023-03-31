#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>

int Atoi(const char* str)
{
	//��¼str����ʼλ��
	char* tmp = (char*)str;
	//��¼���ֵ�λ��
	int count = 0;
	//��¼���ս��
	int ret = 0;
	while (*tmp != '\0')
	{
		if (*tmp >= 48 && *tmp <= 57)
		{
			count++;
			tmp++;
		}
		else
			break;
	}
	tmp = (char*)str;
	//���ٿռ䣬���������ַ���
	int* arr =(int*)malloc(count * sizeof(int));
	//�ж�������ٿռ�ʧ�ܵ����
	if (arr == NULL)
	{
		printf("%s\n", strerror(errno));
		return 1;
	}
	int i = 0;
	while (*tmp != '\0')
	{
		if (*tmp >= 48 && *tmp <= 57)
		{
			*(arr + i) = *tmp - 48;
			i++;
			tmp++;
		}
		else
			break;
		
	}
	//����arr
	for (i = 0; i < count; ++i)
	{
		ret += arr[i] * (int)pow(10, count - i - 1);
	}
	//�ͷſռ�
	free(arr);
	arr = NULL;
	return ret;
}

int main()
{
	char arr1[] = "123lo4v5er";
	char arr2[] = "292942";
	printf("%d\n", Atoi(arr1));
	printf("%d\n", Atoi(arr2));
	return 0;
}