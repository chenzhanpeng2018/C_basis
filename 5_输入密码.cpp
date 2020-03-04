#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	char str[]="abc123";
	char str1[20];
    while (i<3){
    	printf("ÇëÊäÈëÃÜÂë£º\n");
    	scanf("%s",&str1);
    	if(strcmp(str,str1)==0)
    	{
    		printf("µÇÂ½³É¹¦£¡\n");
		}
		else
		{
			printf("µÇÂ½Ê§°Ü£¬ÇëÖØÐÂÊäÈë£¡\n");
		}
		i++;
	}	
}  
