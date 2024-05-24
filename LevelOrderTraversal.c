#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
};
typedef struct node TreeNode;
TreeNode* createNewnode(int val) {
    TreeNode* node = (TreeNode*)malloc(sizeof(TreeNode));
    node->data = val;
    node->left = NULL;
    node->right = NULL;
    return node;
}
//Level Order Traversal
void levelOrder(TreeNode* root) {
     struct node* q[500];
     int front = 0 ;
     int rear = 0 ;
     q[rear] = root;
     rear++;
     while(front != rear) {
         TreeNode* dn = q[front];
         printf("%d ",dn->data);
         if(dn->left != NULL) {
             q[rear] = dn->left;
             rear++;
         }
         if(dn->right != NULL) {
             q[rear] = dn->right;
             rear++;
         } 
         front++;
         free(dn);
     }
}

int main() {
    TreeNode* node1 = createNewnode(10);
    TreeNode* node2 = createNewnode(20);
    TreeNode* node3 = createNewnode(30);
    TreeNode* node4 = createNewnode(40);
    TreeNode* node5 = createNewnode(50);
    TreeNode* node6 = createNewnode(60);
    TreeNode* node7 = createNewnode(70);

    //connection
    node1->left = node2;
    node1->right = node3;

    node2->left = node4;
    node2->right = node5;

    node3->left = node6;
    node3->right = node7;

    TreeNode* root = node1;   // Root Node
    levelOrder(root);


    



}
