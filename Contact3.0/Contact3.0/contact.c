#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

void LoadContact(contact* pc)
{
	//���ļ�
	FILE* pf = fopen("contact.txt", "rb");
	if (pf == NULL)
	{
		perror("LoadContact:fopen");
		return;
	}
	//��ȡ�ļ�
	PepInfo tmp = { 0 };
	while (fread(&tmp, sizeof(PepInfo), 1, pf))
	{
		//�������ݣ����ȼ������
		CheckCapacity(pc);
		pc->date[pc->sz] = tmp;
		pc->sz++;
	}
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
}

void InitiContact(contact* pc)
{
	pc->capacity = DEFAULT_SZ;
	pc->sz = 0;
	pc->date = (PepInfo*)malloc(pc->capacity * sizeof(PepInfo));
	if (NULL == pc->date)
	{
		perror("malloc");
		return;
	}
	//����ͨѶ¼
	LoadContact(pc);
}

//�������������
//����ʧ�ܣ�����0
//���ݳɹ�������Ҫ���� ����1
int CheckCapacity(contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		PepInfo* ptr = (PepInfo*)realloc(pc->date, (pc->capacity + EXP_SZ) * sizeof(PepInfo));
		//����ʧ��
		if (NULL == ptr)
		{
			perror("relloc");
			return 0;
		}
		//���ݳɹ�
		else
		{
			pc->date = ptr;
			pc->capacity += EXP_SZ;
			printf("���ݳɹ�����ǰ����Ϊ:%d\n", pc->capacity);
		}
	}
	return 1;
}

//��ʼ����Ϊ3����Ϣ�����ͼ�2
void AddContact(contact* pc)
{
	//������������������ͽ�������
	if (0 == CheckCapacity(pc))
	{
		printf("����ʧ�ܣ�\n");
		return;
	}
	printf("����������:>");
	scanf("%s", pc->date[pc->sz].name);
	printf("����������:>");
	scanf("%d", &(pc->date[pc->sz].age));
	printf("�������Ա�:>");
	scanf("%s", pc->date[pc->sz].sex);
	printf("������绰:>");
	scanf("%s", pc->date[pc->sz].telephone);
	printf("�������ַ:>");
	scanf("%s", pc->date[pc->sz].address);

	//��Ч��Ϣ������1
	pc->sz++;
	printf("��ӳɹ���\n");
}

void ShowContact(contact* pc)
{
	//����        ����   �Ա�   �绰         ��ַ
	//zhangsan    22    ��     1231412512  gansu
	printf("%-10s %-5s %-5s %-10s %-10s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	int i = 0;
	for (i = 0; i < pc->sz; ++i)
	{
		printf("%-10s %-5d %-5s %-10s %-10s\n",
			pc->date[i].name,
			pc->date[i].age,
			pc->date[i].sex,
			pc->date[i].telephone,
			pc->date[i].address);
	}
}

//�ҵ������±꣬�Ҳ�������-1
int FindByName(char name[], const contact* pc)
{
	int i = 0;
	for (i = 0; i < pc->sz; ++i)
	{
		if (0 == strcmp(name, pc->date[i].name))
			return i;
	}
	return -1;
}
void DeletContact(contact* pc)
{
	if (0 == pc->sz)
	{
		printf("ͨѶ¼Ϊ�գ�ɾ��ʧ�ܣ�\n");
		return;
	}
	printf("������Ҫɾ����ϵ�˵�����:>");
	char DeletName[NAME_MAX];
	scanf("%s", DeletName);
	//����Ҫɾ����ϵ�˵��±�
	int i = 0;
	int pos = FindByName(DeletName, pc);
	if (-1 == pos)
	{
		printf("Ҫɾ������ϵ�˲����ڣ�\n");
		return;
	}
	//ɾ����ϵ��
	else
	{
		for (i = pos; i < pc->sz - 1; ++i)
		{
			pc->date[i] = pc->date[i + 1];
		}
		pc->sz--;
		printf("ɾ���ɹ���\n");
	}
}

void SearchByName(const contact* pc)
{
	printf("������Ҫ�����˵�����:>");
	char name[NAME_MAX];
	scanf("%s", name);
	int pos = FindByName(name, pc);
	if (-1 == pos)
	{
		printf("Ҫ���ҵ���ϵ�˲����ڣ�\n");
		return;
	}
	else
	{
		//��ӡ����
		printf("%-10s %-5s %-5s %-10s %-10s\n", "����", "����", "�Ա�", "�绰", "��ַ");
		printf("%-10s %-5d %-5s %-10s %-10s\n",
			pc->date[pos].name,
			pc->date[pos].age,
			pc->date[pos].sex,
			pc->date[pos].telephone,
			pc->date[pos].address);
	}
}

//ͨ����������
int SortByName(const void* p1, const void* p2)
{
	return strcmp(((PepInfo*)p1)->name, ((PepInfo*)p2)->name);
}
void SortContact(contact* pc)
{
	qsort(pc, pc->sz, sizeof(PepInfo), SortByName);
	printf("����ɹ�\n");
}

void ModifyContact(contact* pc)
{
	//������Ҫ�޸���ϵ�˵�����
	printf("������Ҫ�޸��˵�����:>");
	char name[NAME_MAX];
	scanf("%s", name);
	int pos = FindByName(name, pc);
	if (-1 == pos)
	{
		printf("Ҫ�޸ĵ���ϵ�˲����ڣ�");
		return;
	}
	//�޸���ϵ�˵���Ϣ
	else
	{
		printf("����������:>");
		scanf("%s", pc->date[pos].name);
		printf("����������:>");
		scanf("%d", &(pc->date[pos].age));
		printf("�������Ա�:>");
		scanf("%s", pc->date[pos].sex);
		printf("������绰:>");
		scanf("%s", pc->date[pos].telephone);
		printf("�������ַ:>");
		scanf("%s", pc->date[pos].address);
		printf("�޸ĳɹ���\n");
	}
}

void DestroyContact(contact* pc)
{
	free(pc->date);
	pc->date = NULL;
	pc->capacity = 0;
	pc->sz = 0;
	printf("�ͷ��ڴ�...\n");
}

void SaveContact(contact* pc)
{
	//���ļ�
	FILE* pf = fopen("contact.txt", "wb");
	if (pf == NULL)
	{
		perror("fopen");
		return;
	}
	//д������
	int i = 0;
	for (i = 0; i < pc->sz; ++i)
	{
		fwrite(pc->date + i, sizeof(PepInfo), 1, pf);
	}
	//�ر��ļ�
	fclose(pf);
	pf = NULL;
	printf("����ɹ���\n");
}