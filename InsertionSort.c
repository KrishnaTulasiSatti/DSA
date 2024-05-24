/*
Sortings
1.Arranging data in either ascending or descending order based on values
2.Insertion,Bubble,Selection,Merge,Quick sorts

1.Insertion Sort :
  Completion of one inner loop is called as PASS
Algorithm :
Step 1 : Run a loop on array from index 1 to index n-1 (inclusive) using a variable i
         Step 2 : Take two variables called as key , j and set key to A[i] , j to i-1
         Step 3 : Run a loop as long as j >= 0 an d A[j] > key
                  Step 4 : Inside the loop
                             A[j+1] = A[j];
                             Decrement j(j--)
                  Step 5 : After coming out of the inner loop set A[j+1] = key;  
*/

#include<stdio.h>
void InsertionSort(int *arr,int n){
	int i ;
	for(i = 1 ; i < n ; i++){
		int key = arr[i];
		int j = i-1;
		while(j >= 0 && arr[j] > key){
			arr[j+1] = arr[j];
			j--;
		}
		arr[j+1] = key;

}

}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for( i = 0 ; i < n ; i++)	scanf("%d",&a[i]);
	printf("Before Sorting : ");
	for(i = 0 ; i < n ; i++) printf("%d ",a[i]);
	printf("\nAfter Sorting : ");
    InsertionSort(a,n);
	for(i = 0 ; i < n ; i++) printf("%d ",a[i]);
}
				           
  
