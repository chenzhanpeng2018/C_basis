//1.��д������
//unsigned int reverse_bit(unsigned int value);
//��������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ��
//
//�磺
//��32λ������25���ֵ�������и�λ��
//00000000000000000000000000011001
//��ת�󣺣�2550136832��
//10011000000000000000000000000000
//���������أ�
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
