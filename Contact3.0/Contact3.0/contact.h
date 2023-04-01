#pragma once

#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADDR_MAX 30

#define DEFAULT_SZ 3
#define EXP_SZ 2

//头文件的包含
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<errno.h>

enum menu
{
	EXIT,
	ADD,
	DELET,
	SEARCH,
	MODIFY,
	SHOW,
	SORT
};

//自定义通讯录类型
typedef struct PepInfo
{
	char name[NAME_MAX];//姓名
	int age;//年龄
	char sex[SEX_MAX];//性别
	char telephone[TELE_MAX];//电话
	char address[ADDR_MAX];//住址
}PepInfo;

typedef struct contact
{
	PepInfo* date;//存放数据
	int sz;//记录通讯录有效信息的个数
	int capacity;//记录通讯录当前容量的
}contact;

//初始化通讯录
void InitiContact(contact* pc);

//增添联系人
void AddContact(contact* pc);

//打印联系人
void ShowContact(contact* pc);

//删除联系人
void DeletContact(contact* pc);

//查找联系人
void SearchByName(const contact* pc);

//排序联系人
void SortContact(contact* pc);

//修改联系人
void ModifyContact(contact* pc);

//释放内存
void DestroyContact(contact* pc);

//保存通讯录
void SaveContact(contact* pc);

//检查容量
int CheckCapacity(contact* pc);