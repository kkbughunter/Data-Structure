#include<stdio.h>
#include<stdlib.h>
#include"Queue.h"

int main()
{

    struct queue *q = createQueue(5);
    enqueue(q,10);
    enqueue(q,20);
    enqueue(q,30);
    display(q);
    dequeue(q);
    display(q);
    return 0;
}