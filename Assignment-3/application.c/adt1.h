#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct stack
{
char a[100];
int size;
int top;
};

void createStack(struct stack *s,int size)
{
s->size=size;
s->top=-1;
}


int isEmpty(struct stack *s)
{
if(s->top==-1)
return 1;
else
return 0;
}

int isFull(struct stack *s)
{
if(s->top==s->size-1)
return 1;
else
return 0;
}

void push(struct stack *s,char x)
{
if(isFull(s))
printf("Stack is full\n");
else
{
s->top++;
s->a[s->top]=x;
}
}

int pop(struct stack *s)
{
if(s->top!=-1)
return s->a[s->top--];
}

void display(struct stack *s)
{
int t=s->top;
while(s->top!=-1)
{
printf("%d,",s->a[s->top]);
s->top--;
}
s->top=t;
printf("\n");
}
