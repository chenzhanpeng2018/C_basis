#include"game.h"

static int Guess()
{
	int data = rand() % 2;
	printf("�������(����0��1)\n");
	int x=0;
	scanf("%d", &x);
	if (x == data)
	{
		printf("��¶��ˣ������ߣ�\n");
		return 1;
	}
	printf("��´��ˣ��������ߣ�\n");
	return 2;
}
static int IsFull(char board[ROW][COL], int row, int col)//�ж������Ƿ��� yes->1  no->0
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

void InitBoard(char board[ROW][COL], int row, int col)//��ʼ��
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

void ShowBoard(char board[ROW][COL], int row, int col)//��ʾ����
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
char Judge(char board[ROW][COL], int row, int col)//�ж�ʤ��
{
	int i = 0;
	//�����
	for (; i < row; i++)
	{
		if (board[i][0] == board[i][1] &&\
			board[i][1] == board[i][2] &&\
			board[i][0] != ' ')
		{
			return board[i][0];
		}
	}

	//�����
	for (i=0; i < row; i++)
	{
		if (board[0][i] == board[1][i] &&\
			board[1][i] == board[2][i] &&\
			board[0][i] != ' ')
		{
			return board[0][i];
		}
	}

	//���Խ���
	 //���Խ���
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	 //���Խ���
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
	{
		return board[1][1];
	}
	//��
	if (IsFull(board, row, col)) 
	{
		return 'F';
	}
	
	return 'N';
}

void ComputerMove(char board[ROW][COL], int row, int col)//������
{
	while(1)
	{
		int x;
		int y;
		//Sleep(1000);
		//���������������
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
	printf("���������ˣ�������!\n");
}

void Game()
{
	char board[ROW][COL];
	InitBoard(board, ROW, COL); //��ʼ��
	int x = 0;
	int y = 0;
	char win = ' ';
	srand((unsigned long)time(NULL));//���������
	int step = Guess();//step==1,player  step==2,computer
	do{
		
		ShowBoard(board, ROW, COL);//��ʾ����
		
		switch (step)
		{
		case 1:
		{
			while (1)
			{
				//#############�û���
				printf("�������������λ��<x,y>��\n");
				scanf("%d %d", &x, &y);

				//�ж�����λ���Ƿ�Խ��
				if (x <= 0 || x > 3 || y <= 0 || y > 3)
				{
					printf("����λ������,���������룡\n");
					continue;
				}
				//����û�ѡ�������Ϊ�գ����ΪX��������ʾ�������
				if (board[x - 1][y - 1] != ' ')
				{
					printf("����λ����ռ��,���������룡\n");
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
			//##############������
			system("cls");
			ComputerMove(board, ROW, COL);
			step = 1;
			
			break;
		default:
			break;
		}
		
		//�ж�ʤ��  Judge()
		//'X�������Ӯ����'O��(����Ӯ) ,'F'(����)��'N'(��Ϸ����)
		win = Judge(board, ROW, COL);
		if (win != 'N') //�������
		{
			break;
		}
	} while (1);

	if (win == P_CLR)
	{
		printf("��ϲ�㣡��Ӯ�ˣ�\n");
	}
	else if (win == C_CLR)
	{
		printf("���ź������Ի�ʤ��\n");
	}
	else
	{
		printf("�ܾ��գ���ƽ�֣�\n");
	}
	ShowBoard(board, ROW, COL);//��ʾ����
}