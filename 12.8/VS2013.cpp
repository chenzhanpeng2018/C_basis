#include<stdio.h>
#include<windows.h>
#pragma warning (disable:4996)
#define m 100
//�궨��һ�����ֵ(m)
//�ö���Ҿ�ѭ�����ٴ�(N,M) 
 
int main()
{
	int N, M;
	scanf("%d%d", &N, &M);     //���������� 
    int num[m];
	int an[m];
	int i = 0;
	int j = 0;
	for (; i<M; i++){        //��ֵ 
		scanf("%d", &num[i]);
	}

	for (i = 0; i<M; i++){           //�� 
		scanf("%d", &an[i]);
	}
	int arr[m][m];      //ѧ���ʹ� 

	for (i=0; i<N; i++){
		for (j=0; j<M; j++){
			scanf("%d", &arr[i][j]);
		}
	}

	int grade = 0;//�ܷ� 
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
