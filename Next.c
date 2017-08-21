#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

 typedef struct name {
		char input[20];
		struct name  *next;
	}lop;

//typedef struct name *test;
int main (viod){
	
	int i;
  lop *w,*x,*y,*z;
  w= malloc(sizeof(lop));
  x=malloc(sizeof(lop));
  y=malloc(sizeof(lop));
  z=malloc(sizeof(lop));
  w->next=NULL;
  
   printf("Insert :");
  scanf("%s",w->input);
  printf("\n%s %s\n",w,w->next);

printf("Insert :");
  scanf("%s",x->input);
  w->next=x;
 printf("\n%s->%s \n",w,w->next);
 
 printf("Insert :");
  scanf("%s",y->input);
  x->next=y;
 printf("\n%s->%s->%s \n",w,w->next,x->next);
  
  printf("Insert :");
  scanf("%s",z->input);
  y->next=z;
 printf("\n%s->%s->%s->%s \n",w,w->next,x->next,y->next);
  
  printf("\n\n\n Delete\n");
  w->input[0]= '\0';
  printf("\n%s %s->%s->%s \n",w,w->next,x->next,y->next);
   printf("\n\n\n Delete\n");
  x->input[0]='\0';
  printf("\n%s %s %s->%s \n",w,w->next,x->next,y->next);
  return 0;
  
 
}

