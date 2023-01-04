#include "applic.h"

// code by jaanu sri...
int main()
{
    int size, op, elmt, s, pos1, pos2;
    struct QhashTable *QH;
    struct DhashTable *DH;
    //printf("Hi");
    QH = (struct QhashTable *)malloc(sizeof(struct QhashTable));
    DH = (struct DhashTable *)malloc(sizeof(struct DhashTable));
    printf("\nEnter the size of the Hash Table : ");
    scanf("%d", &size);
    init(QH, DH, size);
    
    elmt = 23;
    pos1 = elmt % QH->size;
    pos2 = elmt % DH->size;
    insertQuad(QH, elmt, pos1, 0);
    insertDoub(DH, elmt, pos2);
    elmt = 45;
    pos1 = elmt % QH->size;
    pos2 = elmt % DH->size;
    insertQuad(QH, elmt, pos1, 0);
    insertDoub(DH, elmt, pos2);
    elmt = 69;
    pos1 = elmt % QH->size;
    pos2 = elmt % DH->size;
    insertQuad(QH, elmt, pos1, 0);
    insertDoub(DH, elmt, pos2);
    elmt = 87;
    pos1 = elmt % QH->size;
    pos2 = elmt % DH->size;
    insertQuad(QH, elmt, pos1, 0);
    insertDoub(DH, elmt, pos2);
    elmt = 45;
    pos1 = elmt % QH->size;
    pos2 = elmt % DH->size;
    insertQuad(QH, elmt, pos1, 0);
    insertDoub(DH, elmt, pos2);
    elmt = 67;
    pos1 = elmt % QH->size;
    pos2 = elmt % DH->size;
    insertQuad(QH, elmt, pos1, 0);
    insertDoub(DH, elmt, pos2);
    elmt = 54;
    pos1 = elmt % QH->size;
    pos2 = elmt % DH->size;
    insertQuad(QH, elmt, pos1, 0);
    insertDoub(DH, elmt, pos2);
    elmt = 66;
    pos1 = elmt % QH->size;
    pos2 = elmt % DH->size;
    insertQuad(QH, elmt, pos1, 0);
    insertDoub(DH, elmt, pos2);

    printf("display_Quadprob:\n");
    display_Quadprob(QH);
    printf("display_DoubleHash:\n");
    display_DoubleHash(DH);
    
    return 0;
}

// thank you jaanu sri...
