/*��дһ������reverse_string(char * p)���ݹ�ʵ�֣�
ʵ�֣��������ַ����е��ַ��������С�
Ҫ�󣺲���ʹ��C�������е��ַ�������������*/
 
#include <stdio.h>
 
char * reverse_string(char *p)
{
	int n = 0;
	char temp;
	char *q;
	//��q���濪ʼ��p
	q = p;
	//������ַ����Ĵ�С
	while( *p != 0 )
	{
		n++;
		p++;
	}
	//�����һ���ַ���һ�������У�
	//���һ���ŵ���һ����λ�ã�
	//���һ��λ�÷�'\0'���Դ�����
	if( n > 1)
	{
		temp = q[0];
		q[0] = q[n-1];
		q[n - 1] = '\0';
		reverse_string( q+1 );
		q[n - 1] = temp;
	}
	return q;
}
 
int main()
{
	char p[] = "dandanwa";
	printf("ԭ�ַ����ǣ�%s\n",p);
	printf("��ת����ַ����ǣ�%s\n",reverse_string(p));
	return 0;
}
