#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
typedef struct Node {
	int info;
	struct Node *Left;
	struct Node *Right;
	struct Node *Mother;
}TYPE_NODE;
typedef struct Node *TYPE_NODEPTR;

TYPE_NODEPTR MakeT(TYPE_NODEPTR T, int Data);
void DisplayC(TYPE_NODEPTR P);
TYPE_NODEPTR InsertLeft(TYPE_NODEPTR P, int Data);
TYPE_NODEPTR InsertRight(TYPE_NODEPTR P, int Data);
void InOder(TYPE_NODEPTR T);
void PreOder(TYPE_NODEPTR T);
void PostOder(TYPE_NODEPTR T);
TYPE_NODEPTR GotoRoot(TYPE_NODEPTR P);
TYPE_NODEPTR GotoRight(TYPE_NODEPTR P);
TYPE_NODEPTR GotoLeft(TYPE_NODEPTR P);
//TYPE_NODEPTR T,P;o
int main() {
	int push;
	TYPE_NODEPTR T, P;
	T = NULL;
	P = NULL;
	
	printf("----------7----------\n");
	T=MakeT(T,8); InOder(T); 
		printf("\n");
	InsertLeft(T,4); InOder(T);
		printf("\n");
	InsertRight(T,12);InOder(T);
		printf("\n");
	P=T;
	P=GotoLeft(P);
	printf("\n");
	InsertLeft(P,2);InOder(T);
	printf("\n");
	InsertRight(P,6);InOder(T);
	printf("\n");
	P=GotoRoot(P);
	printf("\n");
	P=GotoRight(P);
	printf("\n");
	InsertLeft(P,10);InOder(T);
	printf("\n");
	InsertRight(P,14);InOder(T);
					
			
	
	
	

}

TYPE_NODEPTR MakeT(TYPE_NODEPTR T, int Data) {
	//	TYPE_NODEPTR N;
	T = malloc(sizeof(TYPE_NODE));
	T->info = Data;
	T->Left = NULL;
	T->Mother = NULL;
	T->Right = NULL;
	return T;

}
void DisplayC(TYPE_NODEPTR P) {
	printf("\n %d\n", P->info);
}
TYPE_NODEPTR InsertLeft(TYPE_NODEPTR P, int Data) {
	TYPE_NODEPTR N;
	N = MakeT(P, Data);
	N->Mother = P;
	P->Left = N;
	//DisplayC(N);
	//	P=N;
		return P;
}
TYPE_NODEPTR InsertRight(TYPE_NODEPTR P, int Data) {
	TYPE_NODEPTR N;
	N = MakeT(P, Data);
	N->Mother = P;
	P->Right = N;
//	DisplayC(N);
	//	P=N;
		return P;
}
void InOder(TYPE_NODEPTR T) {
	if (T != NULL) {
		InOder(T->Left);
		printf("%d ", T->info);
		InOder(T->Right);
	}
}
void PreOder(TYPE_NODEPTR T) {
	if (T != NULL) {
		printf("%d ", T->info);
		PreOder(T->Left);
		PreOder(T->Right);
	}
}
void PostOder(TYPE_NODEPTR T) {
	if (T != NULL) {

		PostOder(T->Left);
		PostOder(T->Right);
		printf("%d ", T->info);
	}
}
TYPE_NODEPTR GotoRoot(TYPE_NODEPTR P) {
	P = P->Mother;
	return P;
}
TYPE_NODEPTR GotoRight(TYPE_NODEPTR P) {
	P = P->Right;
	return P;
}
TYPE_NODEPTR GotoLeft(TYPE_NODEPTR P) {
	P = P->Left;
	return P;
}
