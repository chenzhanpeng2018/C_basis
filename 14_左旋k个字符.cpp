//1.ʵ��һ�����������������ַ����е�k���ַ���
//ABCD������һ���ַ��õ�BCDA
//ABCD���������ַ��õ�CDAB

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void rotate3(char *str,int num,int k) //ABCD1234->ABCD1234ABCD1234 ����һ�飬ֱ�Ӵ��м�ȡ 
{
   char* buf=(char*)malloc(2*num);
   strcpy(buf,str);//���� 
   strcat(buf,str);//ƴ��
   strncpy(str,buf+k,num-1);//�ӵ��ĸ�ȡ��ȡ�˸� 
   free(buf);
   buf=NULL;
}
void Exchange(char* start,char* end)
{
	while(start<end)
	{
		*start^=*end;
		*end^=*start;
		*start^=*end;
	    start++,end--;
	}
}
void rotate2(char *str,int num,int k)
{
	k%=num-1;
	char *mid=str+k-1; 
	Exchange(str,mid);
	Exchange(mid+1,str+num-2);
	Exchange(str,str+num-2);	
}

void rotate1(char str[],int num,int k)
{
   k%=num-1;
   int i=0;
   for(;i<k;i++)
   {
   	char temp=str[0];
   	int j=0;
   	for(;j<=num-2;j++)
   	{
   	   str[j]=str[j+1];	
	}
    str[num-2]=temp;
   }

}

int main()
{
   int k;
   char str[]="ABCD1234";
   int num=sizeof(str)/sizeof(str[0]);
   printf("��������Ҫ�������ַ�����");
   scanf("%d",&k);
   //rotate1(str,num,k);
   //printf("%s\n",str);
   //rotate2(str,num,k);
   //printf("%s\n",str);
   rotate3(str,num,k);
   printf("%s\n",str);  
   return 0;	
} 

