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

TYPE_NODEPTR MakeT(TYPE_NODEPTR T,int Data);
void DisplayC(TYPE_NODEPTR P);
TYPE_NODEPTR InsertLeft(TYPE_NODEPTR P,int Data);
TYPE_NODEPTR InsertRight(TYPE_NODEPTR P,int Data);


int main(){
	int push;
	TYPE_NODEPTR T,P;
	 T=NULL;
	while(1){
		printf("###### MENU ######\n");
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
		scanf("%d",&push);
		switch(push){
			case 1: { if(T==NULL){
				printf("\nEnter Data:");
					scanf("%d",&push);
					T=MakeT(T,push);
					P=T;
			} else printf("\nNode Inused!!!!\n");	
			}break;
		//	case 2: InsertLeft(P);break;
		//	case 3: InsertRight(P);break;
			case 4: break;
			case 5: break;
			case 6:break;
			case 7:DisplayC(P);break;
		}
	}
	
}
 
TYPE_NODEPTR MakeT(TYPE_NODEPTR T,int Data){
//	TYPE_NODEPTR N;
 	T=malloc(sizeof(TYPE_NODE));
 	T->info=Data;
 	T->Left=NULL;
 	T->Mother=NULL;
 	T->Right=NULL;
 	
 }
 void DisplayC(TYPE_NODEPTR P){
 	printf("\n %d\n",P->info);
 }
