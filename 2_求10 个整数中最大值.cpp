//求10个整数中最大值。
#include<stdio.h>
int main()
{
	int a[10]={11,22,33,44,55,66,77,99,88,0};
	int max=0;
	int num=sizeof(a)/sizeof(a[0]);
	int i;
	for(i=0;i<=num;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("最大数为:%d\n",max);
}
