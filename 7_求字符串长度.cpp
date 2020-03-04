#include<stdio.h>
#include<stdlib.h>
int Strlen(char* str){
	int count = 0;  //表示字符元素个数
	//对这个指针进行解引用,指针变量保存的通俗来说就是一个房间号,
	//解引用就是根据房间号找到房间里的内容
	//'\0'指ASCII值为0的数字
	while (*str != '\0' ){
		++count;
		++str;
	}
	return count;
}
int main()
{
	//"hello"字符串占用6个字节空间,但是字符串长度为5没有计算""
	printf("%d\n", Strlen("hello"));
	system("pause");
	return 0;
}



//递归
#include<stdio.h>
#include<stdlib.h>
int Strlen(char* str){
	  //表示字符元素个数
	//对这个指针进行解引用,指针变量保存的通俗来说就是一个房间号,
	//解引用就是根据房间号找到房间里的内容
	//'\0'指ASCII值为0的数字
	while (*str == '\0' ){
		//str指向的是一个空的字符串
		return 0;
	}
		//str指向的不是一个空字符串,当前字符是字符串中的第一个元素
	return  1+ Strlen(str + 1);
}
int main()
{
	//"hello"字符串占用6个字节空间,但是字符串长度为5没有计算"\0"
	printf("%d\n", Strlen("hello"));
	system("pause");
	return 0;
} 
