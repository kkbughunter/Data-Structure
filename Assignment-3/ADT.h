#include<stdio.h>
#include<stdlib.h>

struct stack {
	int arr[100];
	int size,top;
};
int checkemp(struct stack *S){
	if(S->top == -1) return 1;
	else return 0;
}


int checkfil(struct stack *S){
	if(S->top == S->size-1)
		return 1;
	return 0;
}

int gettop(struct stack *S){
	if(checkemp(S))
		return -1;
	else return S->arr[S->top];
}


void createStack(struct stack *S, int lim)
{
	S->size = lim;
	S->top = -1;
}

void push(struct stack *S, int x)
{
	if(checkfil(S)){
		printf("FULL");
	}
	else {
		S->top++;
		S->arr[S->top] = x;
	}

}


void display(struct stack *S)
{
	struct stack *ptr=S;
	for(int i=0; i<S->top+1; i++){
		printf("%d ",ptr->arr[i]);
	}

}


void pop (struct stack *S)
{
	if(S->top)S->top--;
}



int big(struct stack *S){
	int i=0, max = S->arr[i];
	for(i=1; i<S->top+1; i++){
		if(max < S->arr[i])
			max = S->arr[i];
	}
	return max;
}

void Binary(struct stack *S, int data){
	int n = data;

	for(int i=0;n>0;i++)
	{
		push(S,n%2);
		n=n/2;
	}
	n=data;
	printf("%d : ",data);
	for(int i=0;n>0;i++)
	{
		printf("%d",gettop(S));
		pop(S);
		n=n/2;
	}
}

