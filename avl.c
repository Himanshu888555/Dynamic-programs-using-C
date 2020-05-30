#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * left;
    struct node * right;
};

struct node *createNode ( int data ){
    struct node * newnode = (struct node*)malloc(sizeof(struct node));

    newnode->data = data;
    newnode->left = newnode->right =0;

    return newnode;

}



int main()
{
    struct node *Node =NULL;
    createNode(2);
    

    printf("%d -> ",createNode);

}
