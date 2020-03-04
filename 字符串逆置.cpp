#include<stdio.h>
#include<windows.h>
#pragma warning (disable:4996)

void Reserve(char *p, char *q)
{
	while (p<q)
	{
		*p ^= *q;
		*q ^= *p;
		*p ^= *q;
		p++, q--;
	}
}

void S(char str[])
{
    char *p = str;
	char *q = str;
	while (*q!='\0')
	{
		if (*q != ' ')
		{
			q++;
		}
		else
		{
			Reserve(p, q - 1);
			p = q + 1;
			q = p;
		}
	}
	Reserve(p, q - 1);
	Reserve(str, q - 1);
}

int main()
{
	char str[1024];
	//char str[1024]="I like beijing.";
	//scanf("%s", &str);
	gets(str);
	S(str);
	printf("%s\n", str);
	system("pause");
	return 0;
}
