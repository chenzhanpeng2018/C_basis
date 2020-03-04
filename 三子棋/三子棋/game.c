#include"game.h"

static int Guess()
{
	int data = rand() % 2;
	printf("请猜数字(输入0或1)\n");
	int x=0;
	scanf("%d", &x);
	if (x == data)
	{
		printf("你猜对了，你先走！\n");
		return 1;
	}
	printf("你猜错了，电脑先走！\n");
	return 2;
}
static int IsFull(char board[ROW][COL], int row, int col)//判断棋盘是否满 yes->1  no->0
{
	int i = 0;
	for (; i < row; i++)
	{
		int j = 0;
		for (; j < col; j++)
		{
			if (board[i][j] == ' ');
			return 0;
		}
	}
	return 1;
}

void InitBoard(char board[ROW][COL], int row, int col)//初始化
{
	int i = 0;
	for (; i < row; i++)
	{
		int j = 0;
		for (; j < col; j++)
		{
			board[i][j] = INIT;
		}
	}
}

void ShowBoard(char board[ROW][COL], int row, int col)//显示棋盘
{
	printf("* | 1 | 2 | 3 |\n");
	printf("---------------\n");
	int i = 0;
	for (; i < row; i++)
	{
		int j = 0;
		printf("%d |", i+1);
		for (; j < col; j++)
		{
			printf(" %c |", board[i][j]);
		}
		printf("\n");
		printf("---------------\n");
	}
	
}
char Judge(char board[ROW][COL], int row, int col)//判断胜负
{
	int i = 0;
	//检测行
	for (; i < row; i++)
	{
		if (board[i][0] == board[i][1] &&\
			board[i][1] == board[i][2] &&\
			board[i][0] != ' ')
		{
			return board[i][0];
		}
	}

	//检测列
	for (i=0; i < row; i++)
	{
		if (board[0][i] == board[1][i] &&\
			board[1][i] == board[2][i] &&\
			board[0][i] != ' ')
		{
			return board[0][i];
		}
	}

	//检测对角线
	 //主对角线
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	 //副对角线
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//满
	if (IsFull(board, row, col)) 
	{
		return 'F';
	}
	
	return 'N';
}

void ComputerMove(char board[ROW][COL], int row, int col)//电脑走
{
	while(1)
	{
		int x;
		int y;
		//Sleep(1000);
		//电脑随机生成坐标
		x = rand() % 3;
		y = rand() % 3;
		//printf("%c ", board[x][y]);
		//printf("[%d,%d]",x+1,y+1);
		if (board[x][y] == ' ')
		{
			board[x][y] = C_CLR;
			break;
		} 
	}
	printf("电脑走完了，该你了!\n");
}

void Game()
{
	char board[ROW][COL];
	InitBoard(board, ROW, COL); //初始化
	int x = 0;
	int y = 0;
	char win = ' ';
	srand((unsigned long)time(NULL));//随机数种子
	int step = Guess();//step==1,player  step==2,computer
	do{
		
		ShowBoard(board, ROW, COL);//显示棋盘
		
		switch (step)
		{
		case 1:
		{
			while (1)
			{
				//#############用户走
				printf("请输入你的落子位置<x,y>：\n");
				scanf("%d %d", &x, &y);

				//判断落子位置是否越界
				if (x <= 0 || x > 3 || y <= 0 || y > 3)
				{
					printf("落子位置有误,请重新输入！\n");
					continue;
				}
				//如果用户选择的坐标为空，则改为X，否则提示输入错误
				if (board[x - 1][y - 1] != ' ')
				{
					printf("落子位置已占用,请重新输入！\n");
					continue;
				}
					board[x - 1][y - 1] = P_CLR;
					system("cls");
					break;
			}
			step = 2;
		}
			break;
		case 2:
			//##############电脑走
			system("cls");
			ComputerMove(board, ROW, COL);
			step = 1;
			
			break;
		default:
			break;
		}
		
		//判断胜负  Judge()
		//'X’（玩家赢），'O’(电脑赢) ,'F'(满了)，'N'(游戏继续)
		win = Judge(board, ROW, COL);
		if (win != 'N') //出结果了
		{
			break;
		}
	} while (1);

	if (win == P_CLR)
	{
		printf("恭喜你！你赢了！\n");
	}
	else if (win == C_CLR)
	{
		printf("很遗憾！电脑获胜！\n");
	}
	else
	{
		printf("很惊险！是平局！\n");
	}
	ShowBoard(board, ROW, COL);//显示棋盘
}