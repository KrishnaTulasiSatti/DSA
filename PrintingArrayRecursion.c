#include<stdio.h>
void print(int *arr,int i ,int n){
	
      if(i == n) return;
      printf("%d ",arr[i]);
      print(arr,i+1,n);
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for( i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
	}
	print(a,0,n);
}
