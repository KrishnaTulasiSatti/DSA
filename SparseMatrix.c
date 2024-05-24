/* Applications of Linked List

   1.Sparse Matrix Representation
   Sparse Matrix : Is a matrix in which there are more 0s than non-zero elements
   Opposite : Dense Matrix
   The purpose of reprsenting a sparse matrix via a linked list is to save some memory
   
   2.Polynomial Representation using Linked List
       Term of a polynomial contains 1) Coefficient 2) Exponent 
       
       1.Single in-determinate polynomial
          With only one variable : ax^2+bx+c
          
       2.Multi in-determinate polynomial
	     with more than one variable : ax^2+2by+c   
          
*/
   
//Sparse Matrix representation using linked list
#include<stdio.h>
#include<stdlib.h>
 struct node{
 	int row,col,data;
 	struct node *next;
 };
 //alias name
 typedef struct node Node;
 Node *head = NULL;     // Global Variable head
 void insert_at_tail(int r,int c,int val) {
 	Node *newNode = (Node *)malloc(sizeof(Node));
 	newNode->row = r;
 	newNode->col = c;
 	newNode->data = val;
 	newNode->next = NULL;
 	if (head == NULL) {
 		head = newNode;
	 }
	 else{
	 	Node *temp = head;
	 	while (temp->next != NULL) {
	 		temp = temp->next;
		 }
		 temp->next = newNode;
	 }

 }
 
 void display() {
     printf("Non-zero elements of the given sparse matrix are : \n");
     printf("Row\tCol\tVal\n");
     Node *temp = head;
     while(temp != NULL) {
     	printf("%d\t%d\t%d\t\n",temp->row,temp->col,temp->data);
     	temp = temp->next;
	 }
 }
 int main() {
 	int r,c;  //No.of rows and columns
 	scanf("%d %d",&r,&c);   //Reading
 	int mat[r][c];    //Declaring a matrix of r rows and c columns
 	int i,j;
 	//Reading elemnets into the matrix
 	for(i = 0 ; i < r ; i++) {
 		for(j = 0 ; j < c ; j++) {
 			scanf("%d",&mat[i][j]);
		 }
	 }
	 //Running a loop on it
	 	for(i = 0 ; i < r ; i++) {
 	     	for(j = 0 ; j < c ; j++) {
 		      if(mat[i][j] != 0) {
 		      	   insert_at_tail(i,j,mat[i][j]);
			   } 
		 }
	 }
	 display();
	 
 }  
