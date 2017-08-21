#include<stdio.h>
#include<conio.h>
#define SIZE 5
int a[SIZE];
int n, i;

void initArr(int n);
void print(int a[]);
void printR(int a[], int i);

int main()
{
	initArr(SIZE -1);
	print(a);
	printf("\n");
	printR(a, SIZE - 1);
	_getch();
}


void initArr(int n)
{
	if (n >= 0)
	{
		initArr(n - 1);
		a[n] = n;
	}
}
void print(int a[])
{
	for (i = 0; i <= SIZE-1; i++)
	{
		printf("%d ", a[i]);
	}
}
void printR(int a[], int i)
{
	if (i >= 0)
	{
		printR(a, i - 1);
		printf("%d ", a[i]);
	}
}
