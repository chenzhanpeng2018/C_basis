#include<stdio.h>
#include<windows.h>
#pragma warning (disable:4996)
#define SIZE 400


int num(char a)
{
	if('A'==a)
	{
		printf("1");
	}
	else if('B'==a)
	{
		printf("2");
	}
	else if('C'==a)
	{
		printf("3");
	}
	else
	{
		printf("4");
	}
}
int main()
{
	int N=0;
	int arr[SIZE][16] = { 0 };
	scanf("%d", &N);
	int i,j;
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < 16;j++)
		{
			scanf("%c", &arr[i][j]);
		}
		
	}
	
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < 16;j++)
		{
			if('T'==arr[i][j])
			{
				num(arr[i][j-2]); 
			}
		}	
	}
	printf("\n");
	system("pause");
	return 0;
}
