#include<stdio.h>
int My_printf(int n); 


int main()
{
    My_printf(234);	
} 

int My_printf(int n)
{
	int i=n/10/10; //��λ
	int j=n/10%10; //ʮλ
	int k=n%10;    //��λ
	
	int x=0;
	for(;x<i;x++){    //���i��B,һ����һ����������Ҫ�ӻ��У���Ϊ����Ҫ��Sֱ�Ӹ���B���� 
	   printf("B");
	} 
	x=0;
	for(;x<j;x++){   //���j��S,һ����һ����������Ҫ�ӻ��� 
	   printf("S");
	} 
	x=1;
	for(;x<=k;x++){  //��1��ʼ�����һֱ�������λ���� 
	   printf("%d",x);
	} 
}

