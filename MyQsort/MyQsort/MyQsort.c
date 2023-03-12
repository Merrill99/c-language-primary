#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

//交换函数
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
	//确定趟数
	size_t i = 0;
	size_t j = 0;
	for (i = 0; i < num - 1; ++i)
	{
		//一趟冒泡排序
		for (j = 0; j < num - 1 - i; ++j)
		{
			if (compar(((char*)base + j * size), ((char*)base + (j + 1) * size))>0)
			{
				//进行交换
				Swap(((char*)base + j * size), ((char*)base + (j + 1) * size), size);
			}
		}
	}

}

//比较函数
//比较两个元素
//p1>p2时返回大于零的数
//p1=p2时返回等于零的数
//p1<p2时返回小于零的数
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

	//排序整型数组
	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
	BubbleQsort(arr1, sz1, sizeof(arr1[0]), CompareInt);
	print_int(arr1, sz1);

	//排序字符数组
	int sz2 = sizeof(arr2) / sizeof(arr2[0]);
	BubbleQsort(arr2, sz2, sizeof(arr2[0]), CompareChar);
	print_char(arr2, sz2);

	return 0;
}