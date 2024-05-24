/*Binary Search : 
1.Algorithm which is used to find a key in sorted data
2.Binary Search only works on Sorted data(Ascending or Descending)


Algorithm : 
Step 1 : Take two variables called low and high
Step 2 : Set low to 0 and high to length-1
Step 3 : Run a loop as long as low <= high
        Step 4 : Compute a value called mid =(low+high)/2;
        Step 5 : 
                Case 1 : If A[mid] == key return mid;
                
                Case 2 : If A[mid] > key set high to mid - 1;
                
                Case 3 : If A[mid] < key set low to mid+1;
                
 return -1,where key is not found   
 */
 int BinarySearchIterative(int *a , int n , int key){
 	
 	int low = 0 ;
 	int high = n-1;
 	
 	while(low <= high){
 		int mid = (low+high)/2;
 		if(a[mid] == key) return mid;
 		else if(a[mid] > key) high = mid-1;
 		else low = mid+1;
	 }
	 
	 return -1;
 }
 
 int BinarySearchRecursive(int *a , int low, int high ,int key){
 	if(low > high) return -1;
 	else{
 		int mid = (low + high)/2;
 	    if(a[mid] == key) return mid;
 	    else if (a[mid] > key) high = mid-1; //BinarySearchRecursive(a,low,mid-1,key)
 	    else if(a[mid] < key)  low = mid+1;                 //BinarySearchRecursive(a,mid+1,high,key)
 	}
 	
 	return BinarySearchRecursive(a,low,high,key);
 }
 
 #include<stdio.h>
 int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for( i = 0 ; i < n ; i++){
		scanf("%d",&a[i]);
	}
	int key;
	scanf("%d",&key);
	int c = BinarySearchIterative(a,n,key);
	if(c == -1) printf("Element Not found");
	else{
		printf("Element Found at %d index",c);
	}
	
	int d = BinarySearchRecursive(a,0,n-1,key);
	if(d == -1) printf("Element Not found");
	else{
		printf("Element found at %d index",d);
	}
	
}
	            
