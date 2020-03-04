// 输出一个整数的每一位。


#include<stdio.h>
int printf_(int n)
{
	if(n<10)
	{
		printf("%d ",n);
	}
	else
	{
		printf_(n/10);
		printf("%d ",n%10);
	}
	
}



int main() 
{
  int a;
  scanf("%d",&a);
  printf_(a); 
   	
} 
