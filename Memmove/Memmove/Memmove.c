#include<stdio.h>

#include<assert.h>

void* Memmove(void* dest, const void* source, size_t num)
{
	//����
	assert(dest && source);

	//��¼dest����ʼλ��
	void* ret = dest;

	//��ǰ����ƶ�
	if (dest < source)
	{
		while (num--)
		{
			*(char*)dest = *(char*)source;
			dest = (char*)dest + 1;
			source = (char*)source + 1;

		}
	}
	//�Ӻ���ǰ�ƶ�
	else
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)source + num);
		}
	}
	return ret;
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	Memmove(arr, arr + 2, 20);

	//����arr�����Ԫ�ظ���
	int sz = sizeof(arr) / sizeof(arr[0]);

	int i = 0;
	for (i = 0; i < sz; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	return 0;
}