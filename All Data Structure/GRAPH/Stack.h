#include<stdio.h>
#include<stdlib.h>

struct stack {
	int arr[100];
	int size,top;
};
int isEmptystack(struct stack *S){
	if(S->top == -1) return 1;
	else return 0;
}


int isFillstack(struct stack *S){
	if(S->top == S->size-1)
		return 1;
	return 0;
}

int gettop(struct stack *S){
	if(isEmptystack(S))
		return -1;
	else return S->arr[S->top];
}


struct stack * createStack(int lim)
{
	struct stack *s = (struct stack *) malloc(sizeof(struct stack));
	s->size = lim;
	s->top = -1;
	return s;
}

void push(struct stack *S, int x)
{
	if(isFillstack(S)){
		printf("FULL");
		return ;
	}
	S->top++;
	S->arr[S->top] = x;

}


void displayStack(struct stack *S)
{
	struct stack *ptr=S;
	for(int i=0; i<S->top+1; i++){
		printf("%d ",ptr->arr[i]);
	}

}


void pop (struct stack *S)
{
	if(isEmptystack(S) == 1)
		return ;
	S->top--;
}

