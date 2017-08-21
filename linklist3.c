#include<stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct Node {
	int data;
	struct Node *next;
}TYPE_NODE;
typedef struct Node *type_nodePtr;

newnode(int d, type_nodePtr n);
print(type_nodePtr head);
insertAfter(int d, type_nodePtr head);
deleteAfter(type_nodePtr head);




type_nodePtr main() {
	type_nodePtr head, tail, q, N;
	head = (type_nodePtr)malloc(sizeof(TYPE_NODE));

	head->data = 1;
	head->next = NULL;
	//printf("\n %d", head->data);
	
 	N = newnode(2, NULL);
	q = N;
	tail = head;
	//printf("\n q=%d\n new=%d\n tail=%d\n  head=%d", q, N, tail, head);

	tail->next = N ;
	N->next = NULL;
	tail = N;
	//printf("\n q=%d\n new=%d\n tail=%d\n  head=%d", q, N, tail, head);

	N = newnode(3, NULL);
	tail->next = N;
	tail = N;
	N->next = NULL;
	// tail=head;
	int data;
	for (data = 4; data<6; data++) {
		N = newnode(data, N->next);
		tail->next = N;
		tail = N;
		N->next = NULL;
	}
	//printf("\n");
	print(head);
	printf("\n------- -----\n");
	insertAfter(6,head);	
	print(head);
	insertAfter(7, head->next); 	
	print(head);
	deleteAfter(head); 	
	print(head);
	deleteAfter(head->next); 	
	print(head);
	return 0;
}
  newnode(int d, type_nodePtr n) {
	type_nodePtr N;
	N = (type_nodePtr)malloc(sizeof(TYPE_NODE));
	N->next = n;
	N->data = d;
	return N;
}
print(type_nodePtr head) {
	type_nodePtr tail;
	tail = head;
	while (tail->next != NULL) {
		printf(" %d ", tail->data);
		tail = tail->next;

	}
		printf(" %d ", tail->data);
	return 0;
}

insertAfter(int d, type_nodePtr head)
{
	printf("\n");
	type_nodePtr N,q,tail;
	
	N= newnode(d,head->next);
	q = N;
	tail = head;
	 head->next=N;
	 return tail;


}

deleteAfter(type_nodePtr head)
{ 
printf("\n");
type_nodePtr N,q,tail;
 tail=head->next;
 head->next=tail->next;
 free(tail);
//  tail=tail->next;
  
return tail;
}

