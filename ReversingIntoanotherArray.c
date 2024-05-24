#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	int i;
	for( i = 0 ; i < n ; i++){
		scanf("%d",&arr[i]);
	}
	int rev[n];
	int j = 0;
	for( i = n-1 ; i >= 0 ; i--){
	    rev[j] = arr[i];
		j++; 
	}
	for(i = 0 ; i < n ; i++){
		//rev[i] = arr[n-i-1];
		printf("%d ",rev[i]);
	}
}
