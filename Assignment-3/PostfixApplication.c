#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"PostfixApplicationADT.h"

int main()
{
int i;
struct stack *s;
s=(struct stack*)malloc(sizeof(struct stack));

createStack(s,7);

 char exp[20];
    int n1,n2,n3,num;
    printf("Enter the expression :: ");
    scanf("%s",exp);
   
    while(exp[i] != '\0')
    {
        if(isdigit(exp[i]))
        {
            num = exp[i] - '0';
            push(s,num);
        }
        else
        {
            n1 = pop(s);
            n2 = pop(s);
            switch(exp[i])
            {
            case '+':
            {
                n3 = n1 + n2;
                break;
            }
            case '-':
            {
                n3 = n2 - n1;
                break;
            }
            case '*':
            {
                n3 = n1 * n2;
                break;
            }
            case '/':
            {
                n3 = n2 / n1;
                break;
            }
            }
            push(s,n3);
        }
        i++;
    }
    printf("\nThe result of expression: ");
    display(s);
    return 0;
}

