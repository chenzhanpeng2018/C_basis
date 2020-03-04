#include<stdio.h>
#include<stdlib.h>
#include<string.h>
Found(char *str,char*str1,int num)
{
	char* buf=(char*)malloc(2*num);
	int k=0;
	for(;k<num;k++)
	{
      strcpy(buf,str);//拷贝 
      strcat(buf,str);//拼接
      strncpy(str,buf+k,num-1);//从第四个取，取八个 
	  if(strcmp(str1,strncpy(str,buf+k,num-1))==0)
	  {
	  	return 1;
	  	break;
	  }  
	}
	return 0;
	free(buf);
    buf=NULL;
}
int main()
{
	char str[]="ABCD1234";
	char str1[]="CD1243AB";
	int num=sizeof(str)/sizeof(str[0]);
	int ret=Found(str,str1,num); 
	if(ret==1)
	{
		printf("Yes!\n");
	}
	else
	{
		printf("No!\n");
	}
}
