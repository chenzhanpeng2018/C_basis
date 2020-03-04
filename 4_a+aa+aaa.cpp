#include<stdio.h>
int main()
{ 
  int m,n;
  printf("请输入基数和项数：\n");
  scanf("%d%d",&m,&n);
  int sum=0;
  int add=0;
  for(int i=0;i<n;i++)
  {
	 add=add*10+m;
     sum+=add;
  }	
  printf("sum=%d",sum);
} 
