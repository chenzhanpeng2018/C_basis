#include<stdio.h>
#include<stdlib.h>
int Strlen(char* str){
	int count = 0;  //��ʾ�ַ�Ԫ�ظ���
	//�����ָ����н�����,ָ����������ͨ����˵����һ�������,
	//�����þ��Ǹ��ݷ�����ҵ������������
	//'\0'ָASCIIֵΪ0������
	while (*str != '\0' ){
		++count;
		++str;
	}
	return count;
}
int main()
{
	//"hello"�ַ���ռ��6���ֽڿռ�,�����ַ�������Ϊ5û�м���""
	printf("%d\n", Strlen("hello"));
	system("pause");
	return 0;
}



//�ݹ�
#include<stdio.h>
#include<stdlib.h>
int Strlen(char* str){
	  //��ʾ�ַ�Ԫ�ظ���
	//�����ָ����н�����,ָ����������ͨ����˵����һ�������,
	//�����þ��Ǹ��ݷ�����ҵ������������
	//'\0'ָASCIIֵΪ0������
	while (*str == '\0' ){
		//strָ�����һ���յ��ַ���
		return 0;
	}
		//strָ��Ĳ���һ�����ַ���,��ǰ�ַ����ַ����еĵ�һ��Ԫ��
	return  1+ Strlen(str + 1);
}
int main()
{
	//"hello"�ַ���ռ��6���ֽڿռ�,�����ַ�������Ϊ5û�м���"\0"
	printf("%d\n", Strlen("hello"));
	system("pause");
	return 0;
} 
