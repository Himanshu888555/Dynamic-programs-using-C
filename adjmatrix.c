#include<stdio.h>
#define V 4


void init(int arr[][V]){

    int i,j;

    for(i=0;i<V;i++){
        for(j=0;j<V;j++){
            arr[i][j]=0;
        }
    }
}



void addmatrix(int arr[][V],int i,int j){
    
    arr[i][j]=1;
    arr[j][i]=1;

}


void printmatrix(int arr[][V]){


int i,j;

for(i=0;i<V;i++){
    printf("%d\n",i);
    for(j=0;j<V;j++){
   

   printf("%d",arr[i][j]);
    }
    printf("\n");
}



}


int main(){

    int arr[V][V];
    
    init(arr);
    addmatrix(arr,0,1);
    addmatrix(arr,0,3);
    addmatrix(arr,2,5);
    addmatrix(arr,3,2);
    addmatrix(arr,4,5);

printmatrix(arr);
}
