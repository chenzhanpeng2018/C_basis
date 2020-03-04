#include<stdio.h>
 
void  print(int a){
	switch(a){
	case 0:printf("ling");break;
	case 1:printf("yi");break;
	case 2:printf("er");break;
	case 3:printf("san");break;
	case 4:printf("si");break;
	case 5:printf("wu");break;
	case 6:printf("liu");break;
	case 7:printf("qi");break;
	case 8:printf("ba");break;
	case 9:printf("jiu");break;
	}
	}

int main()
{
	char str[1000]={0};
	scanf("%s",str);
	int sum=0;
	char *p=str;
	while(*p!='\0')
	{
		sum+=(*p-'0');
		p++;
	}
    
    
    int i=0;
    int a[10]={0};
	while(sum!=0){
		a[i]=sum%10;
		sum=sum/10;
		i++;	
	}
	for(i=i-1;i>=0;i--)
	{
		print(a[i]);
		if(i!=0)
		printf(" ");
	}
	return 0;	
}

