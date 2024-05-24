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
void preorderTraversal(Node* root) {
    if(root == NULL) {
        return;
    }
    printf("%d ",root->data);
    preorderTraversal(root->left);
    preorderTraversal(root->right);
}
void inorderTraversal(Node* root) {
    if(root == NULL) {
        return;
    }
    inorderTraversal(root->left);
    printf("%d ",root->data);
    inorderTraversal(root->right);
}
void postorderTraversal(Node* root) {
    if(root == NULL) {
        return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d ",root->data);
}
int main() {
    Node* root = NULL;
    root = create();
    printf("\nPre-Order Traversal is : ");
    preorderTraversal(root);
    printf("\nIn-Order Traversal is : ");
    inorderTraversal(root);
    printf("\nPost-Order Traversal is : ");
    postorderTraversal(root);
    
}