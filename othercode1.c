#include<stdio.h>
#define V 4
int max,find;
int matrixgame(int A[][V]){

int coins=0;

max=A[0][0];

    for(int j=1;j<V;j++){
    if(A[j][0]>max){
        max=A[j][0];    
          find=j;}}
    
    coins+=max;




    printf("max: %d and coin: %d and found at %d\n",max,coins,find);

for(int i=0;i<V+1;i++){
    A[V][i]=0;
    A[i][V]=0;
   
    
}


int i=find;
int j=0;

while(i<V && j<V){
printf("i: %d j: %d coins: %d\n",i,j,coins);
   if(i==-1 && j>=0){
       i--;
    if(i=0 && j>=0 && A[i+1][j+1]<A[i][j+1]){
        coins+=A[i][j+1];
        j=j+1;
        i=i;
        
    }
    else{
        coins+=A[i+1][j+1];
        j=j+1;
         i=i+1;
         

        
    }
   }else if(A[i][j+1]>A[i-1][j+1] && A[i][j+1]>A[i+1][j+1]){
        coins+=A[i][j+1];
        i=i;
        j=j+1;    
    }else if(A[i-1][j+1]>A[i+1][j+1]){
        coins+=A[i-1][j+1];
        i=i-1;
        j=j+1;
    }else{
        coins+=A[i+1][j+1];
        i=i+1;
        j=j+1;
    }
   

}


}


int main(){

  int graph[V][V]= {{10, 33, 13, 15},
                  {22, 21, 04, 1},
                  {5, 0, 2, 3},
                  {0, 6, 14, 2}};
matrixgame(graph);

return 0;


}