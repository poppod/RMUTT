#include <stdio.h>
#include <conio.h>
 
int main()
{
	int n;
	printf ("Input n : ");
	scanf("%d",&n);
	sumToN(n);
 } 
 int sumToN(int n){
 	int sum;
 	sum =0;
 	while(n){
 		sum=sum+n;
 		n--;
	 }
 	printf("SumToN = %d",sum);
 	return sum;
 }
