#include<stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node *next;
}TYPE_NODE;
typedef struct Node *type_nodePtr;

type_nodePtr main(){
	type_nodePtr head,tail,q,N;
	head=(type_nodePtr)malloc(sizeof(TYPE_NODE));
	
	head->data=1;
	head->next=NULL;
	printf("\n %d",head->data);

	N= newnode(2,NULL);
	 q=N;
	tail=head;
     printf("\n q=%d\n new=%d\n tail=%d\n  head=%d",q,N,tail,head);
     
      tail->next;
      q->next=NULL;
      tail=N;
      printf("\n q=%d\n new=%d\n tail=%d\n  head=%d",q,N,tail,head);
     // type_nodePtr head=newnode(3,Null);
     // type_nodePtr tail=head;
     // for (int data )
      
	return 0;
}
  newnode(int d,type_nodePtr *n){
	type_nodePtr N;
	N=(type_nodePtr)malloc(sizeof(TYPE_NODE));
	N->next=n;
	N->data=d;
	return N;
}
