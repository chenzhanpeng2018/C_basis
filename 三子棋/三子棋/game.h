#include<stdio.h>
#include<windows.h>
#include<time.h>



#pragma warning(disable:4996)


#define ROW 3
#define COL 3

#define P_CLR 'X'   //����  PLAYER_COLORE
#define C_CLR 'O'   //      COMPUTER_COLRE

#define INIT ' '//��ʼ��

void Game();
int Guess();
void InitBoard(char board[ROW][COL],int row,int col);//��ʼ��
void ShowBoard(char board[ROW][COL],int row,int col);//��ʾ����
char Judge(char board[ROW][COL], int row, int col);//�ж�ʤ��
void ComputerMove(char board[ROW][COL], int row, int col);//������
static int IsFull(char board[ROW][COL], int row, int col);//�ж������Ƿ���