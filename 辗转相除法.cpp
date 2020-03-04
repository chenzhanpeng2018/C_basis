#include<stdio.h>

int Gcd(int a,int b)  //最大公约数 
{
	return b==0?a:Gcd(b,a%b);
}

int main()
{
	int a,b;
	scanf("%d%d",&a,&b); 
  	int key=Gcd(a,b);
  	printf("最大公约数:%d\n",key);
	printf("最小公倍数:%d\n",a*b/key);   //最小公倍数等于两数乘积除以最大公约数 
} 
