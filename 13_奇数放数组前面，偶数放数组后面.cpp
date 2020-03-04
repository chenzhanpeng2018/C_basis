#include<stdio.h>

#define m 10

void sort(int a[],int num)
{	
	int i=0;
   	for (;i<num-1;i++)
   	{ 
   	int j=i;
	   for(;j<num;j++)
	   {
		  if(a[j]%2!=0)
		  {
		    int temp=a[j];
			a[j]=a[i];
			a[i]=temp;	
		  }  	
	   }		  	
	}
}

int main()
{
  int a[m];
  int num=sizeof(a)/sizeof(a[0]);
  int i=0;
  for(;i<m;i++)
  {
  	scanf("%d",&a[i]);
  }
  sort(a,num);
  for(int i=0;i<num;i++)
  {
  	printf("%d ",a[i]);
  }	
} 
