/*编写一个函数reverse_string(char * p)（递归实现）
实现：将参数字符串中的字符反向排列。
要求：不能使用C函数库中的字符串操作函数。*/
 
#include <stdio.h>
 
char * reverse_string(char *p)
{
	int n = 0;
	char temp;
	char *q;
	//用q保存开始的p
	q = p;
	//计算出字符串的大小
	while( *p != 0 )
	{
		n++;
		p++;
	}
	//保存第一个字符到一个变量中，
	//最后一个放到第一个的位置，
	//最后一个位置放'\0'，以此类推
	if( n > 1)
	{
		temp = q[0];
		q[0] = q[n-1];
		q[n - 1] = '\0';
		reverse_string( q+1 );
		q[n - 1] = temp;
	}
	return q;
}
 
int main()
{
	char p[] = "dandanwa";
	printf("原字符串是：%s\n",p);
	printf("翻转后的字符串是：%s\n",reverse_string(p));
	return 0;
}
