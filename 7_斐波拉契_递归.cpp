#include<stdio.h>
int F(int i)
{
	if(i==0)
	{
	return 0;
    }
    else if(i==1)
    {
	return 1;
    }
   return F(i-1)+F(i-2);
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",F(n));
}
