/*Selection Sort 
   Find an elemnet from red part
   The element should be less than the element at index i
   It should be smallest among all the elements in red part
   
 Algorithm : 
 Step 1 : Run an outer loop from index 0 to index size-2(Use variable i)
          Step 2 : Take a variable called min and set it to i
		  Step 3 : Run the inner loop from index i+1 to size - 1(Use variable j)
		           Step 4 : Check if (A[j] < A[min]) , if true set min to j
		  Step 5 : After coming out of the inner loop swap values A[i] and A[min]         
*/
#include<stdio.h>
void SelectionSort(int *arr,int n){
	int i;
	for(i = 0 ; i < n-1 ; i++){
		int j;
		int min = i;
		for(j = i+1 ; j < n ; j++){
		  if(arr[j] < arr[min])  min = j;
         }
			int temp = arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i = 0 ; i < n ; i++) scanf("%d",&arr[i]);
	printf("Before Sorting : ");
	for(i = 0 ; i < n ; i++) printf("%d ",arr[i]);
	SelectionSort(arr,n);
	printf("\nAfter Sorting : ");
	for(i = 0 ; i < n ; i++) printf("%d ",arr[i]);
}
