#include<stdio.h>
#include<stdlib.h>

struct node{
    int vertex;
    struct node * next;
};

struct node * creatNode(int n);

struct graph{
    int numvertex;
    struct node **adjlists;
};



struct node*createNode(int n){
    struct node *newNode = malloc(sizeof(struct node));

    newNode->vertex=n;
    newNode->next=NULL;

    return newNode;

}

struct graph *Creategraph(int vertices)
{
struct graph *graph = malloc(sizeof(struct graph));

graph->numvertex=vertices;
graph->adjlists=malloc(vertices*sizeof(struct node*));

int i;
for(i=0;i<vertices;i++){
    graph->adjlists[i]=NULL;
}
return graph;
}


void addedge(struct graph *graph,int s, int d){

    struct node*newNode=createNode(d);
    newNode->next=graph->adjlists[s];
    graph->adjlists[s]=newNode;

    newNode=createNode(s);
    newNode->next=graph->adjlists[d];
    graph->adjlists[d]=newNode;
}


void printGraph(struct graph*graph){
    int n;
    for(n=0;n<graph->numvertex;n++){
        struct node *temp=graph->adjlists[n];
        printf("\n vertex %d\n ", n);
        while (temp){
            printf("%d ->",temp->vertex);
            temp=temp->next;
        }
        printf("\n");
    }
}


int main(){
    struct graph*graph=Creategraph(4);
    addedge(graph,1,0);
    addedge(graph,3,2);
    addedge(graph,0,3);
    addedge(graph,2,5);
    addedge(graph,1,4);



    printGraph(graph);

return 0;
}









