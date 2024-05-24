#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
typedef struct node Node;
Node* top = NULL;
void push(int ele) {
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = ele;
    new_node->next = top;
    top = new_node;
}
void display() {
    if(top == NULL) printf("Stack is Empty...");
    else{
        Node* temp = top;
        while(temp != NULL) {
            printf("%d ",temp->data);
            temp = temp->next;
        }
    }
}
void peek() {
    if(top == NULL) printf("Stack is empty...");
    else{
        printf("%d ",top->data);
    }
}
void pop() {
    if(top == NULL ) printf("Underflow");
    else{
        printf("%d ",top->data);
        Node* temp = top;
        top = top->next;
        free(temp);
    }
}
int main(){
    int ch;
	while(1){
		printf("Enter\n1.Push\n2.Pop\n3.Display\n4.Peek\nAny other to exit\n");
		scanf("%d",&ch);
		if(ch == 1){
		    int ele;
			printf("Enter an element to be pushed: ");
			scanf("%d",&ele);
			push(ele);	
		}
		else if(ch == 2) pop();
		else if(ch == 3) display();
		else if(ch == 4) peek();
		else break;
	}
}