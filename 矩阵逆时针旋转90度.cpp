#include<stdio.h>

int main()
{
   	int a[3][3]={0};
   	int i=0;
	for(;i<3;i++){
		int j=0;
		for(;j<3;j++){
		  	scanf("%d",&a[i][j]);	
		}	
	}
	printf("\n");
	i=2;
	for(;i>=0;i--){
		int j=0;
	  	for(;j<3;j++){
			printf("%-3d ",a[j][i]);	
		}	
		printf("\n"); 
	}
	
} 
