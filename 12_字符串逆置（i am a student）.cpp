//4.
//��һ���ַ����������Ϊ:"student a am i",
//���㽫��������ݸ�Ϊ"i am a student".
//Ҫ��
//����ʹ�ÿ⺯����
//ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���
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
