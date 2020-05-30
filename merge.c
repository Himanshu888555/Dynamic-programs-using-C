#include<stdio.h>

void merge(int arr[],int p,int q,int r){

   int n1= q-p+1;
   int n2= r-q;
  int L1[n1],M1[n2];
  for(int i=0;i<n1;i++)
    L1[i] =arr[p+i];
  for(int j=0;j<n2;j++)
    M1[j]=arr[q+1+j];

    int i=0,j=0,k=p;

    while(i<n1 && j<n2){
        if(L1[i]<=M1[j]){
        arr[k]=L1[i];
        i++;
        }else{
         arr[k]=M1[j];
         j++;
        }
        k++;
    }          

    while(i<n1){
        arr[k]=L1[i];
        i++;
        k++;
    }
  
  
    while(j<n2){
        arr[k]=M1[j];
        j++;
        k++;
    }


}

void printarray(int arr[],int size){
    int i;

    for(i=0;i<size;i++){
        printf("%d",arr[i]);
          printf("\n");
    }
  
}


void mergeSort(int arr[],int p,int r)
{
    if(p<r){
int q = p+(r-p)/2;

mergeSort(arr,p,q);
mergeSort(arr,q+1,r);
merge(arr,p,q,r);

    }

}



int main(){

    int arr[100],n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

 
    mergeSort(arr,0,n-1);
printarray(arr,n);
}