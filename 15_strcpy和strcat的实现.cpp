//3.ģ��ʵ��strcpy
//4.ģ��ʵ��strcat

#include<stdio.h>
  
void strcpy(char str[],char str1[])  //��str1�ŵ�str�� 
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

void strcat(char str[],char str1[])  //��str1���ӵ�str���� 
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
