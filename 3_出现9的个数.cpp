//��д������һ�� 1�� 100 �����������г��ֶ��ٸ�����9
#include<stdio.h>
int main()
{
	int i, num = 0;
	for (i = 1; i <= 100; i++)
	{
		int a = i % 10;
		int b = i / 10% 10;
		if (a == 9){
			num++;
		}
		 if (b == 9){
			num++;
		}
	}
    printf("%d", num);
	getchar();
	return 0;
}