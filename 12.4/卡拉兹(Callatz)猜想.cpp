#include<stdio.h>
 
int Callatz(int n)
{
    int count=0;
    while(n!=1){
    	if(0==n%2){
    		n=n/2;
		}
		else{
			n=(3*n+1)/2;
		}
		count++;
	}
	
	return count;	
} 
 
int main()
{
	printf("%d",Callatz(3));
} 
