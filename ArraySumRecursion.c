#include<stdio.h>

//int add(int* arr,int i,int n){
//	static int sum = 0;
//	if(i == n) return sum;
//	sum+=arr[i];
//	return add(arr,i+1,n);
//}

int add(int *arr,int i,int n){
	if(i == n) return 0;
	return arr[i]+add(arr,i+1,n);
}

int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for( i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
	}
	int res = add(a,0,n);
	printf("%d",res);

}
