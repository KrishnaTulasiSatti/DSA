#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* left;
    struct node* right;
};
typedef struct node Node;
Node* create() {
    Node* newnode = (Node*)malloc(sizeof(Node));
    int val;
    printf("\nEnter the value : ");
    scanf("%d",&val);
    if(val == -1) {
        return NULL;
    }
    newnode->data = val;
    printf("Enter the left child of %d : ",val);
    newnode->left = create();
    printf("Enter the right child of %d : ",val);
    newnode->right = create();
    return newnode;
}
int main() {
    Node* root = NULL;
    root = create();
}