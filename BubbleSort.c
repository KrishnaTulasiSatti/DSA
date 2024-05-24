/*  Exchange Sorting Technique --> Bubble Sort(Sink Sort)
                                   Selection Sort
Algorithm : 
Step 1 : Run an outer loop from index 0 to index n-1 (Use i)
         Step 2 : Run inner loop from index 0 to n-2 (Use j)   
		          Step 3 : Compare A[j] > A[j+1]
				           Case 1 : If true,swap A[j] and A[j+1]
						   Case 2 : Do nothing                                
*/
#include<stdio.h>
void BubbleSort(int *arr,int n){
	int i;
	for(i = 0 ; i < n; i++ ){
		int j;
		for(j = 0 ; j < n-1 ; j++){
			if(arr[j] > arr[j+1]){
			   int temp = arr[j];
			   arr[j] = arr[j+1];
			   arr[j+1] = temp;	
			} 
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i = 0 ; i < n ; i++) scanf("%d",&arr[i]);
	printf("Before Sorting : ");
	for( i = 0 ; i < n; i++) printf("%d ",arr[i]);
	printf("\n");
	BubbleSort(arr,n);
	printf("After Sorting : ");
	for( i = 0 ; i < n; i++) printf("%d ",arr[i]);
}                                
