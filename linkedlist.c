#include<stdio.h>
#include<stdlib.h>

// typedef struct node{
//     int data;
//     struct node * next;
// } st;


















// void ins(struct node**head,int newdata){
   
//     struct node * newNode=(struct node*)malloc(sizeof(struct node));
     
//      newNode->data=newdata;
//      newNode->next=*head;
//      *head=newNode;
//        }

// void insmid(struct node ** head,int newdata){

//      struct node * newNode =(struct node*)malloc(sizeof(struct node));
//      struct node *prev =*head;
//      newNode->data=newdata;
//      newNode->next=prev->next;
//      prev->next=newNode;
    
// }

// void inslast(struct node **head,int newdata){
//     struct node *temp=*head;
//     struct node *newNode=(struct node*)malloc(sizeof(struct node));
//     newNode->data=newdata;

//     if(*head==NULL){
//         *head=newNode;
//         return;
//     }

//     while(temp->next!=NULL)
//     {
//         temp->next=newNode;
//     }

//     temp->next=newNode;
//     return;


// }


// void insertanywhere(struct node **head,int data,int pos){
//     struct node *pre;
//     struct node*newNode = (struct node*)malloc(sizeof(struct node));
//     newNode->data=data;
//     struct node *temp =*head;
//     int k=1;
//     if(pos==1){
//         newNode->next=*head;
//         *head=newNode;
//     }

//    else{
//     while(temp!=NULL && (k<pos)){
//         k++;
//         pre = temp;
//         temp=temp->next;
//     }
//     pre->next=newNode;
//     newNode->next=temp;
//    }
// }




// void insert(struct node **head,int newdata){
// // st *temp=head;
// st * newNode = (struct node*) malloc(sizeof(st));

// newNode->data=newdata;
// newNode->next= *head;
// *head = newNode;

// }
// void insertmiddle(struct node **head,int newdata){
    
// st * prev =*head;
// st * newNode = (struct node*) malloc(sizeof(st));
// newNode->data=newdata;
//   newNode->next=prev->next;
//  prev->next=newNode;

// }

// void insertlast(struct node **head,int newdata){

// st*newNode=(struct node*)malloc(sizeof(struct node));
// st*pre =*head;
// newNode->data=newdata;
// newNode->next=NULL;

// if(*head==NULL){
//     *head=newNode;
//     return;
// }

// while(pre->next !=NULL)
//     pre=pre->next;

//     pre->next=newNode;
//     return;
// }






// void print(struct node *node){

// while(node!= NULL){
//     printf("%d\n",node->data);
//     node=node->next;
// }
// }


// void delete(struct node **head,int elem){
//     st * temp=*head;
//     st*pre;

//     if(temp!=NULL && temp->data == elem){
//         *head=temp->next;
//         free(temp);
//         return;

//     } 

//     while(temp!=NULL && temp->data!=elem){
//         pre=temp;
//         temp=temp->next;
//     }

//     if(temp==NULL)return;

//     pre->next =temp->next;
//     free(temp);
// }

// int main(){
//     struct node * head = NULL;

    

//     insert(&head,0);
    
// insertlast(&head,12);
//    insertmiddle(&head,9);
//    insertmiddle(&head,10);
//    insertmiddle(&head,11);
// insertanywhere(&head,233,2);
//    insert(&head,8);
// delete(&head,9);
//     print(head);

// return 0;
// }








// struct nnode{

//     int data;
//     struct node *next;
// }

// int main(){
//     struct node *head ;
//     struct node *one =NULL;
//     struct node *two =NULL;
//     struct node *three =NULL;

//     one =malloc(sizeof(struct node));
//     three =malloc(sizeof(struct node));
//     two =malloc(sizeof(struct node));

//     head=one;

//     one->next=two;
//     two->next=three;
//     three->next=NULL;

// one->data=12;
// two->data=13;
// three->data=2;

// while(head!=NULL){
//     printf("%d\n",head->data);
//     head=head->next;
// }

// }










struct node{
    struct node *prev;
    int data;
    struct node *next;

};

void insert(struct node **head,int newdata,int pos){
    int k=1;

struct node *newnode = (struct node *)malloc(sizeof(struct node));

newnode->data=newdata;

if(pos==1){
    
newnode->next=*head;
newnode->prev=NULL;
if(*head)
(*head)->prev=newnode;
*head=newnode;
return;
}
struct node *temp=*head;
    
    while((k<pos-1)&&temp!=NULL ){
        temp=temp->next;
        k++;
        
    }
    // if(k!=pos){
    //     printf("error\n;
    // }

   newnode->next=temp->next;
   newnode->prev=temp;

   if(temp->next){
       temp->next->prev=newnode;
   }

   temp->next=newnode;
   return;




}


void print(struct node *node){
    while(node!=NULL){
        printf("%d\n",node->data);
        node=node->next;
    }
}

int main(){
    struct node*head=NULL;

    insert(&head,4,1);
    insert(&head,1,2);
    insert(&head,12,4);
    insert(&head,11,3);
    


    

    print(head);
}