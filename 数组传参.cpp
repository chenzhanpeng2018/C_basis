#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int f1(int **p,int n)     
{
	//访问a[i][j] -> *((int*)p+i*n+j)  n是列宽  二级指针传参,只此一种访问方式 
	printf("a[1][1]=%d\n",*((int*)p+1*n+1));
	printf("----------------------\n"); 
}
int f2(int(*p)[3],int n)  
{
	printf("a[0][0]=%d\n",**p);
	printf("a[0][1]=%d\n",*(p[0] + 1)); //代表第 i 行 第 j 列
 	printf("a[1][1]=%d\n",*(*(p+1) + 1));
 	printf("a[1][2]=%d\n",*((int *)p +1*n +2));
 	printf("----------------------\n");
}

int f3(int p[][3],int n)  
{
	//
	printf("a[0][0]=%d\n",**p);
	printf("a[0][1]=%d\n",*(p[0] + 1)); //代表第 i 行 第 j 列
 	printf("a[1][1]=%d\n",*(*(p+1) + 1));
 	printf("a[1][2]=%d\n",*((int *)p +1*n +2));
 	printf("----------------------\n");	
}

int main()
{
    int a[2][3]={1,2,3,4,5,6};
	f1((int**)a,3);
	f2(a,3);  //错误：f2(a[2][3]); f2(a[][3]);	
	f3(a,3);  //错误：f2(a[2][3]); f2(a[][3]);

  /*1.函数定义(三种)。
  二维数组,数组指针,二级指针。(都是指针)
  2.调用(一对一，二对二)
  数组指针,二维数组就写一级指针即 直接数组名传参.
  二级指针就写二级指针即 (int**)数组名  //(int**)a 
  3.在函数中操作元素(二级指针传参,只能用第三种方法)
  *(a[i] + j) //代表第 i 行 第 j 列
  *(*(a+i) + j) 
  *((int * )a +i * n +j )//n表示第二维数组长度(列宽)*/
} 
