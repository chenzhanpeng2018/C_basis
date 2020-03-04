//3.编程实现：
//一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
//请找出这个数字。（使用位运算）
#include<stdio.h>
int main()
{
	int a[]={1,2,4,5,3,1,2,3,5,4,9};
	int num=sizeof(a)/sizeof(a[0]);
    
    int data=a[0];
	int i=1;
	for(;i<num;i++)
	{
		printf("%d ",data);
		data^=a[i];                        //加多少减多少，剩下的就是单独的元素 
	}
	printf("\n");
	printf("%d",data);	
}



