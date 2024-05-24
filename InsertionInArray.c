#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i = 0; i < n-1 ; i++) scanf("%d",&arr[i]);
	int pos;
	scanf("%d",&pos);
	int val;
	scanf("%d",&val);
	for(i = 0 ; i < 5; i++) printf("%d ",arr[i]);
	for(i = 4; i >= pos ; i--){
		arr[i+1] = arr[i]; 
	}
	arr[i+1] = val;
	printf("\n");
	for(i = 0 ; i < 5; i++) printf("%d ",arr[i]);
}
