#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

//1.һ��������ֻ�����������ǳ���һ�Σ�
//�����������ֶ����������Ρ�
//�ҳ�������ֻ����һ�ε����֣����ʵ�֡�
void Found(int str[], int num)
{
	//��ѡ������
	int i = 0;
	for (; i < num-1; i++)
	{
		int flag = 1;
		int j = 0;
		for (; j < num-i-1; j++)
		{
			if (str[j] > str[j+1])
			{
				str[j] ^= str[j+1];
				str[j + 1] ^= str[j];
				str[j] ^= str[j + 1];
				flag = 0;
			}
		}
		if (flag){
			break;
		}
	}
	//int k = 0;
	//for (; k < num; k++)
	//{
	//		printf("%d ", str[k]);
	//}

	//������
	 i = 0;
	for (; i < num; i++)
	{
		if (str[i] != str[i - 1] && str[i] != str[i + 1])
			printf("%d ",str[i]);
	}

}



//2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
//��20Ԫ�����Զ�����ˮ��
int Vase(int money)
{
	int count = 0;//����
	int empty = 0;//��ƿ��
	count = money;
	empty = money;
	while (empty>= 2)
	{
		count += empty/2;
		empty = empty/2+empty%2;
	}
	return count;
}

int main()
{
	//printf("%d",Vase(20));
	int str[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4, 5, 6, 7 };
	int num = sizeof(str) / sizeof(str[0]);
	//printf("%d", num);
	Found(str,num);
	system("pause");
	return 0;
}
