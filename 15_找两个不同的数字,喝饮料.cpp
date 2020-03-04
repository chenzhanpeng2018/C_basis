#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

//1.一个数组中只有两个数字是出现一次，
//其他所有数字都出现了两次。
//找出这两个只出现一次的数字，编程实现。
void Found(int str[], int num)
{
	//先选择排序
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

	//遍历找
	 i = 0;
	for (; i < num; i++)
	{
		if (str[i] != str[i - 1] && str[i] != str[i + 1])
			printf("%d ",str[i]);
	}

}



//2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
//给20元，可以多少汽水。
int Vase(int money)
{
	int count = 0;//总数
	int empty = 0;//空瓶子
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
