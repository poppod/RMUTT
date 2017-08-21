#include <stdio.h>
#include <conio.h>
 //Recursive
int main()
{
	int n;
	printf ("Input n : ");
	scanf("%d",&n);
	//sumToN(n); 
	printf("%d",sumToN(n-1)+sumToN(n-2));
 } 
 int sumToN(int n){
 	
	 if(n==0) {
	 	return 0;	
	 }
 	if (n==1){
 		return 1;
	 }
	 
	
 	return sumToN(n-1)+sumToN(n-2);
 
	 
	 
 }
