#include<iostream>
using namespace std;
int BinaryRecursion(int n) 
{ 
 int a; 
 a=n%2;
 n=n>>1; 
 //n=n/2; 
 if (n==0) 
  ; 
 else
 BinaryRecursion(n); 
 cout<<a; 
}
int count_one_bits(unsigned int value)
{
	int temp=0;
	while(value!=0)
	{
	  if(value%2==1)
	  {
	    temp++;
	  }	
	  value=value/2;
	} 
	 return temp;
}

int main()
{
	int value;
	printf("Please Enter# ");
	scanf("%d",&value);
	printf("%d:",value); 
 	BinaryRecursion(value); 
 	cout<<endl;
  	int num=count_one_bits(value);
    printf("二进制中1的个数为：%d",num);
    
	return 0;
}
 
