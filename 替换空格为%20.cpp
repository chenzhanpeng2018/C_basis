#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
 void replaceSpace(char *str,int length) {
        int count=0;
        for(int i=0;i<length;i++){
            if(str[i]==' ')
                count++;
        }
        for(int i=length-1;i>=0;i--){
            if(str[i]!=' '){
                str[i+2*count]=str[i];
            }
            else{
                count--;
                str[i+2*count]='%';
                str[i+2*count+1]='2';
                str[i+2*count+2]='0';
            }
        }
    }
    
int main()
{
	char str[1024] = "we are sudent";
	int len = strlen(str);
	replaceSpace(str, len);
	printf("%s", str);
	system("pause");
	return 0;
}
