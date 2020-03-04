//¼ÆËã1/1-1/2+1/3-1/4+1/5 ..... + 1/99 - 1/100 µÄÖµ¡£

#include<stdio.h>

int main()
{
	float num1=0.0,num2=0.0;
	float i,j,k=1.0;
	for(i=1;i<=99;i+=2)
	{
		num1+=k/i;
	}
	printf("%f\n",num1);
	for(j=2;j<=100;j+=2)
	{
		num2+=k/j;
	}
	printf("%f\n",num2);
	printf("%f\n",num1-num2);
	getchar();
	return 0;
}
