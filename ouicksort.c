#include<stdio.h>

void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}


int partition(int arr[],int low,int high ){
    int pivot=arr[high];
     int i=(low-1);

    for(int j=low;j<high;j++){
    if(arr[j]<=pivot){
       i++;
            swap(&arr[i],&arr[j]);
    }
    }

    swap(&arr[i+1],&arr[high]);
    return (i+1);
  
}

void quicksort(int arr[],int low,int high){
    if(low<high){

        int pi=partition(arr,low,high);
        quicksort(arr,low,pi-1);
        quicksort(arr,pi+1,high);

    }
}


void printArray(int arr[], int size) {
  for (int i = 0; i < size; ++i) {
    printf("%d  ", arr[i]);
  }
  printf("\n");
}



int main(){

 int arr[10],i,j,k,l;
   
   int number ;
   printf("enter the size of elements: ");
   scanf("%d",&number);

   for(i=0;i<number;i++)
   scanf("%d",&arr[i]);



   quicksort(arr,0,number-1);
printArray(arr,number);


}