#include<stdio.h>
int queue[1000];
int size;
int front = 0 , rear = 0;
void enqueue(int val) {
    if(rear-front == size) {
        printf("Queue is Full\n");
        return;
    }
    queue[rear++] = val;
}
void dequeue() {
    if(rear == front) {
        printf("Queue is Empty\n");
        return;
    }
    printf("%d is the removed from the queue\n",queue[front]);
    front++;
}
void display() {
    if(front == rear) {
        printf("Queue is Empty\n");
        return;
    }
    for(int i = front ;  i < rear ; i++) {
       printf("%d ",queue[i]);
    }
    printf("\n");
}
void peek() {
     if(front == rear) {
        printf("Queue is Empty\n");
        return;
    }
    printf("Peek Element : %d\n",queue[front]);
}
int main() {
    printf("Enter the size of Queue : ");
    scanf("%d",&size);
    while(1) {
        int ch;
        printf("Enter\n1.Enqueue\n2.Dequeue\n3.Display\n4.Peek Element\n5.Any other to exit\n");
        scanf("%d",&ch);
        if(ch == 1) {
            int val;
            printf("Enter the value to be enqueued : ");
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
            peek();
        }
        else {
            break;
        }
    }
}