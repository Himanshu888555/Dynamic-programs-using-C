#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<math.h>
#include<limits.h>
#define V 5

int printm(int parent[],int graph[V][V]){

    printf("Edge \tWeight\n"); 
    for (int i = 1; i < V; i++) 
        printf("%d - %d \t%d \n", parent[i], i, graph[i][parent[i]]); 
}

int minkey(int key[],bool tset[]){
    int min=INFINITY,min_index;

    for(int i=0;i<V;i++){
        if(tset[i]==false && key[i]<min){
            min=key[i];
            min_index=i;
        } 
    }

    return min_index;
}

void prims(int graph[V][V]){
int parent[V];
int key[V];
bool tset[V];

for(int i=0;i<V;i++){
    key[i]=INFINITY;
    tset[i]=false;
}

key[0]=0;
parent[0]=-1;

for(int i=0;i<V-1;i++)
{
    int m=minkey(key,tset);

    tset[m]=true;

for(int j=0;j<V;j++){


 if(tset[j] && graph[m][j] == false && graph[m][j]<key[j]){

      parent[j]=m;
      key[j]=graph[m][j];

 }

}


printm(parent,graph);
}


}



int main(){


      int graph[V][V] = { { 0, 2, 0, 6, 0 }, 
                        { 2, 0, 3, 8, 5 }, 
                        { 0, 3, 0, 0, 7 }, 
                        { 6, 8, 0, 0, 9 }, 
                        { 0, 5, 7, 9, 0 } }; 


prims(graph);

return 0;
}