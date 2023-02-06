#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 3
#define COL 3

//初始化棋盘，将棋盘里的元素初始化为空格
void InitiBoard(char board[ROW][COL], int row, int col);

//打印棋盘
void PrintBoard(char board[ROW][COL], int row, int col);

//玩家下棋
void PlayerPlay(char board[ROW][COL], int row, int col);

//判断输赢
char JudgeWin(char board[ROW][COL], int row, int col);

//电脑下棋
void ComputerPlay(char board[ROW][COL], int row, int col);