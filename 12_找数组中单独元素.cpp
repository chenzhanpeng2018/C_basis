//3.���ʵ�֣�
//һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
//���ҳ�������֡���ʹ��λ���㣩
#include<stdio.h>
int main()
{
	int a[]={1,2,4,5,3,1,2,3,5,4,9};
	int num=sizeof(a)/sizeof(a[0]);
    
    int data=a[0];
	int i=1;
	for(;i<num;i++)
	{
		printf("%d ",data);
		data^=a[i];                        //�Ӷ��ټ����٣�ʣ�µľ��ǵ�����Ԫ�� 
	}
	printf("\n");
	printf("%d",data);	
}



