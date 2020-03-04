#include<stdio.h>


int main()
{
   	int N,M;
   	scanf("%d%d",&N,&M);     //人数，题数 
   	int num[M];
	int an[M]; 
   	int i=0;	int j=0;
	   for(;i<M;i++){        //分值 
	   	scanf("%d",&num[i]);
	   } 
	i=0;
	for(;i<M;i++){           //答案 
		scanf("%d",&an[i]);
	}                
   	int arr[N][M]={0};      //学生和答案 
    i=0;
	for(;i<N;i++){
	
		for(j=0;j<M;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	int grade=0;//总分 
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
