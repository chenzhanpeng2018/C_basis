//将三个数按从大到小输出。
#include<stdio.h>
int max(int i,int j,int k);

int main()
{
	int i,j,k;
	printf("请输入三个数：\n");
	scanf("%d%d%d",&i,&j,&k);
	max(i,j,k);
}


int max(int i,int j,int k)
{
	if(i<j)
	{
		i=i+j;
		j=i-j;
		i=i-j;
	}
	if(i<k)
	{
		i=i+k;
		k=i-k;
		i=i-k;
	}
	if(j<k)
	{
		j=j+k;
		k=j-k;
		j=j-k;
	}
	printf("%d,%d,%d",i,j,k);
}
