#include<stdio.h>
int main()
{
   char str;  
   while((str=getchar())!=EOF) 
   {
   	if(str>='a'&&str<='z')
   	{
	   str=str-32;
    }
    else if(str>='A'&&str<='Z')
    {
    	str=str+32;
	}
	else if(str>='0'&&str<='9')
	{
		continue;
	}
	putchar(str);
   }	
   return 0;
} 
