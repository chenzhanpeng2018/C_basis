//编写程序数一下 1到 100 的所有整数中出现多少个数字9
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