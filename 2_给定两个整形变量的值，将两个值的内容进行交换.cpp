#include<stdio.h>
int main()
{
	int a=10;
	int b=20;
	printf("����ǰ������Ϊ��%d,%d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b; 
	printf("������������Ϊ��%d,%d\n",a,b);
	getchar();
   	return 0;	
} 
