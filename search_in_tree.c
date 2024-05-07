//traversal in inorder tree

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct Node
{
    int data;
    struct Node*left;
    struct Node*right;
};

struct node*NewNode(int val){
    struct Node*temp=NULL;
    temp=(struct Node*)malloc(sizeof(struct Node));
    temp->data=val;
    temp->left=NULL;
    temp->right=NULL;

    return(temp);
}
void inordertravers(struct Node*root){
    if (root==NULL)
    return;
    inordertravers(root->left);
    inordertravers(root->right);
    printf("%d \n",root->data);

}
struct Node*insert(struct Node*node, int data){
    if(node==NULL)
    return NewNode(data);
    if(data<node->data)
    node->left= insert(node->left, data);
    if(data>node->right)
    node->right= insert(node->right, data);

    return node;
}
struct Node*search(struct Node*root,int data){
    if((root==NULL) ||(root->data=data))
    return root;

    if (root->data<data)
    return search(root->right, data);
    
    if (root->data>data)
    return search(root->left,data);
}

int main(){
   
struct Node* root = NULL;
root = insert(root, 50);
insert(root, 30);
insert(root, 20);
insert(root, 40);
insert(root, 70);
insert(root, 60);
insert(root, 80);
int key;

printf("search any element from tree:");
scanf("%d",&key);

if (search(root, key) == NULL){
    printf("%d not found\n", key);
    }

else{
    printf("%d found in the tree\n", key);
    }

 return 0;
}
