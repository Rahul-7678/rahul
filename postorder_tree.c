#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct Node
{
    int data;
    struct Node*left;
    struct Node*right;
};

struct node*createNode(int val){
    struct Node*newNode=NULL;
    newNode=(struct Node*)malloc(sizeof(struct Node));
    newNode->data=val;
    newNode->left=NULL;
    newNode->right=NULL;

    return(newNode);
}
void inordertravers(struct Node*root){
    if (root==NULL)
    return;
    inordertravers(root->left);
    inordertravers(root->right);
    printf("%d \n",root->data);

}

int main(){
    struct Node*root=createNode(50);
    root->left=createNode(40);
    root->right=createNode(70);
    root->left->left=createNode(30);
    root->left->right=createNode(45);
    root->right->left=createNode(60);
    root->right->right=createNode(80);


    inordertravers(root);

}
