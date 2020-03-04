#include<stdio.h>

int main()
{
   int a[10];
   int i=0;
   for(;i<10;i++)
   {
     scanf("%d",&a[i]);	
   }	
   for(i=1;i<10;i++)
   {
   	if(a[i]!=0)
   	{
   	   printf("%d",i);
	   a[i]--;
	   break;	
	}
   } 
   
   for(i=0;i<10;i++)
   {
   	int j=0;
   	for(;j<a[i];j++)
   	{
   	  	printf("%d",i); 
	}
   }
} 
