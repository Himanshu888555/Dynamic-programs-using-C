#include<stdio.h>
#include<stdlib.h>
#define SIZE 40

// BFS algorithm in C

#include <stdio.h>
#include <stdlib.h>
#define SIZE 40

struct queue{
    int items[SIZE];
    int front;
    int rear;
};


struct queue* createqueue();
void enqueue(struct queue* q, int);
int dequeue(struct queue* q);
void display(struct queue* q);
int isEmpty(struct queue* q);
void printqueue(struct queue* q);


struct node{
    int vertex;
    struct node *next;
};

struct node * creatNode(int );

struct Graph{
    int vertices;
    int *visited;
    struct node **adjlists;
};

void BFS(struct Graph*graph,int vertices){
    struct queue*q=createqueue();

    graph->visited[vertices]=1;
    enqueue(q,vertices);

    while(!isEmpty(q)){
        printqueue(q);
        int currentvertices=dequeue(q);
        printf("visited %d\n",currentvertices);

        struct node *temp=graph->adjlists[currentvertices];

        while(temp){
            int adjvertex=temp->vertex;

            if(graph->visited[adjvertex]==0){
                graph->visited[adjvertex]=1;
                enqueue(q,adjvertex);

            }
            temp=temp->next;
        }
    }
}


struct node *createnode(int n){
    struct node*newnode=malloc(sizeof(struct node));
    newnode->vertex=n;
    newnode->next=NULL;
    return newnode;
}


struct Graph*creategraph(int vertices){
    struct Graph * graph=malloc(sizeof(struct Graph));
    graph->vertices=vertices;

    graph->adjlists=malloc(vertices* sizeof(struct node*));
    graph->visited=malloc(vertices* sizeof(int));

    for(int i=0;i<vertices;i++)
     {
         graph->adjlists[i]=NULL;
         graph->visited[i]=0;

     }

     return graph;

    }



void addEdge(struct Graph*graph,int src,int dest){
    
    struct node*newnode=createnode(dest);
    newnode->next=graph->adjlists[src];
    graph->adjlists[src]=newnode;


    newnode=createnode(src);
    newnode->next=graph->adjlists[dest];
    graph->adjlists[dest]=newnode;

}



struct queue * createqueue(){
    struct queue*q=malloc(sizeof(struct queue));
    q->front=-1;
    q->rear=-1;

}


int isEmpty(struct queue*q){
    if(q->front=-1)
    return 1;
    else
    return 0;
}


void enqueue(struct queue*q,int item){
    if(q->rear==SIZE-1){
        printf("queue is full\n");
    }
    else{
        if(q->front==-1)
        q->front=0;
        q->rear++;
        q->items[q->rear]=item;
    }
}


int dequeue(struct queue*q){
    int item;
    if(isEmpty){
        printf("queue is empty\n");
    }
    else{
      item=  q->items[q->front];
      q->front++;
      if(q->front>q->rear)
      q->front=q->rear=-1;
    }
    return item;
}







void printqueue(struct queue * q ){
    int i=q->front;
    if(isEmpty(q))
    printf("queue is empty");
    else{
        for(i=q->front;i<q->rear+1;i++){
            printf("%d ",q->items[i]);
        }
        }

    }




void printEdges(struct Graph * graph){
 
 int n;
for(n=0;n<graph->vertices;n++){
 struct node*temp=graph->adjlists[n];
        printf("\n vertex %d\n ", n);

 while(temp){
     printf("%d -> ",temp->vertex);
     temp=temp->next;
 }
 printf("\n");

}
}



int main(){
    
    struct Graph *graph=creategraph(6);

    addEdge(graph,0,1);
    addEdge(graph,0,2);
    addEdge(graph,1,2);
    addEdge(graph,1,4);
    addEdge(graph,1,3);
    addEdge(graph,2,4);
    addEdge(graph,3,4);

    BFS(graph,0);

    printEdges(graph);


    return 0;
}







