#include<stdio.h>


int Exchange(char *p,char *q)
{
	while(p<q){
		*p^=*q;
		*q^=*p;
		*p^=*q;
		p++,q--;
	}
}
int Server(char str[])
{
	char *p=str;
	char *q=str;
	while(*q!='\0'){
		if(*q==' ')
		{
		Exchange(p,q-1);
		p=q+1;
		q=p;	
		}
	  q++;
	}
	Exchange(p,q-1);
	Exchange(str,q-1);
} 


int main()
{
   char str[100]={0};
   gets(str);
   Server(str);
   printf("%s",str);
} 
