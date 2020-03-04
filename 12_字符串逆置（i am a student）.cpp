//4.
//有一个字符数组的内容为:"student a am i",
//请你将数组的内容改为"i am a student".
//要求：
//不能使用库函数。
//只能开辟有限个空间（空间个数和字符串的长度无关）。
//
//student a am i
//i ma a tneduts
//i am a student


#include<stdio.h>

void reverse(char *p,char *q)
{
	while(p<q)
	{
	  *p^=*q;
	  *q^=*p;
	  *p^=*q;
	  p++,q--;	
	}
}


void  exchange(char str[])
{
	char *p=str;
   	char *q=str;
   	while(*q !='\0')
   	{
   	    if(*q !=' ')
		{
		    q++;	
	    }
	    else
		{
			reverse(p,q-1);
		    p=q+1;
			q=p;		
		}	
	}
	reverse(p,q-1);
	reverse(str,q-1);
}

int main()
{
   	char str[]="student a am i";
   	exchange(str);
   	printf("%s\n",str);
	return 0;  	
} 
