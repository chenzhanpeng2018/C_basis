#include<stdio.h>


int main()
{
   	int N,M;
   	scanf("%d%d",&N,&M);     //���������� 
   	int num[M];
	int an[M]; 
   	int i=0;	int j=0;
	   for(;i<M;i++){        //��ֵ 
	   	scanf("%d",&num[i]);
	   } 
	i=0;
	for(;i<M;i++){           //�� 
		scanf("%d",&an[i]);
	}                
   	int arr[N][M]={0};      //ѧ���ʹ� 
    i=0;
	for(;i<N;i++){
	
		for(j=0;j<M;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	int grade=0;//�ܷ� 
	for(i=0;i<N;i++){
		for(j=0;j<M;j++){
			if(arr[i][j]==an[j]){
				grade+=num[j];
			} 
		}
		printf("%d\n",grade);
		grade=0; 
	}
} 
