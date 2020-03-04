//1.实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void rotate3(char *str,int num,int k) //ABCD1234->ABCD1234ABCD1234 再续一遍，直接从中间取 
{
   char* buf=(char*)malloc(2*num);
   strcpy(buf,str);//拷贝 
   strcat(buf,str);//拼接
   strncpy(str,buf+k,num-1);//从第四个取，取八个 
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
   printf("请输入你要左旋的字符数：");
   scanf("%d",&k);
   //rotate1(str,num,k);
   //printf("%s\n",str);
   //rotate2(str,num,k);
   //printf("%s\n",str);
   rotate3(str,num,k);
   printf("%s\n",str);  
   return 0;	
} 

