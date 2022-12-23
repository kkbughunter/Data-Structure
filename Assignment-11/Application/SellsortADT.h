#include<stdio.h>
#include<stdlib.h>

struct node1 {
	int *arr;
	int size;
};

void init(struct node1 *a, int siz)
{
	a->size = siz;
	a->arr = (int*) malloc(siz*(2+1) *sizeof(int));
}

void InsertElement(struct node1 *a, int *array){
	int i;
	//a->arr[0] = -99;
	for(i=0; i<a->size; i++){
		a->arr[i] = array[i];
	}
}

void Display(struct node1 *a){
	printf("Array Element : ");
	for(int i=0; i<a->size; i++){
		printf("%d ",a->arr[i]);
	}
	printf("\n\n");
}

void sellSort(struct node1 *a)

{
	for (int i = a->size / 2; i > 0; i = i / 2){
		for (int j = i; j <  a->size; j++){
			for(int k = j - i; k >= 0; k = k - i){
				if (a->arr[k+i] >= a->arr[k]){
					break;
				}
				else
				{
					int temp = a->arr[k];
					a->arr[k] = a->arr[k+i];
					a->arr[k+i] = temp;

                }
            }
        }
    }
	return ;
}

void appearsonce(struct node1 *a, int key) {
	int high = a->size -1,low =0,mid=0;
  	while (low <= high) {
    	mid = low + (high - low) / 2;
    	if (a->arr[mid] == key){
			break;
		}
	
    	if (a->arr[mid] < key)
    		low = mid + 1;
	
    	else
    	  	high = mid - 1;
  	}
	
	if(a->arr[mid+1] == a->arr[mid] || a->arr[mid-1] == a->arr[mid])
		printf("%d is repeted\n",a->arr[mid]);
	else
		printf("%d is Not repeted\n",a->arr[mid]);
}  


void appearscount(struct node1 *a, int key) {
	int high = a->size -1,low =0,mid=0;
  	while (low <= high) {
    	mid = low + (high - low) / 2;
    	if (a->arr[mid] == key){
			break;
		}
	
    	if (a->arr[mid] < key)
    		low = mid + 1;
	
    	else
    	  	high = mid - 1;
  	}
	

	low = 1;
	if(a->arr[mid+1] == a->arr[mid] || a->arr[mid-1] == a->arr[mid])
		low =0;
	else
		low =1;

	
	if(low == 0){
		int count =1,i=0;
		do{
			if(a->arr[mid+i] == a->arr[mid] && a->size < mid)
				count++;
			if(a->arr[mid-i] == a->arr[mid] && mid >= 0 )
				count++;
			i++;
		}while(a->arr[mid+i] != a->arr[mid] && a->arr[mid-i] != a->arr[mid]);

		printf("\t%d is repeted %d times..\n\n",a->arr[mid],count);
	}
	//else printf("\t%d is repeted %d times..\n\n",a->arr[mid],count);
}  













