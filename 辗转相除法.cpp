#include<stdio.h>

int Gcd(int a,int b)  //���Լ�� 
{
	return b==0?a:Gcd(b,a%b);
}

int main()
{
	int a,b;
	scanf("%d%d",&a,&b); 
  	int key=Gcd(a,b);
  	printf("���Լ��:%d\n",key);
	printf("��С������:%d\n",a*b/key);   //��С���������������˻��������Լ�� 
} 
