/*Merge Sort
1.Uses merging process as a sub-routine
2.It is invented in 1945
3.John Von Neumann is the inventor
4.An Array with one element is always sorted
5.Divide and Conquer Technique


 
Bubble Sort,Insertion Sort,Selection Sort --> O(n^2)
Merge Sort,Quick Sort --> faster in terms of running time complexity O(n*log2(n))

#include<stdlib.h> --> qsort()  In C

*/
#include<stdio.h>
void print(int *arr,int n){
	int i;
	for( i = 0 ; i < n ; i++) printf("%d ",arr[i]);
	printf("\n");
}

//sub-routine --> merging process

void merge(int *arr,int l,int m,int h){
	int i = l;
	int j = m+1;
	int k = 0;
	int result[h-l+1];
	while(i <= m && j <= h){
		if(arr[i] < arr[j]){
			result[k] = arr[i];
			i++;
			k++;
		}
		else{
			result[k] = arr[j];
			j++;
			k++;
		}
	}
	while(i <= m){
		result[k] = arr[i];
		i++;
		k++;
	}
	while(j <= h){
		result[k] = arr[j];
		j++;
		k++;
	}
	//Put the elements back in the original array
	k = 0;
	for(i = l ; i <= h ; i++){
		arr[i] = result[k];
		k++;
	}
}
void merge_sort(int *arr,int l,int h){
	if(l < h){
		int m = (l+h)/2;
		merge_sort(arr,l,m); //cutting array upto there exists only one element --> l == h (Left Side)
		merge_sort(arr,m+1,h);//cutting array upto there exists only one element --> l == h (Right Side)
		merge(arr,l,m,h);  //merging doesn't take place until there exists one element 
	}
}
int main(){
	int n;
	scanf("%d",&n);
	int arr[n];
	int i;
	for(i = 0 ; i < n; i++) scanf("%d",&arr[i]);
	printf("Before Sorting : ");
	print(arr,n);
	//merge sort function call goes here
	merge_sort(arr,0,n-1);
	printf("After Sorting : ");
	print(arr,n);
	}
