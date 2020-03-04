//1.编写函数：
//unsigned int reverse_bit(unsigned int value);
//这个函数的返回值是value的二进制位模式从左到右翻转后的值。
//
//如：
//在32位机器上25这个值包含下列各位：
//00000000000000000000000000011001
//翻转后：（2550136832）
//10011000000000000000000000000000
//程序结果返回：
//2550136832

#include<stdio.h>

unsigned int reverse_bit(unsigned int value)
{
   	unsigned int result=0;
	int num=sizeof(value)*8;
	int i=0;
	for(;i<num;i++)
	{
	  if(value&(1<<i))
	  {
	  	 result|=(1<<(num-1-i));
	  }	
	} 
   	return result;	
} 

int main()
{
  unsigned int ret=reverse_bit(25); 
  printf("%d\n",ret);
  return 0;	
} 
