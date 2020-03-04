#include<stdio.h>
int P(int n, int k)
{
	if (k == 0)
	{
		return 0;
	}
	else if (k == 1)
	{
		return n;
	}
	else
	{
		return n*P(n, k - 1);
	}
}
int main()
{
	int n = 3;
	int k = 3;
	printf("%d\n", P(n,k));
	return 0;
}
 
