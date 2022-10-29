#include <stdio.h>
#include <stdlib.h>
#include "QueueADT.h"

int main(){
	struct node *ptr[2];
	ptr[0] = (struct node*)malloc(sizeof(struct node));
	ptr[1] = (struct node*)malloc(sizeof(struct node));
	createQueue(ptr,"3");
	enqueue(ptr,"J1",3);
	enqueue(ptr,"J2",5);
	enqueue(ptr,"J3",13);
	dequeue(ptr);
	enqueue(ptr,"J4",33);
	display(ptr);
}
