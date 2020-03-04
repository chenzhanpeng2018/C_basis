#include <stdio.h>
#include <stdlib.h>
int Digitsum(int n)
{
	if (n<10)
	{
		return n;
	}
	
	return  n%10+Digitsum(n/10);
}


int main()
{
	int n;
	scanf("%d", &n);
	printf("%d\n", Digitsum(n));
	system("pause");
}

