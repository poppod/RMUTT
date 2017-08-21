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
int addB(TYPE_NODEPTR T, int Data);
int BstSearch(TYPE_NODEPTR T, int Data);
//TYPE_NODEPTR T,P;
int main() {
	int push;
	TYPE_NODEPTR T, P;
	T = NULL;
	P = NULL;

   T = MakeT(T,3);

	addB(T,7);
	
	addB(T,6);

	addB(T,2);  InOder(T); printf("\n");

	BstSearch(T, 6);

	BstSearch(T, 5);
					
			
	
	
	

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
int addB(TYPE_NODEPTR T,int Data){
	TYPE_NODEPTR P,Q,N;
	P=T;
	while (P != NULL){
		if(Data==P->info){
			return 0;
		} 
		Q=P;
		if(Data<P->info){
			P=P->Left;
		}
		else {P=P->Right;
		}
	}
   N=MakeT(T,Data);
   if (Data<Q->info){
   	Q->Left=N;
   }
   else {
   	Q->Right=N;
   }
   
  N->Mother=Q;
    
}

int BstSearch(TYPE_NODEPTR T, int Data){
	TYPE_NODEPTR P,Q,N;
	P=T;
	while (P!=NULL){
		if( Data==P->info){
		printf("Found %d \n",P->info);
		return 0;
	}
	else{
		if(Data<P->info){
			P=P->Left;
		}
		else P=P->Right;
	}
		
	}
	if (P==NULL)
	printf("Not Found %d\n",Data);
	
	
}
