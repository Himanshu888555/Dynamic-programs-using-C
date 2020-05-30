#include<stdio.h>
#include<string.h>
#define V 4
#define INF 99999



void printM(int A[][V]){

    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
        if(A[i][j]==INF)
        printf("%4s","INF");
        else
        printf("%4d",A[i][j]);
    }
    printf("\n");
}}

void floydW(int graph[][V]){

    int A[V][V];

    for(int i=0;i<V;i++){
        for(int j=0;j<V;j++){
            A[i][j]=graph[i][j];
        }
    }


    for(int k=0;k<V;k++){
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
              if(A[i][k]+A[k][j]<A[i][j]){
                A[i][j]=A[i][k]+A[k][j];
                    }}}}

printM(A);

}



int main(){

    int graph[V][V]= { {0,   5,  INF, 10}, 
                        {INF, 0,   3, INF}, 
                        {INF, INF, 0,   1}, 
                        {INF, INF, INF, 0} 
                      }; 
floydW(graph);
}