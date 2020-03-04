#include<iostream>
using namespace std;
int main()
{
	int n;//状态总数目 
	//int m;//终结符数目
	int middle;//中间状态数目 
	int end;//终态数目 
	
	cout<<"请输入状态总数："<<endl;
	cin>>n;
	char start[n];
	
	cout<<"请输入开始状态："<<endl;
	cin>>start[0];
	
	cout<<"请输入中间状态总数："<<endl;
	cin>>middle;
	cout<<"请依次输入中间状态："<<endl;
	for(int i=1;i<=middle;i++)
	{
		cin>>start[i];
	}
	
	end=n-middle-1; //终态数目=总数-中间态-初态
	 
	cout<<"请输入终态："<<endl;
	for(int j=0;j<end;j++)
	{
		cin>>start[middle+1+j];
	}
	
//	cout<<"请输入终结符总数："<<endl;
//	cin>>m;
//	char Vt[m];
//	cout<<"请依次输入终结符："<<endl;
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
			printf("%c状态可以直接推出%c状态吗？可以输入1，不可以输入0。\n",start[i],start[j]);
	        cin>>temp;
			if(temp==1)
			{
			 cout<<"请输入转化字符"<<endl;
			 cin>>F[i][j];	
			}
			if (temp==0)
			{
			  continue;	
			}	    
		}
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
 } 
