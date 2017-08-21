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
//TYPE_NODEPTR T,P;
int main() {
	int push;
	TYPE_NODEPTR T, P;
	T = NULL;
	P = NULL;
	while (1) {
		printf("\n###### MENU ######\n");
		printf("1.Create Root Node\n");
		printf("2.Insert Left Node\n");
		printf("3.Insert Right Node\n");
		printf("4.Go To Left\n");
		printf("5.Go To Right \n");
		printf("6.Go To Root Node\n");
		printf("7.Display Current Node\n");
		printf("8.Pre-Order Traversal\n");
		printf("9.In-Order Traversal\n");
		printf("10.Post-Order Traversal\n");
		printf("Enter Menu :");
		scanf_s("%d", &push);
		switch (push) {
		case 1: { if (T == NULL) {
			printf("\nEnter Data:");
			scanf_s("%d", &push);
			T = MakeT(T, push);
			P = T;
		}
				else printf("\nNode Inused!!!!\n");
		}break;
		case 2: {
			printf("\n Enter Data:");
			scanf_s("%d", &push);
			InsertLeft(P, push);
		}break;
		case 3: {
			printf("\n Enter Data:");
			scanf_s("%d", &push);
			InsertRight(P, push);
		}break;
		case 4: P = GotoLeft(P); break;
		case 5: P = GotoRight(P); break;
		case 6:P = GotoRoot(P); break;
		case 7:DisplayC(P); break;
		case 8:PreOder(T); break;
		case 9:InOder(T); break;
		case 10:PostOder(T); break;
		}
	}

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
	DisplayC(N);
	//	P=N;
		return P;
}
TYPE_NODEPTR InsertRight(TYPE_NODEPTR P, int Data) {
	TYPE_NODEPTR N;
	N = MakeT(P, Data);
	N->Mother = P;
	P->Right = N;
	DisplayC(N);
	//	P=N;
		return P;
}
void InOder(TYPE_NODEPTR T) {
	if (T != NULL) {
		InOder(T->Left);
		printf(" %d ", T->info);
		InOder(T->Right);
	}
//	printf("\n");
}
void PreOder(TYPE_NODEPTR T) {
	if (T != NULL) {
		printf(" %d ", T->info);
		PreOder(T->Left);
		PreOder(T->Right);
	}
//	printf("\n");
}
void PostOder(TYPE_NODEPTR T) {
	if (T != NULL) {

		PostOder(T->Left);
		PostOder(T->Right);
		printf(" %d ", T->info);
	}
//	printf("\n");
}
TYPE_NODEPTR GotoRoot(TYPE_NODEPTR P) {

	if (P->Mother==NULL){
		printf("\n\nNode Inused!!!!\n\n");
	}
	else{
		P = P->Mother;
	}
	
	return P;
}
TYPE_NODEPTR GotoRight(TYPE_NODEPTR P) {
	if (P->Right==NULL){
		printf("\n\nNode Inused!!!!\n\n");
	}
	else {
	P = P->Right;	
	}
	return P;
}
TYPE_NODEPTR GotoLeft(TYPE_NODEPTR P) {
	if (P->Left==NULL){
		printf("\n\nNode Inused!!!!\n\n");
	}
	else {
		P = P->Left;
	}
	return P;
}
