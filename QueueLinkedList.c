/* Implementation Of Queue Using Linked List
 Requirements :  
 1.No size constraints (We can insert as many nodes as we want)
 2.Should be able to perform insertions (enqueue) and deletions(dequeue) with O(1) time complexity
 3.Should be able to implement the following methods along with enqueue and dequeue
    1.get_front()
    2.get_rear()
    3.get_size()
 */
#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
};
typedef struct node Node;
Node* head = NULL;
Node* tail = NULL;
int size = 0;
void enqueue(int val) {
    size++;
    Node* newnode = (Node*)malloc(sizeof(Node));
    newnode->data = val;
    newnode->next = NULL;
    if(head == NULL && tail == NULL) {
        head = newnode;
        tail = newnode;
        return;
    }
    tail->next = newnode;
    tail = newnode;
}
void dequeue() {
    if(head == NULL) {
        printf("Queue is Empty\n");
        return;
    }
    Node* temp = head;
    head = head->next;
    if(head == NULL) tail = NULL;
    free(temp);
    size--;
}
void display() {
    if(head == NULL && tail == NULL) {
        printf("Queue is Empty\n");
    }
    Node* temp = head;
    while(temp != NULL) {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}
void getSize() {
    printf("The size of the queue is %d\n",size);
}
void getFront() {
    if(head == NULL && tail == NULL) {
        printf("Queue is Empty\n");
    }
    printf("%d \n",head->data);
}
void getRear() {
    if(head == NULL && tail == NULL) {
        printf("Queue is Empty\n");
    }
    printf("%d \n",tail->data);
}
int main() {
   while(1) {
      int ch;
      printf("Enter\n1.Enqueue\n2.Dequeue\n3.Display\n4.get_size\n5.get_front\n6.get_rear\nAny other to exit\n");
      scanf("%d",&ch);
      if(ch == 1) {
        int val;
        printf("Enter the value you want to be enqueued : ");
        scanf("%d",&val);
        enqueue(val);
      }
      else if(ch == 2) {
        dequeue();
      }
      else if(ch == 3) {
        display();
      }
      else if(ch == 4) {
        getSize();
      }
      else if(ch == 5) {
        getFront();
      }
      else if(ch == 6) {
        getRear();
      }
      else{
        break;
      }
   }
}