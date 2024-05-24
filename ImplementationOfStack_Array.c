//Stack Implementation using Array
//We need an array
#include<stdio.h>
//Just like head in llst declaring global variables
int st[10000];
int size;
int top = -1;
void push(int ele){
	//overflow
	if(top == size-1){
		printf("Stack is full\n");
	}
	else{
		top++;
		st[top] = ele; //st[++top] = ele
	}
}
void pop(){
	//underflow
	if(top == -1){
		printf("Stack is empty\n");
	}
	else{
		printf("Deleted element is: %d\n",st[top]);
		top--;
	}
}
void display(){
	if(top == -1){
		printf("Stack is empty\n");
	}
	else{
		int i;
		for(i = top ; i >= 0 ; i--){
			printf("%d ",st[i]);
		}
		printf("\n");
	}
}
void peek(){
	if(top == -1){
		printf("Stack is empty\n");
	}
	else{
		printf("Top element is: %d\n",st[top]);
	}
}
int main()
{
	printf("Enter the size of Stack : ");
	scanf("%d",&size);
	int ch;
	while(1){
		printf("Enter\n1.Push\n2.Pop\n3.Display\n4.Peek\nAny other to exit\n");
		scanf("%d",&ch);
		if(ch == 1){
		    //push operation
		    int ele;
			printf("Enter an element to be pushed: ");
			scanf("%d",&ele);
			push(ele);	
		}
		else if(ch == 2){
		   //pop operation	
		   pop();
		}
		else if(ch == 3){
			//Display 
			display();
		}
		else if(ch == 4){
			peek();
		}
		else{
			break;
		}
	}
}
