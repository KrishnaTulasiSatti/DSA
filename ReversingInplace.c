#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	int i;
	for( i = 0 ; i < n ; i++){
		scanf("%d",&arr[i]);
	}
	
	
	int l = 0;                         
	int r = n-1;                            
	while(l < r){
		int temp = arr[l];
		    arr[l] = arr[r];
			arr[r] = temp;
			l++;
			r--; 
	}
	
	
	for(i = 0 ; i < n/2 ; i++){
		int temp = arr[i];
		    arr[i] = arr[n-1-i];
			arr[n-1-i] = temp;
	}
		for( i = 0 ; i < n ; i++){
		printf("%d ",arr[i]);
	}
}
