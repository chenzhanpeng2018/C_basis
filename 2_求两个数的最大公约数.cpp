//求两个数的最大公约数
#include<stdio.h>
int num(int i,int j);
 
int main()
{
	int i,j;
	printf("请输入两个数：\n");
	scanf("%d%d",&i,&j); //输入数据 
	num(i,j);            //调用求最大公约数函数 
   	getchar();
   	return 0;	
}

int num(int i,int j)
{
	int k;
	int n=i<j?i:j;      //判断较小数，从较小数开始递减判断 
	for(k=n;k>1;k--)
	{
		if(i%k==0&&j%k==0)
		{
			printf("最大公约数为：%d\n",k);
			break;
		}
	}
	return 0;
}
