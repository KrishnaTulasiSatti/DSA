/* Quick Sort
1.Invented in the year 1959
2.Iventor - Richard Hoare  (Turing Award in 1980)
3.One of the top-10 algorithms invented in the 20th century
4.SubRoutine --> Partitioning
5.Pivot element is the word that you see in quicksort a lot
6.Partitioning :
    1.Take a pivot element(Generally either the last element or the first element)
    2.Rearrange the array in such a way that
         a.Every value present on the left part of pivot is smmaler than equals to the pivot
         b.Every value present on the right of pivot is greater than pivot
 1.Naive Partition Scheme
 2.Lomuto Partition Sceme
 3.Hoare's Partition Scheme        
*/

#include<stdio.h>
void print_array(int *arr,int n){
	int i ;
	 for( i = 0 ; i < n ; i++) printf("%d ",arr[i]);
	 printf("\n");
}

int partition(int *arr,int l,int h){
	int pivot = arr[l];
	int result[h-l+1];
	int k = 0;
	//Bring all the smaller or equal element into result array
	int i;
	for(i = l+1 ; i <= h ; i++){
		if(arr[i] <= pivot) result[k++] = arr[i];
	}
	int output_index = l+k; //Index of pivot in the result array
	
	result[k++] = pivot; //Bring pivot into result array
	
	//Bring all the greater elements into result array
	for(i = l+1 ; i <= h ;i++){
		if(arr[i] > pivot) result[k++] = arr[i];
	}
	//Putting the elements back in the original array
	k = 0;
	for(i = l ; i <= h ; i++) arr[i] = result[k++];
	return output_index;
}
void quick_sort(int *arr,int l,int h){
	if(l < h){
	  int p = partition(arr,l,h);
	  quick_sort(arr,l,p-1);
	  quick_sort(arr,p+1,h);
	}
}

int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	int i;
	for( i = 0 ; i < n ; i++) scanf("%d",&arr[i]);
	printf("Before Sorting : ");
	print_array(arr,n);
	
	//Call to sort function goes here
	quick_sort(arr,0,n-1);
	
	printf("AFter Sorting : ");
	print_array(arr,n);
}
