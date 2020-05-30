#include<stdio.h>
#define V 4

void init(int arr[][V]){
    int i,j;
    for(i=0;i<V;i++)
    for(j=0;j<V;j++)
      arr[i][j]=0;
}

void addedge(int arr[][V],int i,int j){
arr[j][i]=1;
arr[i][j]=1;
   
}

void printmatrix(int arr[][V]){
    
    int i,j;
    for(i=0;i<V;i++){
        printf("%d\t",i);
        for(j=0;j<V;j++){
            
            printf("%d\t",arr[i][j]);

        }
        printf("\n");
    }

}

int main(){
  int arr[V][V];

  init(arr);
  addedge(arr,0,1);
  addedge(arr,0,2);
  addedge(arr,1,2);
  addedge(arr,2,0);
  addedge(arr,2,3);

printmatrix(arr);

return 0;
}