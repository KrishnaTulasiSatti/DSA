/* Implementation of a Circular Queue
1. front,rear,capacity,size
2. front = 0 , rear = capacity-1
3. Enqueue : 
      if (queue is full --> size == capacity) queue is full
         set rear = (rear + 1) % capacity
         q[rear] = val;
         size++;
4. Dequeue : 
     if(size == 0) queue is empty
        delete element at front
        front = (front + 1) % capacity
        size--;  
 */

#include<stdio.h>
#include<stdlib.h>
int capacity = 0 ;
int front = 0 , rear;
int size = 0;
int *queue;
void enqueue(int val) {
    if(size == capacity) {
        printf("Queue is Full\n");
        return;
    }
    rear = (rear+1) % capacity;
    queue[rear] = val;
    size++;
}
void dequeue() {
    if(size == 0) {
        printf("Queue is empty\n");
        return;
    }
    printf("%d is deleted\n",queue[front]);
    front = (front+1) % capacity;
    size--;
}
void display() {
    if(size == 0) {
        printf("Queue is empty\n");
        return;
    }
    int k = 0;
    for(int i = front ; k++ < size ; i = (i+1) % capacity) {
        printf("%d ",queue[i]);
    }
    printf("\n");
}
int main() {
      printf("Enter the size of the Queue : ");
      scanf("%d",&capacity);
      queue = (int*)malloc(sizeof(int)*capacity);
      rear = capacity-1;
   while(1) {
      int ch;
      printf("Enter\n1.Enqueue\n2.Dequeue\n3.Display\nAny other to exit\n");
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
      else{
        break;
      }
   }
}
