#include <stdio.h>
#include <conio.h>
//Recursive
int main()
{
	int n;
	printf("Input n : ");
	scanf_s("%d", &n);
	sumToN(n); 
	
}
int sumToN(int n) {
	int sum;
	if (n!= 0) {
     sum=n+sumToN(n-1);
	//return sum;
	}
	else { 
		sum = n;
		//return sum;
	}
	printf ("\n %d \n ",sum);
	return sum;
	
	
    


}
