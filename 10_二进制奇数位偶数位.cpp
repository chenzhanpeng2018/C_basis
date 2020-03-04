#include<stdio.h>
#include<windows.h>
 
int main()
{
	int num = 20;
	int i = 0;
	for (i = 31; i >=1; i -= 2)   //左边为高位 
	{
		printf("%d ", ((num >> i) & 1));
	}
	//最高的偶数位向右移动31位到最后一位，最低偶数位向右移动1位到最后一位
	printf("\n");
	for (i = 30; i >=0; i -= 2)
	{
		printf("%d ", ((num >> i) & 1));
	}
	//最高的奇数位向右移动30位到最后一位，最低奇数数位向右移动0位到最后一位
	printf("\n");
	system("pause");
	return 0;
}
