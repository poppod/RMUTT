#include <stdio.h>
#include <conio.h>
#define SIZE 5


int main(){
	int a[SIZE];
	initArr(SIZE);
	
	
	
}
 void initArr(int a[]){
 	int i;
 	i=a-1;
 	if (a>=0){
 		a[i]=a-1
 		initArr(a[i]);
	 }
 	
 }
 
