//3.模拟实现strcpy
//4.模拟实现strcat

#include<stdio.h>
  
void strcpy(char str[],char str1[])  //把str1放到str中 
{
	char *p=str;
	char *q=str1;
	while(*q!='\0')
	{
		*p=*q;
		p++,q++;
	}
	*p=*q;
	printf("%s\n",str);
}

void strcat(char str[],char str1[])  //把str1连接到str后面 
{
	char*p=str;
	char*q=str1;
	while(*p!='\0')
	{	
		p++;
	}
	while(*q!='\0')
	{
		*p=*q;
		p++,q++;
	}
	*p=*q;
	printf("%s\n",str);
}


int main()
{
   	char str[1024]="aaa";
   	char str1[]="bbbc";
   	//strcpy(str,str1);
	strcat(str,str1);
	return 0;
} 
