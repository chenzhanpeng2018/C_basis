//�������������Լ��
#include<stdio.h>
int num(int i,int j);
 
int main()
{
	int i,j;
	printf("��������������\n");
	scanf("%d%d",&i,&j); //�������� 
	num(i,j);            //���������Լ������ 
   	getchar();
   	return 0;	
}

int num(int i,int j)
{
	int k;
	int n=i<j?i:j;      //�жϽ�С�����ӽ�С����ʼ�ݼ��ж� 
	for(k=n;k>1;k--)
	{
		if(i%k==0&&j%k==0)
		{
			printf("���Լ��Ϊ��%d\n",k);
			break;
		}
	}
	return 0;
}
