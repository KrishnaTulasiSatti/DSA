#include<stdio.h>
void modify_array(int a[],int size){
	int i;
	for(i = 0 ; i < size ; i++){
		a[i] = 10;
	}
	
}
int main(){
	int A[5] = {10,20,30,40,50};
    modify_array(A,5);
	int i;
	for(i = 0 ; i < 5 ; i++){
		printf("%d ",A[i]);
	}
}
