#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int n)
{
	int row = 0;
	int colum = 0;
	//������
	for (row = 1; row <= n; ++row)
	{
		//������
		for (colum = 1; colum <= row; ++colum)
		{
			printf("%d*%-2d=%-3d ", colum, row, row * colum);
		}
		//����
		printf("\n");
	}

}

int main()
{
	int n = 0;
	//����n��n��
	scanf("%d", &n);
	//��ӡn��n�еĳ˷���
	print(n);
	return 0;
}