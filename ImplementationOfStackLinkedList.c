#include<stdio.h>
#include<stdlib.h>
//Implementation Of Stack Using Linked List
struct node{
    int data;
    struct node* next;
};
typedef struct node Node;
Node* head = NULL;
int size;
int top = -1;
void push(int val){   //Insert at head
    if(top == size-1) {
    	printf("Stack is Full\n");
    	return;
	}
    Node* newnode = (Node*)malloc(sizeof(Node));
    newnode->data = val;
    newnode->next = NULL;
    if(head == NULL) head = newnode;
    else{
        newnode->next = head;
        head = newnode;
    }
    top++;

}
void pop() {        //Delete at tail
    if(head == NULL) {
        printf("Stack is empty\n");
        return;
    }
    printf("%d is popped out of the stack : \n",head->data);
    Node* temp = head;
    head = head->next;
    free(temp);
    top--;

}
void display() {
	if(head == NULL) {
		printf("Stack is empty\n");
		return;
	}
	Node* temp = head;
	while(temp != NULL ) {
		printf("%d ",temp->data);
		temp = temp->next;
	}
}
int main() {
	 printf("Enter the size of Stack : ");
	 scanf("%d",&size);
	 int ch;
     while(1) {

       printf("\nEnter your choice : \n1.Push\n2.Pop\n3.Display:\n");
       scanf("%d",&ch);
       if(ch == 1) {
     	 int val;
         printf("Enter the value you want to push : ");
         scanf("%d",&val);
         push(val);
      }
      else if(ch == 2) {
        pop();
      }
      else if(ch == 3) {
     	display();
	  }
      else break;
	 }
}
