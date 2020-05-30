#include<stdio.h>
#define M 7

void sort(int arr[],int n){

int temp;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
           i=-1;
        }
         
    }

}

int kelement(int arr[],int k,int n){

    sort(arr,n);

    for(int i=1;i<n;i++)
    printf("%d\t",arr[i]);

    printf("\n%d",arr[k]);

}

int main(){
    int arr[M]={6,5,3,0,1,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;

    kelement(arr,k,n);
    // sort(arr,n);
}