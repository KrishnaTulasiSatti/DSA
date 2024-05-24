#include<stdio.h>
#include<stdlib.h>
typedef struct node {
	struct node *prev;
	int data;
	struct node *next;
}Node;

Node *head = NULL;
Node *tail = NULL;
void insert_at_head(int val){
    Node *newnode = (Node *)malloc(sizeof(Node));
	newnode->prev = NULL;
	newnode->data = val;
	newnode->next = NULL;
	if(head == NULL){
	    head = newnode;
	    tail = newnode;
	    return;
	}
	newnode->next = head;
	head->prev = newnode;
	head = newnode;
}
void insert_at_tail(int val){
	Node *newnode = (Node *)malloc(sizeof(Node));
	newnode->prev = NULL;
	newnode->data = val;
	newnode->next = NULL;
	if(tail == NULL) {
	    head = newnode;
	    tail = newnode;
	    return;
	}
	newnode->prev = tail;
	tail->next = newnode;
	tail = newnode;
	
}
void delete_at_head(){
    if(head == NULL && tail == NULL) {
        printf("No nodes to delete");
        return ;
    }
    if(head->next == NULL) {
        Node *temp = head;
        head = NULL;
        free(temp);
        return;
    }
    Node *temp = head;
    head = head->next;
    head->prev = NULL;
    free(temp);
}
void delete_at_tail(){
    if(head == NULL && tail == NULL) {
        printf("No nodes to delete");
        return ;
    }
    if(tail->prev == NULL) {
        Node *temp = tail;
        tail = NULL;
        free(temp);
        return;
    }
    Node *temp = tail;
    tail = tail->prev;
    tail->next = NULL;
    free(temp);
}
void display_from_left(){
    if(head == NULL) {
        printf("No nodes to display");
        return ;
    }
     Node *temp = head;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->next;
    }
}
void display_from_right(){
     if(tail == NULL) {
        printf("No nodes to display");
        return ;
    }
    Node *temp = tail;
    while(temp != NULL){
        printf("%d ",temp->data);
        temp = temp->prev;
    }
}
int main() {
	int ch;
	//Infinite Loop
	while (1) {
		printf("Enter\n1. Insert at head\n2.Insert at tail\n3.Delete at head\n4.Delete at tail\n5.Display from left\n6.Display from right\n7.Any other to exit\n");
		scanf("%d", &ch);
		if (ch == 1) {
			int val;
			printf("Enter a value for the node to be inserted : ");
			scanf("%d", &val);
			insert_at_head(val); 
		}
		else if(ch == 2) {
		    int val;
		    printf("Enter a value for the node to be inserted : ");
		    scanf("%d",&val);
		    insert_at_tail(val);
		}
	    else if(ch == 3) {
	        delete_at_head();
	    }
	    else if(ch == 4) {
	        delete_at_tail();
	    }
	    else if(ch == 5) {
	      display_from_left();
	    }
	    else if(ch == 6) {
	        display_from_right();
	    }
	   
		else {
			printf("Thank you for the testing.ADIEU!!\n");
			break;
		}
		
		
	}
	
}

