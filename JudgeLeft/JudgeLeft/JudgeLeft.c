
#include<stdio.h>

#include<string.h>

//�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ���
//���򷵻�1
//�����򷵻�0
int JudgeLeftMove(char arr1[], char arr2[])
{
	size_t len = strlen(arr1);

	int i = 0;
	for (i = 0; i < len; ++i)
	{
		int j = 0;
		//����һ���ַ�
		for (j = 0; j < len - 1; ++j)
		{
			char tmp = arr1[j];
			arr1[j] = arr1[j + 1];
			arr1[j + 1] = tmp;

			//����һ���ַ���ͽ����ж��Ƿ���arr2���
			if (0 == strncmp(arr1, arr2, len))
			{
				return 1;
			}
		}
	}
	return 0;
}

int main()
{
	char arr1[] = "abcdef";
	char arr2[] = "cdefab";
	int ret = JudgeLeftMove(arr1, arr2);
	if (1 == ret)
	{
		printf("Yes!\n");
	}
	else
	{
		printf("No!\n");
	}
	return 0;
}