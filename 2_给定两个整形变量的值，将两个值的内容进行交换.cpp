#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	printf("交换前两个数为：%d,%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b; 
	printf("交换后两个数为：%d,%d\n",a,b);
	getchar();
   	return 0;	
} 
