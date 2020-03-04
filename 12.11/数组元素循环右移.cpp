#include<stdio.h>
#define size 100

void Arr(int arr[],int N,int M)
{
	int i;
	for(i=N-M;i<2*(N-1);i++)
	{
		printf("%d",arr[i]);
		if(i!=2*(N-1)-1){
			printf(" ");
		}
	}	
}
int  main()
{
	int N,M;
	int arr[size]={0};
	scanf("%d%d",&N,&M);
	M=M%N;
	int i=0;
	for(;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(;i<2*(N-1);i++)
	{
		arr[i]=arr[i-N];
	}
	Arr(arr,N,M);
	return 0; 
}
