#include<stdio.h>
#include<windows.h>
#pragma warning (disable:4996)
#define m 100
//宏定义一个最大值(m)
//用多大我就循环多少次(N,M) 
 
int main()
{
	int N, M;
	scanf("%d%d", &N, &M);     //人数，题数 
    int num[m];
	int an[m];
	int i = 0;
	int j = 0;
	for (; i<M; i++){        //分值 
		scanf("%d", &num[i]);
	}

	for (i = 0; i<M; i++){           //答案 
		scanf("%d", &an[i]);
	}
	int arr[m][m];      //学生和答案 

	for (i=0; i<N; i++){
		for (j=0; j<M; j++){
			scanf("%d", &arr[i][j]);
		}
	}

	int grade = 0;//总分 
	for (i = 0; i<N; i++){
		for (j = 0; j<M; j++){
			if (arr[i][j] == an[j]){
				grade += num[j];
			}
		}
		printf("%d\n", grade);
		grade = 0;
	}
	system("pause");
	return 0;
}
