//������A�е����ݺ�����B�е����ݽ��н�����������һ����
#include<stdio.h>

int main()
{
	int a[5]={0,1,2,3,4};
	int b[5]={5,6,7,8,9};
	int c[5];
	int num=sizeof(a)/sizeof(a[0]); 
	int i;
	for(i=0;i<num;i++)
	{
		c[i]=a[i];
		a[i]=b[i];
		b[i]=c[i];
	}
	printf("������ֱ�Ϊ��\n");
	for(i=0;i<num;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	for(i=0;i<num;i++)
	{
		printf("%d ",b[i]);
	}
	getchar();
	return 0;
} 
