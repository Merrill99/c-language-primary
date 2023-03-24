#pragma once

#define NAME_MAX 20
#define SEX_MAX 5
#define TELE_MAX 12
#define ADR_MAX 30
#define MAX 100//�������

//ͷ�ļ��İ���
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

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

//�Զ���ͨѶ¼����
typedef struct PepInfo
{
	char name[NAME_MAX];//����
	int age;//����
	char sex[SEX_MAX];//�Ա�
	char telephone[TELE_MAX];//�绰
	char adress[ADR_MAX];//סַ
}PepInfo;

typedef struct contact
{
	PepInfo date[MAX];//�������
	int sz;//��¼ͨѶ¼��Ч��Ϣ�ĸ���
}contact;

//��ʼ��ͨѶ¼
void InitiContact(contact* pc);

//������ϵ��
void AddContact(contact* pc);

//��ӡ��ϵ��
void ShowContact(contact* pc);

//ɾ����ϵ��
void DeletContact(contact* pc);

//������ϵ��
void SearchByName(const contact* pc);

//������ϵ��
void SortContact(contact* pc);

//�޸���ϵ��
void ModifyContact(contact* pc);