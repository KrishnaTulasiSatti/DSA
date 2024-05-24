/* Circular Linked List
First and  last nodes 
felix zemdegs
jperm
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct node {
	int data;
	struct node *next;
}Node;

Node *head = NULL;

void insert_at_head(int val) {
	Node *newnode = (Node *)malloc(sizeof(Node));
	newnode->data = val;
	newnode->next = NULL;
	
	if(head == NULL) {
		head = newnode;
		head->next = head;
	}
	else{
		newnode->next = head;
		Node *temp = head;
		while(temp->next != head) {
			temp = temp->next;
		}
		temp->next = newnode;
		head = newnode;
	}
}

void insert_at_tail(int val) {
    Node *newnode = (Node *)malloc(sizeof(Node));
	newnode->data = val;
	newnode->next = NULL;
    if(head == NULL) {
        head = newnode;
        head->next = head;
    }
    else{
        Node *temp = head;
        while(temp->next != head) {
            temp = temp->next;
        }
        temp->next = newnode;
        newnode->next = head;
        
    }
}

void delete_at_head() {
    if(head == NULL) {
        printf("No nodes to delete");
    }
    else if(head->next == head) {
        Node *delNode = head;
        head = NULL;
        free(delNode);
    }
    else{
    Node *temp = head;
    while(temp->next != head) {
        temp = temp->next;
    }
    temp->next = head->next;
    Node *delNode = head;
    head = head->next;
    free(delNode);
    }
    
}

void delete_at_tail(){
    if(head == NULL) printf("No nodes to delete");
    else if(head->next == head){
        Node *delNode = head;
        head = NULL;
        free(delNode);
    }
    else{
    Node *temp = head;
    while(temp->next->next != head){
        temp = temp->next;
    }
    Node *delNode = temp->next;
    temp->next = head;
    free(delNode);
    }
}

//void display() {
//     if(head == NULL) printf("No nodes to display");
//     else{
//     Node *temp = head;
//     while(temp->next != head) {
//         printf("%d ",temp->data);
//         temp = temp->next;
//          }
//         printf("%d ",temp->data);
//     }
//}
void display() {
	Node *temp = head;
	if(head == NULL) printf("Linked List is empty\n");
	do{
		printf("%d ",temp->data)
		temp = temp->next;
		
	}while(temp != head);
	printf("\n");
}

void display_n_nodes() {
	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	Node *temp =  head;
	if(head == NULL) {
		printf("Linked List is empty\n");
		return ;
	}
	while(n--) {
		printf("%d ",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int main() {
	int ch;
	//Infinite Loop
	while (1) {
		printf("Enter\n1. Insert at head\n2.Insert at tail\n3.Delete at head\n4.Delete at tail\n5.Display\n6.Display n nodes\n7.Any other to exit\n");
		scanf("%d", &ch);
		if (ch == 1) {
			//Implement insert at head
			int val;
			printf("Enter a value for the node to be inserted : ");
			scanf("%d", &val);
			insert_at_head(val); //Function call
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
	        display();
	    }
	    else if(ch == 6) {
	    	display_n_nodes();
		}
		else {
			printf("Thank you for the testing.ADIEU!!\n");
			break;
		}
		
		
	}
	
}

