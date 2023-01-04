#include "hashTADT.h"
int main()
{
    int size, op, elmt, s;
    struct hashTable *H;
    H = (struct hashTable *)malloc(sizeof(struct hashTable));
    printf("\nEnter the size of the Hash Table : ");
    scanf("%d", &size);
    init(H, size);

    insert(H, 23);
    insert(H, 45);
    insert(H, 69);
    insert(H, 87);
    insert(H, 48);
    insert(H, 67);
    insert(H, 54);
    insert(H, 66);
    insert(H, 53);

    display(H);
    return 0;
}
// Thank you Jaanu sri
