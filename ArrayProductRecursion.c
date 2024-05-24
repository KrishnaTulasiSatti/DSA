#include<stdio.h>

int product(int *arr,int i,int n){
	if(i == n) return 1;
	return arr[i] * product (arr,i+1,n);
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for( i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
	}
	int res = product(a,0,n);
	printf("%d",res);

}
