#include <iostream>  
using namespace std; 
 
//�ݹ���������ƺ��� 
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
//�ݹ�����˽��� 
int BinaryRecursion_8(int n) 
{ 
 int a; 
 a=n%8; 
 n=n/8; 
 if (n==0) 
  ; 
 else
 BinaryRecursion(n); 
 cout<<a; 
}  
 
int main() 
{ 
 	int c; 
	printf("Please Enter# ");
	scanf("%d",&c);
 	cout<<"BinaryRecursion(c)��"; 
 	BinaryRecursion(c); 
 	cout<<endl;
 	cout<<"BinaryRecursion_8(c)��"; 
 	BinaryRecursion_8(c);

}

