#include<stdio.h>
#include<stdlib.h> 
int main()
{
  int num;
  int data=rand()%100+1;
  while(1)
  {
  	scanf("%d",&num);
    if(data==num)
	{
		printf("恭喜你猜对了!\n");
	    break;	
	}	
	else if(num>data)
	{
		printf("大了!\n");
	}
	else if(num<data)
	{
		printf("小了!\n");
	}
  }	
} 
