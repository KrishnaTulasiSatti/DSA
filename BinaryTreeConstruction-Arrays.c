// Binary Tree Construction
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
typedef struct node TreeNode;
void preOrder(TreeNode* root) {
    if(root != NULL){
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}
int main() {
    int levels;
    printf("Enter the number of levels : ");
    scanf("%d",&levels);
    int numberOfNodes = (int)pow(2,levels)-1;
    TreeNode* nodes[numberOfNodes];
    for(int i = 0 ; i < numberOfNodes ; i++) {
         int ch;
         printf("Index : %d\nEnter\n1.Node\n2.NULL\n",i);
         scanf("%d",&ch);
         if(ch == 1) {
            int val;
            printf("Enter a value for the node : ");
            scanf("%d",&val);
            TreeNode* newnode = (TreeNode*)malloc(sizeof(TreeNode));
            newnode->left = NULL;
            newnode->right = NULL;
            nodes[i] = newnode;
         }
         else{
            nodes[i] = NULL;
         }
    }
    for(int i = 0 ; i < numberOfNodes/2 ; i++) {
        if(nodes[i] != NULL) {
            nodes[i]->left = nodes[2*i+1];
            nodes[i]->right = nodes[2*i+2];
        }
    } 
    TreeNode* root = nodes[0];
    preOrder(root);
}
