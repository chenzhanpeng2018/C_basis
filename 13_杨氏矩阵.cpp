#include <stdio.h>
#include <windows.h>
/*
	//���Ͼ���
	��һ����ά����.
	�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
	�������������в���һ�������Ƿ���ڡ�
	ʱ�临�Ӷ�С��O(N);
*/
#define ROW 4
#define COL 4
//дһ��ѭ����������
int Search(int arr[ROW][COL], int value) {
	int i = 0;
	int j = COL - 1;
	int tmp = arr[i][j];
	while (1) {
		if (value == tmp) {
			return 1;
		} else if (value > tmp && i < ROW - 1) {
			tmp = arr[++i][j];
		} else if (value < tmp && j > 0) {
			tmp = arr[i][--j];
		} else {
			return 0;
		}
	}
}

int main() {
	int arr[ROW][COL] = {
		{1, 2, 3, 4},
		{2, 3, 6, 9},
		{3, 4, 7, 12}
	};
	int num = 0;
	printf("��������Ҫ���ҵ�����\n");
	scanf("%d", &num);
	if (Search(arr, num) == 1) {
		printf("���ҳɹ�!!!\n");
	} else {
		printf("����ʧ��!!!\n");
	}

	return 0;
}

