/*
4. Find the largest number in the array which you have created in Ex. 3
*/
#include<stdio.h>
void main()
{
	int i=0,arr[] = {5,10,15,20,25,30,35,40};
	int max = arr[0];
	int n = sizeof(arr)/sizeof(int);

	while(*(arr+i) != *(arr+n)){
		if(max < *(arr+i)) max = *(arr+i);
		i++;
	}
	printf("Max value : %d\n\n",max);
	return ;
}
