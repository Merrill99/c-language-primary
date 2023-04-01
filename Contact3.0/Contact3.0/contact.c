#define _CRT_SECURE_NO_WARNINGS 1

#include"contact.h"

void LoadContact(contact* pc)
{
	//打开文件
	FILE* pf = fopen("contact.txt", "rb");
	if (pf == NULL)
	{
		perror("LoadContact:fopen");
		return;
	}
	//读取文件
	PepInfo tmp = { 0 };
	while (fread(&tmp, sizeof(PepInfo), 1, pf))
	{
		//存入数据，首先检测容量
		CheckCapacity(pc);
		pc->date[pc->sz] = tmp;
		pc->sz++;
	}
	//关闭文件
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
	//加载通讯录
	LoadContact(pc);
}

//检查容量并扩容
//扩容失败，返回0
//扩容成功，不需要扩容 返回1
int CheckCapacity(contact* pc)
{
	if (pc->sz == pc->capacity)
	{
		PepInfo* ptr = (PepInfo*)realloc(pc->date, (pc->capacity + EXP_SZ) * sizeof(PepInfo));
		//扩容失败
		if (NULL == ptr)
		{
			perror("relloc");
			return 0;
		}
		//扩容成功
		else
		{
			pc->date = ptr;
			pc->capacity += EXP_SZ;
			printf("扩容成功！当前容量为:%d\n", pc->capacity);
		}
	}
	return 1;
}

//初始容量为3，信息存满就加2
void AddContact(contact* pc)
{
	//检查容量，容量已满就进行扩容
	if (0 == CheckCapacity(pc))
	{
		printf("扩容失败！\n");
		return;
	}
	printf("请输入姓名:>");
	scanf("%s", pc->date[pc->sz].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->date[pc->sz].age));
	printf("请输入性别:>");
	scanf("%s", pc->date[pc->sz].sex);
	printf("请输入电话:>");
	scanf("%s", pc->date[pc->sz].telephone);
	printf("请输入地址:>");
	scanf("%s", pc->date[pc->sz].address);

	//有效信息个数加1
	pc->sz++;
	printf("添加成功！\n");
}

void ShowContact(contact* pc)
{
	//姓名        年龄   性别   电话         地址
	//zhangsan    22    男     1231412512  gansu
	printf("%-10s %-5s %-5s %-10s %-10s\n", "姓名", "年龄", "性别", "电话", "地址");
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

//找到返回下标，找不到返回-1
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
		printf("通讯录为空，删除失败！\n");
		return;
	}
	printf("请输入要删除联系人的姓名:>");
	char DeletName[NAME_MAX];
	scanf("%s", DeletName);
	//查找要删除联系人的下标
	int i = 0;
	int pos = FindByName(DeletName, pc);
	if (-1 == pos)
	{
		printf("要删除的联系人不存在！\n");
		return;
	}
	//删除联系人
	else
	{
		for (i = pos; i < pc->sz - 1; ++i)
		{
			pc->date[i] = pc->date[i + 1];
		}
		pc->sz--;
		printf("删除成功！\n");
	}
}

void SearchByName(const contact* pc)
{
	printf("请输入要查找人的名字:>");
	char name[NAME_MAX];
	scanf("%s", name);
	int pos = FindByName(name, pc);
	if (-1 == pos)
	{
		printf("要查找的联系人不存在！\n");
		return;
	}
	else
	{
		//打印数据
		printf("%-10s %-5s %-5s %-10s %-10s\n", "姓名", "年龄", "性别", "电话", "地址");
		printf("%-10s %-5d %-5s %-10s %-10s\n",
			pc->date[pos].name,
			pc->date[pos].age,
			pc->date[pos].sex,
			pc->date[pos].telephone,
			pc->date[pos].address);
	}
}

//通过姓名排序
int SortByName(const void* p1, const void* p2)
{
	return strcmp(((PepInfo*)p1)->name, ((PepInfo*)p2)->name);
}
void SortContact(contact* pc)
{
	qsort(pc, pc->sz, sizeof(PepInfo), SortByName);
	printf("排序成功\n");
}

void ModifyContact(contact* pc)
{
	//查找所要修改联系人的姓名
	printf("请输入要修改人的名字:>");
	char name[NAME_MAX];
	scanf("%s", name);
	int pos = FindByName(name, pc);
	if (-1 == pos)
	{
		printf("要修改的联系人不存在！");
		return;
	}
	//修改联系人的信息
	else
	{
		printf("请输入姓名:>");
		scanf("%s", pc->date[pos].name);
		printf("请输入年龄:>");
		scanf("%d", &(pc->date[pos].age));
		printf("请输入性别:>");
		scanf("%s", pc->date[pos].sex);
		printf("请输入电话:>");
		scanf("%s", pc->date[pos].telephone);
		printf("请输入地址:>");
		scanf("%s", pc->date[pos].address);
		printf("修改成功！\n");
	}
}

void DestroyContact(contact* pc)
{
	free(pc->date);
	pc->date = NULL;
	pc->capacity = 0;
	pc->sz = 0;
	printf("释放内存...\n");
}

void SaveContact(contact* pc)
{
	//打开文件
	FILE* pf = fopen("contact.txt", "wb");
	if (pf == NULL)
	{
		perror("fopen");
		return;
	}
	//写入数据
	int i = 0;
	for (i = 0; i < pc->sz; ++i)
	{
		fwrite(pc->date + i, sizeof(PepInfo), 1, pf);
	}
	//关闭文件
	fclose(pf);
	pf = NULL;
	printf("保存成功！\n");
}