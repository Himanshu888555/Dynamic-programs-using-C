#include<stdio.h>
#include<stdbool.h>
#include<math.h>
#define V 6

int min_dist(int dist[],bool Tset[]){
    int min=INFINITY,min_index;
    for(int i=0;i<V;i++){
        if(Tset[i]==false && dist[i]<=min){

            min=dist[i];
            min_index=i;
        }
    }
        return min_index;
}

void printsolution(int dist[]){
    printf("Vertex \t\t Distance from source\n");
   for(int i=0;i<V;i++)
   printf("%d \t\t %d\n",i,dist[i]);
}


void dijkstra(int graph[V][V],int src){
    int dist[V];
    bool Tset[V];

for(int i=0;i<V;i++){
    dist[i]=INFINITY;
    Tset[i]=false;
}

dist[src]=0;

for(int i=0;i<V;i++){
    int m=min_dist(dist,Tset);

    Tset[m]=true;

    for(int i=0;i<V;i++){
        if(!Tset[i]&&graph[m][i]&&dist[m]!=INFINITY
        &&dist[m]+graph[m][i]<dist[i])
        {
            dist[i]=dist[m]+graph[m][i];
        }
   
    
    }

 

}

printsolution(dist);
}

int main()
{
	int graph[V][V]={
		{0, 10, 20, 0, 0, 0},
		{10, 0, 0, 50, 10, 0},
		{20, 0, 0, 20, 33, 0},
		{0, 50, 20, 0, 20, 2},
		{0, 10, 33, 20, 0, 1},
		{0, 0, 0, 2, 1, 0}};
	dijkstra(graph,0);
	return 0;	                        
}