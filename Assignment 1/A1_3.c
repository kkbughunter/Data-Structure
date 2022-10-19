/*
3. Initialize array. Print the contents of the using address of the contents
*/
#include<stdio.h>
void main()
{
	int i=0,arr[] = {5,10,15,20,25,30,35,40};

	printf("Array elements are : { ");
	int n = sizeof(arr)/sizeof(int);
	while(*(arr+i) != *(arr+n)){
		printf("%d ",*(arr+i));
		i++;
	}
	printf("}\n");
	return ;
}
