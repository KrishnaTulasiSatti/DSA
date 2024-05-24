#include<stdio.h>
int main(){
	int arr[5] = {10,20,30,40,50};
	int *ptr;
	// Array name itself is a pointer
	// It is an internal pointer
	//It stores the address of the 1st element
	
	printf("%d %d ",arr,&arr[0]);
	
	for(ptr = arr ; ptr < arr+5 ; ptr++){
		printf("%d ",*ptr);
	}
}
