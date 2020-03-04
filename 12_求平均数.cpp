//2.不使用（a+b）/2这种方式，求两个数的平均值。
#include<stdio.h>
int main()

{
	int num;
	int a=20;
	int b=10;
	num=(a&b)+(a^b)/2;
	printf("%d",num);
} 

