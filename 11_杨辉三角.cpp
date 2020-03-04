//在屏幕上打印杨辉三角。
//       1
//    1    1
//  1   2   1
//1  3    3  1

//1
//1 1
//1 2 1
//1 3 3 1
#define cro 5
#define con 5
#include<stdio.h>
int main()
{
	
   int a[cro][con]={0};
   int i;
   for(i=0;i<cro;i++)
   {
   	int j;
   	for(j=0;j<=i;j++)
   	{
   		if(j==0||i==j)
   		{
   		  a[i][j]=1;	
		}
		else
		{
			a[i][j]=a[i-1][j-1]+a[i-1][j];
		}
	}
   }
   
   for(i=0;i<cro;i++)
   {
   	int j;
   	for(int x=0;x<con-1-i;x++)
   	{
	 	printf(" ");
	}
   
   	for(j=0;j<=i;j++)
   	{
		printf("%d ",a[i][j]);
	}
	printf("\n");
   }
} 
