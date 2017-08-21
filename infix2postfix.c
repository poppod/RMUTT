#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#define SIZE 50
char s[SIZE];
int top = 0;
void push(char oper);
char pop();
int priority(char oper);
void display(char ch, char postfix[50]);

int main() {
	char infx[50], postfix[50], ch,n;
	int i = 0, j, k = 0,p;
	printf("\n\nInfix Expression : ");
	scanf_s("%s", infx, 50);
	printf("%s\n\n",infx);
	//	clrscr();
	for (j = -1; j <= 50; j++)
		postfix[j] = 0;
	
	printf("Outout:\n");
	
	while ((ch = infx[i++]) != '\0')
	{

		if (isalnum(ch)) {
			postfix[k++] = ch;

		}
		else if (ch== '(') push(ch);
		else if ((priority(ch)) >= (priority(s[top-1]))) {
			if (ch == ')')
		{ 
			while (s[top] != '(')
			{
			    pop();
				
				n= s[top-1];
				postfix[k++] =n;
				top--;
			}
			pop();
			postfix[--k]=0;
			
		}
		else push(ch);
			
		}
		 
		else if (priority(ch) < (priority(s[top-1]))){
			
				while (priority(ch) < (priority(s[top-1]))){
		  	postfix[k++]=s[top-1];
		  	top--;
		  	pop();
			push(ch);
			}
	}
	
		display(ch, postfix);
	}
	while (top != -1)
		{
			n= s[top-1];
			postfix[k++]=n;
			pop();
			top--;
			
		//	printf("\n %s  %s    %d\n",s,postfix,k);
		}
	//	printf("Outout:\n");
	
		display(ch, postfix);
		
		return 0;
}
	void push(char oper)
		 {
		s[top] = oper;
		top++;
	}

	char pop()
	{

		s[top] = 0;
		return 0;
	}

	int priority(char oper)
	{
		char n;
		switch (oper)
		{
		
		//case '(': n=1;break;
		case ')': n=6;break;	
		case '^': n=5;break;
		case'*': n = 4; break;
		case'/': n = 3; break;
		case'+': n = 2; break;
		case'-': n = 1; break;
		default:return 0; break;
		}
		return n;
	}
 	void display(char ch, char postfix[50]) {
		//printf("Outout:\n");
		printf("Infix      stack      Postfix\n");
		printf(" %c          %s         %s   \n", ch, s, postfix);

	}



