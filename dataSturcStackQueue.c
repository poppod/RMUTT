#include<stdio.h>

#define SIZE 5

void init(int st[]);
void print(int st[]);
int isFull(void);
int isEmpty(void);
int push(int st[], char item);
int pop(int st[]);
int insert(int st1[], char item);
int delete(int st1[]);
void init1(int st1[]);
void print1(int st1[]);
int Rear = 0;
int top = 0;

int main() {

	int st[SIZE];
	int st1[SIZE];
	int i, j, k;

	init(st);
	init(st1);

	for (i = 1; i < 7; i++) {

		if (isFull())

			printf("stack full, cannot push %d\n", i);

		else
			push(st, i);

	}

	print(st);

	for (j = 1; j < 6; j++) {

		if (isEmpty())

			printf("stack empty, cannot pop\n");

		else {

			printf("top is %d ", top);
			insert(st1, top);
			printf("pop %d \n", pop(st));


		}
	}

	

	
	printf("Move data from st to st1\n");
	print1(st1);
	for (k = 1; k < 6; k++) {

		printf(" Rear (Top) is %d data = [%d]", Rear, st1[Rear - 1]);
		printf(" ,Delete (pop) data %d \n", delete(st1));

	}
}

void init(int st[]) {
	int n;
	for (n = 0; n<6; n++) {

		st[n] = 0;
		top = 0;
	}



}
void print(int st[]) {
	int i;

	printf("s:");
	for (i = 4; i >= 0; i--) {
		printf("%d", st[i]);
	}
	printf("\n");

}
int isFull(void) {
	return top == 5;

}
int isEmpty(void) {
	return top == 0;
}
int push(int st[], char item) {

	st[top++] = item;



	return 0;
}

int pop(int st[]) {

	return st[--top];
}
void init1(int st1[]) {
	int n;
	for (n = 0; n<6; n++) {

		st1[n] = 0;
		Rear = 0;
	}
}

void print1(int st1[])
{
	int i;

	printf("s1:");
	for (i = 4; i >= 0; i--) {
		printf("%d", st1[i]);
	}
	printf("\n");
}

int insert(int st1[], char item) {
		st1[Rear++] = item;
	

	return 0;
}
int delete (int st1[]) {
	return st1[--Rear];
}
