#define _CRT_SECURE_NO_WARNNINGS 1
#include<stdio.h>
void year(int i);

int main()
{
	//�ж�1000~2000֮�������
	int i;
	for (i = 1000; i <= 2000; i++)
	{
		year(i);
	}

	getchar();
}

void year(int i)
{
	if (i % 4 == 0 && i % 100 != 0 || i % 400 == 0)
	{
		printf("%d�������ꡣ\n", i);
	}

}

