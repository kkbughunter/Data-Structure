#include<stdio.h>
#include<stdlib.h>

struct stack{
	int arr[40];
	int size,top;
};

int checkfil(struct stack *S){
	if(S->top == S->size-1)
		return 1;
	return 0;
}

int checkempty(struct stack *S){
	if(S->top == -1)
		return 1;
	return 0;
}

void CreateStack(struct stack *h, int lim){

	h->size = lim;
	h->top = -1;
}

void push(struct stack *S, int x)
{
	if(checkfil(S)){
		printf("FULL\n");
	}
	else {
		S->top++;
		S->arr[S->top] = x;
	}

}

void Display(struct stack *S)
{
	struct stack *ptr=S;
	for(int i=0; i<S->top+1; i++)
		printf("%d ",ptr->arr[i]);
	printf("\n");
}

void pop (struct stack *S)
{
	if(checkempty(S))
		return ;
	else
		S->top--;
}




