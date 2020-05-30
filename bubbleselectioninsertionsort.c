#include<stdio.h>

int swap (int *i,int *j){
     
     int temp=*j;
    *j=*i;
    *i=temp;

    return temp;
}

void printbubble(int arr[],int n){

    int i;

    for(i=0;i<n;i++)
        printf("%d\n",arr[i]);
    
}


void bubble(int arr[],int n){
    
    int i,j,temp;

    for(i=0;i<n-1;i++){
        int swapped=0;
        for(j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
              swap(&arr[j],&arr[j+1]);
              swapped=1;
            }}
            if(swapped==0)
            break;
            }
    printbubble(arr,n);

}



void selection(int arr[],int n)
{
    int i,j,min;

     for(i=0;i<n-1;i++){
         min=i;
         for(j=i+1;j<n;j++){
    
              if(arr[j]<arr[min]){
                    min=j;
                                  }
                  swap(&arr[min],&arr[j]);
                           }
                        }
    printbubble(arr,n);

}



void insertion(int arr[],int n){

int i,j;

for(i=1;i<n;i++){
    int key=arr[i];
    j=i-1;

    while(key<arr[j] && j>=0){

    arr[j+1]=arr[j];
    --j;
    }
    arr[j+1]=key;

}


    printbubble(arr,n);



}


int main(){
    int n, arr[100];
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&arr[i]);
    
    bubble(arr,n);
    selection(arr,n);
    insertion(arr,n);
}