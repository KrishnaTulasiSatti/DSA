#include<stdio.h>
int linearSearchIterative(int* arr,int size , int val){
	int i;
	for( i = 0 ; i < size ; i++){
		if(arr[i] == val) return i;
	}
	return -1;
}

int linearSearchRecursive(int *arr,int i , int size , int val){
	if(i == size) return -1;
	if(arr[i] == val) return i;
	linearSearchRecursive(arr,i+1,size,val); 
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for( i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
	}
	int key;
	scanf("%d",&key); 
	int c = linearSearchIterative(a,n,key);
	printf("%d\n",c);
	
	
	int res = linearSearchRecursive(a,0,n,key);
	printf("%d",res);
}
