#include<stdio.h>
int main()
{
	int i;
	int n;
    int a[10000]={0,1};
    scanf("%d",&n);
	for(i=2;i<=n;i++)
      {
     	a[i]=a[i-1]+a[i-2];
      }	
      printf("µÚ%dÏîÎª:%d\n",n,a[n]);
} 
