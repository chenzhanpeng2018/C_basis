#include<iostream>
#define M 77
int main()
{
	int a[10] = { 11, 22, 33, 44, 55, 66, 77, 88, 99, 100 };
	int num = sizeof(a) / sizeof(a[0]); //���鳤��=�ܴ�С/һ��Ԫ�صĴ�С
	int left = 0;
	int right = num;
	int i = 0;
	for(; i <= num; i++)
	{
		int mid = (right + left) / 2;
		if(M>a[mid])
		{
			left = mid + 1;
		}
		else if (M < a[mid])
		{
			right = mid - 1;
		}
		else
		{
			printf("�±�Ϊ��%d\n",mid);
			break;
		}
	}
	if (left >= right)
	{
		printf("Not found!\n");
	}
	system("pause");
	return 0;
}