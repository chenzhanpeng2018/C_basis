#include<iostream>
using namespace std;
int main()
{
	int n;//״̬����Ŀ 
	//int m;//�ս����Ŀ
	int middle;//�м�״̬��Ŀ 
	int end;//��̬��Ŀ 
	
	cout<<"������״̬������"<<endl;
	cin>>n;
	char start[n];
	
	cout<<"�����뿪ʼ״̬��"<<endl;
	cin>>start[0];
	
	cout<<"�������м�״̬������"<<endl;
	cin>>middle;
	cout<<"�����������м�״̬��"<<endl;
	for(int i=1;i<=middle;i++)
	{
		cin>>start[i];
	}
	
	end=n-middle-1; //��̬��Ŀ=����-�м�̬-��̬
	 
	cout<<"��������̬��"<<endl;
	for(int j=0;j<end;j++)
	{
		cin>>start[middle+1+j];
	}
	
//	cout<<"�������ս��������"<<endl;
//	cin>>m;
//	char Vt[m];
//	cout<<"�����������ս����"<<endl;
//	for(int k=0;k<m;k++)
//	{
//	    cin>>Vt[k];	
//	} 
//	cout<<endl;
	
	
	char F[n][n]={-1};
	int temp;
	for (int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			printf("%c״̬����ֱ���Ƴ�%c״̬�𣿿�������1������������0��\n",start[i],start[j]);
	        cin>>temp;
			if(temp==1)
			{
			 cout<<"������ת���ַ�"<<endl;
			 cin>>F[i][j];	
			}
			if (temp==0)
			{
			  continue;	
			}	    
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
 } 
