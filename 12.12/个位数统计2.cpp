#include<stdio.h>
#include<string.h> 
int S(char arr[],int len)
{
   int num[10]={0};
   int i=0;
   for(i=0;i<len;i++)
   {
     num[arr[i]-'0']++; 	
   }
   
   for(i=0;i<10;i++)
   {
   	if(num[i]>0)
   	{
   	  printf("%d:%d\n",i,num[i]);
	}
   } 
   return 0;
}
int main()
{
   char arr[1000];
   gets(arr);
   int len=strlen(arr);
   S(arr,len);
   return 0;	
} 
