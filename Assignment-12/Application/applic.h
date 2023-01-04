#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// code by jaanu sri...
struct QhashTable
{
    int *list;
    int size;
};

struct DhashTable
{
    int *list;
    int size;
};

void init(struct QhashTable *QH, struct DhashTable *DH, int limit)
{
    QH->size = limit;
    QH->list = (int *)malloc(limit*sizeof(int));
    DH->size = limit;
    DH->list = (int *)malloc(limit*sizeof(int));
}

int QgetPosition(struct QhashTable *H, int x, int i)
{
    //printf("\n%d ",i);
    return ((x%H->size)+((i+1)*(i+1)))%H->size;
}

int DgetPosition(struct DhashTable *H, int x, int pos)
{
    //printf("\n%d ",i);
    return (pos+(7-(x%7)))%H->size;
}

void insertQuad(struct QhashTable *H, int x, int pos, int i)
{
    if (H->list[pos]==0)
    {
        H->list[pos] = x;
    }
    else
    {
        //printf("%d ", i);
        pos = QgetPosition(H, x, i);
        insertQuad(H, x, pos, i+1);
    }
    return;
}

void insertDoub(struct DhashTable *H, int x, int pos)
{
    if (H->list[pos]==0)
    {
        H->list[pos] = x;
    }
    else
    {
        pos = DgetPosition(H, x, pos);
        insertDoub(H, x, pos);
    }
    return;
}

void display_Quadprob(struct QhashTable *QH)
{
    for (int i = 0 ; i < QH->size ; i++)
    {
        printf("%d -> %d\n", i, QH->list[i]);
    }
}

void display_DoubleHash(struct DhashTable *DH)
{
    for (int i = 0 ; i < DH->size ; i++)
    {
        printf("%d -> %d\n", i, DH->list[i]);
    }
}
