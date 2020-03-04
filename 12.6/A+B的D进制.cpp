#include<stdio.h>

int F(int num,int n)   //十进制num转为n进制 
{
	int temp=num%n;
	num=num/n;
	if(num==0)
	{
		;
	}
	else
	{
       F(num,n);
	}
	printf("%d",temp);
}



int main()
{
     int A,B,n;
	 scanf("%d%d%d",&A,&B,&n);
	 F(A+B,n);	
} 
