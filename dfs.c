#include<stdio.h>
#include<stdlib.h>
#define V 4

struct node{
    int vertex;
    struct node* next;
};



struct node * createnode(int n);

struct Graph{
    int numvertices;
    int *visted;
    struct node** adjlists;
};



struct node* createnode(int v){

    struct node *newnode=malloc(sizeof(struct node));
    newnode->vertex=v;
    newnode->next=NULL;
    return newnode;
}



struct Graph* creategraph(int vertices){

    struct Graph * graph =malloc(sizeof(struct Graph));
    graph->numvertices=vertices;

    graph->adjlists=malloc(vertices*sizeof(struct node *));
    graph->visted=malloc(vertices*sizeof(int));

    int i;
    for(i=0;i<vertices;i++){
        graph->adjlists[i]=NULL;
        graph->visted[i]=0;
    }
return graph;
}

void addedge(struct Graph *graph,int src,int dest){
    struct node*newnode=createnode(dest);
    newnode->next=graph->adjlists[src];
    graph->adjlists[src]=newnode;

    newnode=createnode(src);
    newnode->next=graph->adjlists[dest];
    graph->adjlists[dest]=newnode;
}

void printgraph(struct Graph *graph){
   
   int n;
   for(n=0;n<graph->numvertices;n++){
       struct node*temp=graph->adjlists[n];
   while(temp){
       printf("%d -> ",temp->vertex);
   temp=temp->next;
   }
   printf("\n");
   }
}



void DFS(struct Graph *graph,int vertex){

    struct node*adjList=graph->adjlists[vertex];
    struct node*temp = adjList;


    graph->visted[vertex]=1;
    printf("Visites %d \n", vertex);
    
    while(temp!=NULL){
        int connectedVertex = temp->vertex;

        if(graph->visted[connectedVertex]==0){
           DFS(graph,connectedVertex);
        }
        temp=temp->next;
    }


}




int main(){
    struct Graph * graph= creategraph(4);
    addedge(graph,0,1);
    addedge(graph,0,2);
    addedge(graph,1,2);
    addedge(graph,2,3);
    
    printgraph(graph);

    DFS(graph,1);

    return 0;

}