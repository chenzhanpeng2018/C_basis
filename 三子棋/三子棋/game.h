#include<stdio.h>
#include<windows.h>
#include<time.h>



#pragma warning(disable:4996)


#define ROW 3
#define COL 3

#define P_CLR 'X'   //棋子  PLAYER_COLORE
#define C_CLR 'O'   //      COMPUTER_COLRE

#define INIT ' '//初始化

void Game();
int Guess();
void InitBoard(char board[ROW][COL],int row,int col);//初始化
void ShowBoard(char board[ROW][COL],int row,int col);//显示棋盘
char Judge(char board[ROW][COL], int row, int col);//判断胜负
void ComputerMove(char board[ROW][COL], int row, int col);//电脑走
static int IsFull(char board[ROW][COL], int row, int col);//判断棋盘是否满