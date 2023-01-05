#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma once
#define ROW 3
#define COL 3
//声明
void InitBoard(int board[ROW][COL], int row, int col);
void DisplayBoard(char board[ROW][COL],int row,int col);
void playerMove(char board[ROW][COL], int row,int col);
void ComputerMove(char board[ROW][COL],int row,int col);

//告诉我们四种游戏的状态
//玩家赢  - '*'
//电脑赢  - '#'
//平局    - 'Q'
//继续    - 'C'

char IsWin(char board[ROW][COL], int row, int col);
