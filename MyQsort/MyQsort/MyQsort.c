#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//��������
void Swap(char* p1, char* p2, size_t width)
{
	size_t i = 0;
	for (i = 0; i < width; ++i)
	{
		char tmp = *p1;
		*p1 = *p2;
		*p2 = tmp;
		p1++;
		p2++;
	}
}

void BubbleQsort(void* base, size_t num, size_t size, int (*compar)(const void*, const void*))
{
	//ȷ������
	size_t i = 0;
	size_t j = 0;
	for (i = 0; i < num - 1; ++i)
	{
		//һ��ð������
		for (j = 0; j < num - 1 - i; ++j)
		{
			if (compar(((char*)base + j * size), ((char*)base + (j + 1) * size))>0)
			{
				//���н���
				Swap(((char*)base + j * size), ((char*)base + (j + 1) * size), size);
			}
		}
	}

}

//�ȽϺ���
//�Ƚ�����Ԫ��
//p1>p2ʱ���ش��������
//p1=p2ʱ���ص��������
//p1<p2ʱ����С�������
int CompareInt(const void* p1, const void* p2)
{
	return (*(int*)p1 - *(int*)p2);
}

int CompareChar(const void* p1, const void* p2)
{
	return (*(char*)p1 - *(char*)p2);
}

void print_int(int str[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; ++i)
	{
		printf("%d ", str[i]);
	}
	printf("\n");
}

void print_char(char* str, int sz)
{
	int i = 0;
	for (i = 0; i < sz; ++i)
	{
		printf("%c", str[i]);
	}
}

int main()
{
	int arr1[] = { 3,4,6,1,2,5,7,9,8,10 };
	char arr2[] = "dcaebf";

	//������������
	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
	BubbleQsort(arr1, sz1, sizeof(arr1[0]), CompareInt);
	print_int(arr1, sz1);

	//�����ַ�����
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	BubbleQsort(arr2, sz2, sizeof(arr2[0]), CompareChar);
	print_char(arr2, sz2);

	return 0;
}