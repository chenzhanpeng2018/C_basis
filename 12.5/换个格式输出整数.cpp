#include<stdio.h>
int My_printf(int n); 


int main()
{
    My_printf(234);	
} 

int My_printf(int n)
{
	int i=n/10/10; //百位
	int j=n/10%10; //十位
	int k=n%10;    //个位
	
	int x=0;
	for(;x<i;x++){    //输出i个B,一个挨一个输出，最后不要加换行，因为我们要让S直接跟在B后面 
	   printf("B");
	} 
	x=0;
	for(;x<j;x++){   //输出j个S,一个挨一个输出，最后不要加换行 
	   printf("S");
	} 
	x=1;
	for(;x<=k;x++){  //从1开始输出，一直输出到个位数字 
	   printf("%d",x);
	} 
}

