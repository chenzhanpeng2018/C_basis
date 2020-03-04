#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
int Fib(int n) {
	int a[3] = { 0, 1 };
	if (a[0] == n || a[1] == n)
	{
		return a[0];
	}
	while (1)
	{
		a[2] = a[0] + a[1];
		if (a[2] >= n)
		{
			if (a[2] - n < n- a[1])
			{
				return a[2] - n;
			}
			else
			{
				return n-a[1];
			}
				
			//return(a[2] - n) < (a[2 - 1] - n) ? (a[2] - n) : (a[2 - 1] - n);
		}
				a[0] = a[1];
				a[1] = a[2];
	}	
}
int main()
{
	printf("%d\n", Fib(19));
	system("pause");
	return 0;
}
