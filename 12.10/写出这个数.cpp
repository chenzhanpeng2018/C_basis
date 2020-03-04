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
	char n[1000];
	scanf("%s",n);
	int i=0;
	int sum=0;
	while(n[i]!='\0')
	{
		sum+=(n[i]-'0');
		i++;
	}
    i=0;
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
