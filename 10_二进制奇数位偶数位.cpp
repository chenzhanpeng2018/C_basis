#include<stdio.h>
#include<windows.h>
 
int main()
{
	int num = 20;
	int i = 0;
	for (i = 31; i >=1; i -= 2)   //���Ϊ��λ 
	{
		printf("%d ", ((num >> i) & 1));
	}
	//��ߵ�ż��λ�����ƶ�31λ�����һλ�����ż��λ�����ƶ�1λ�����һλ
	printf("\n");
	for (i = 30; i >=0; i -= 2)
	{
		printf("%d ", ((num >> i) & 1));
	}
	//��ߵ�����λ�����ƶ�30λ�����һλ�����������λ�����ƶ�0λ�����һλ
	printf("\n");
	system("pause");
	return 0;
}
