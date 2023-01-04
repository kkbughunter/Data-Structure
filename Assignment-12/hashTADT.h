#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// code by jaanu sri...
struct node
{
    int data;
    struct node *next;
};

struct hashTable
{
    struct node *list[10];
    int size;
};

void init(struct hashTable *H, int limit)
{
    //H = (struct hashTable *)malloc(sizeof(struct hashTable));
    H->size = limit;
    for (int i = 0 ; i < limit ; i++)
    {
        H->list[i] = (struct node*)malloc(sizeof(struct node));
        H->list[i]->next = NULL;
    }
}

void insertnode(struct node *p, struct node *t)
{
    if (p->next == NULL) p->next = t;
    else insertnode(p->next, t);
}

void insert(struct hashTable *H, int x)
{
    int pos;
    pos = x % H->size;
    struct node *temp, *ptr;
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = NULL;
    ptr = H->list[pos];
    insertnode(ptr, temp);
    
    return;
}

void display(struct hashTable *H)
{
    struct node *ptr;
    for (int i = 0 ; i < H->size ; i++)
    {
        printf("%d : ", i);
        ptr = H->list[i]->next;
        while (ptr!=NULL)
        {
            printf("%d  ",ptr->data);
            ptr = ptr->next;
        }
        printf("\n");
    }
}

int search (struct hashTable *H, int key)
{
    struct node *ptr;
    int pos = key % H->size;
    ptr = H->list[pos]->next;
    while (ptr != NULL)
    {
        if (ptr->data == key) return pos;
        ptr = ptr->next;
    }
    return -1;
}
