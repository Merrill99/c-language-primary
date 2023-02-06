#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

//��ʼ�����̣����������Ԫ�س�ʼ��Ϊ�ո�
void InitiBoard(char board[ROW][COL], int row, int col);

//��ӡ����
void PrintBoard(char board[ROW][COL], int row, int col);

//�������
void PlayerPlay(char board[ROW][COL], int row, int col);

//�ж���Ӯ
char JudgeWin(char board[ROW][COL], int row, int col);

//��������
void ComputerPlay(char board[ROW][COL], int row, int col);