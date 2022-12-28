#include<stdio.h>
#include<stdlib.h>
#include "PriarityQueueADT.h"
int main()
{
    struct PriarityQueueADT *pq = NULL;
    pq = init(pq,10);
    Insert(pq,1);
    Insert(pq,2);
    Insert(pq,3);
    Insert(pq,4);
    Insert(pq,5);
    Insert(pq,0);
    Display(pq);
    Delete(pq);
    Delete(pq);
    Delete(pq);
    Delete(pq);
    Delete(pq);
    Delete(pq);
    Delete(pq);
    Display(pq);
    Insert(pq,5);
    Insert(pq,2);
    Insert(pq,3);
    Display(pq);
    return 0;
}