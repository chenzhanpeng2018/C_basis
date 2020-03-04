#include<stdio.h>
int main()
{
	int a[10]={5,6,9,4,7,2,8,3,1,0}; 
	int i;
	int j;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			if(a[j]>a[j+1])
			{
				a[j]  =a[j]^a[j+1];
				a[j+1]=a[j]^a[j+1];
				a[j]  =a[j]^a[j+1];
			}
		}
	}
	
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]); 
	}
} 
