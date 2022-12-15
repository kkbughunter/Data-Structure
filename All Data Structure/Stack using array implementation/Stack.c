#include<stdio.h>
#include<stdlib.h>
#include"Stack.h"
 
int main(){

    struct stack *s = createStack(5);
    push(s,10);
    push(s,20);
    pop(s);
    pop(s);
    pop(s);
    pop(s);
    push(s,20);
    push(s,10);
    push(s,10);
    push(s,10);
    push(s,10);
    displayStack(s);
    return 0;
}
