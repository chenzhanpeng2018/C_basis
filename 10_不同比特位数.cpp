//4.编程实现：
//两个int（32位）整数m和n的二进制表达中，
//有多少个位(bit)不同？
//输入例子:
//1999 2299
//输出例子:7

#include<stdio.h>

int bit(int a,int b)
{
	
	int i=0;
	int count =0;
	a^=b;
	for(i=0;i<32;i++)
	{
	   if((a>>i)&1 == 1)
	   {
	     count++;	
	   }	
	} 
	return count;
} 

int main()
{
  int a,b;
  scanf("%d%d",&a,&b);
  printf("%d和%d二进制bit位中有%d个比特位不同\n",a,b,bit(a,b));  
  	
} 
