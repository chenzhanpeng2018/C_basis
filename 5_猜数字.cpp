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
		printf("��ϲ��¶���!\n");
	    break;	
	}	
	else if(num>data)
	{
		printf("����!\n");
	}
	else if(num<data)
	{
		printf("С��!\n");
	}
  }	
} 
