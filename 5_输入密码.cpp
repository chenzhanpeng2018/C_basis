#include<stdio.h>
#include<string.h>
int main()
{
	int i=0;
	char str[]="abc123";
	char str1[20];
    while (i<3){
    	printf("���������룺\n");
    	scanf("%s",&str1);
    	if(strcmp(str,str1)==0)
    	{
    		printf("��½�ɹ���\n");
		}
		else
		{
			printf("��½ʧ�ܣ����������룡\n");
		}
		i++;
	}	
}  
