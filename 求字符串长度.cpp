#include<stdio.h>
#include<string.h>
int S1(char str[])
{
	int count=strlen(str);
	return count;
}


int S2(char* str)
{
   char* end=str;
   while(*end!='\0')
   {
   	*end++;
   }
   return end-str;	
} 
 
int S3(char str[])
{
	int count;
    int i;
    for(i=0;str[i]!='\0';i++)
    {
    	count++;
	}
	return count;
}



int S4(char str[])         //while 
{
    int i=0;
    while(str[i]!='\0')
    {
    	i++;
	}
    return i;
}

int S5(char str[])   //µİ¹é 
{
    if(str[0]=='\0')
    {
         return 0;
	}
    return 1+S5(str+1);
}


int len()   //×Ô¼ºÊäÈë 
{
	int count=0;
	char c;
	while((c=getchar())!=EOF&&c!='\n')
	{
		count++;
	}
		//printf("%d",count);
	return count;
}



int main()
{
	char c[100]; 
    gets(c);
    printf("%d\n",S1(c));
    printf("%d\n",S2(c));
    printf("%d\n",S3(c));
    printf("%d\n",S4(c));
    printf("%d\n",S5(c));
    printf("%d\n",len());
} 



