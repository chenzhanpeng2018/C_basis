#include<stdio.h>
int main()
{ 
  int m,n;
  printf("�����������������\n");
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
