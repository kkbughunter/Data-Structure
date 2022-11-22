#include"Application1ADT.h"

void main() {
    int result;
    

    struct node *h1;
    h1 = (struct node *)malloc(sizeof(struct node));

    insertFront(h1,'D');		// DATA
    insertFront(h1,'A');
    insertFront(h1,'T');
    insertFront(h1,'A');
    
    displayItems(h1);

    printf("\n");
 
    result=isPalindrome(h1);

    if(result==1)    
        printf("The given list is Palindrome\n");
    else     
        printf("The given list is not Palindrome\n");
}
