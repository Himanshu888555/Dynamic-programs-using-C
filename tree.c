#include<stdio.h>
#include<stdlib.h>

struct tree{
    int data;
    struct tree *left;
    struct tree *right;
};


void inorder(struct tree*root){
    if (root==NULL)
    return;

inorder(root->left);
printf("%d ->",root->data);
inorder(root->right);

    
}

void preorder(struct tree*root){
    if (root==NULL)
    return;

printf("%d ->",root->data);
preorder(root->left);
preorder(root->right);
   
}

void postorder(struct tree*root){
    if (root==NULL)
    return;

postorder(root->left);
postorder(root->right);
printf("%d ->",root->data);

    
}

struct tree *insertn( int data){
    struct tree *node=(struct tree*)malloc(sizeof(struct tree));
    
    node->data=data;
    node->left=NULL;
    node->right=NULL;

return node;
    
}

struct tree *insertleft(struct tree* root,int value){
    root->left = insertn(value);

    return root->left;
}

struct tree*insertright(struct tree * root,int value){
    root->right = insertn(value);

    return root->right;
}








int main(){
    struct tree* root=insertn(5);

    insertleft(root,6);
    insertright(root,8);

    insertleft(root->left,4);
    insertright(root->left,7);
    insertleft(root->left,3);
    insertright(root->right,9);

inorder(root);

return 0;
// postorder(root);
// preorder(root);
}






