#include<stdio.h>
#include<windows.h>
#include<assert.h>
#pragma warning (disable: 4996)

//1.ʵ��strcpy
//2.ʵ��strcat
//3.ʵ��strstr
//4.ʵ��strchr
//5.ʵ��strcmp
//6.ʵ��memcpy
//7.ʵ��memmove

void My_strcpy(char str1[],char str2[])
{
	while (*str2!= '\0')
	{
		*str1 = *str2;
		str1++,str2++;
	}
	*str1 = *str2;   //��б��0
}

void My_strcat(char str1[], char str2[])
{
	while (*str1 != '\0')
	{
		str1++;             //��str1��ָ���ȷŵ���б��0��λ��
	}

	while (*str2 != '\0')
	{
		*str1 = *str2;
		str1++, str2++;
	}
	*str1 = *str2;     //��б��0
}

char *My_strstr(char str1[], char str2[])  //��1������2
{
	assert(str1);
	assert(str2);
    
	char *cp = str1;
	char *substr = str2;
	char *s1 = NULL;

	if (*str2 == '\0')
		return NULL;

	while (*cp){    //str1����
		s1 = cp;
		substr = str2;
		while (*s1&&*substr && (*s1 == *substr)){
			s1++;
			substr++;
		}
		if (*substr == '\0'){
			return cp;
		}
		cp++;
	}

}

char *My_strchr(char str1[], char c)
{
	assert(str1);
	if (c == NULL)
		return NULL;
	char *cp = str1;
	while (*cp){
		if (*cp == c){
			return cp;
		}
		cp++;
	}
	return NULL;
}

int My_strcmp(char str1[], char str2[])
{
	while (*str1!='\0')
	{
		if (*str1 > *str2)
		{
			return 1;
			break;
		}
		if (*str1 < *str2)
		{
			return -1;
			break;
		}
		str1++, str2++;
	}
	return 0;
}

void *My_memcpy(void *str1,const void *str2,int num)
{
	assert(str1);
	assert(str2);

	char *p = (char*)str1;
	char *q = (char*)str2;
	while (num--){
		*p = *q;
		p++, q++;
	}
	*p = '\0';
	return str1;
}

void *My_memmove(void *str1, const void *str2, int num)
{
	assert(str1);
	assert(str2);
	char *p = (char*)str1 ;  
	char *q = (char*)str2 ;
	
	if (p>q&&p < q + num){
		//��������
		p = (char*)str1+num-1;  //ָ��β��
		q = (char*)str2+num-1;
		while (num--){
			*p = *q;
			p--, q--;
		}
		//*p = '\0';
	}
	else{
			while (num--){
			*p = *q;
			p++, q++;
	   }
			//*p = '\0';
	}
	return str1;
}


int main()
{
	char str1[1024] = "hello world!";
	char str2[1024] = "lo"; //I am a student
	//My_strcpy(str1,str2);   //�ַ�������
	//My_strcat(str1,str2);   //�ַ���ƴ��
	//printf("%s\n",My_strstr(str1,str2)); //strstr
	//printf("%s\n", My_strchr(str1, 'o') ); //strchr
	//printf("%d\n", strcmp(str1, str2));//�ַ����Ƚ�

	//char *str4 = "hello!";
	//char str3[1024];
	//printf("%s\n", My_memcpy(str3, str4, 3)); //���ֽڿ���
	My_memmove(str1+1, str1, strlen(str1)+1); 
	printf("%s\n",str1);
	//printf("%s\n", str1);
	system("pause");
	return 0;
}
