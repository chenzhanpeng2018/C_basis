//4.���ʵ�֣�
//����int��32λ������m��n�Ķ����Ʊ���У�
//�ж��ٸ�λ(bit)��ͬ��
//��������:
//1999 2299
//�������:7

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
  printf("%d��%d������bitλ����%d������λ��ͬ\n",a,b,bit(a,b));  
  	
} 
