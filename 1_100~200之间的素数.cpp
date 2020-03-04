#include<stdio.h>
int S(int n,int m);
 
int S(int n,int m)
{
	int i;
	int j;
	for(i=n;i<=m;i++)
	{
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
			   break;
		 	}
		 	 
		}
		if(j==i)
		 	{
		 	   printf("%d\n",i);
			}
	}
	return 0;
}

int main()
{
	int n,m;
	printf("请输入范围（从小到大）：\n");
	scanf("%d %d",&n,&m); 
  	S(n,m); 
	getchar();
	return 0; 	
} 
