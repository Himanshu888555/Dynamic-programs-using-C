#include<stdio.h>
#define M 4

// int max(int a, int b){
//     return (a>b)?a:b;
// }

int maxsumtriangle(int arr[][M],int n,int m){



   
    for(int i=m-1;i>=0;i--)    { 
        for(int j=0;j<=i;j++){

            if(arr[i+1][j]>arr[i+1][j+1]){

                arr[i][j]+=arr[i+1][j];
                printf("j%d:%d\n",j,arr[i][j]);
            }
            else{
                arr[i][j]+=arr[i+1][j+1];
                printf("j.%d:%d\n",j,arr[i][j]);

            }
                printf("i%d:%d\n",i,arr[i][j]);
         
            
        }
    }
    
  return arr[0][0];      
    
}

int main(){

     int arr[M][M]={
                    {1,0,0,0},
                    {1,2,0,0},
                    {4,1,2,0},
                    {2,3,1,1},
                    };
     int n= (sizeof(arr)/sizeof(arr[0]))-1;

    //  printf("%d",n);
    // maxsumtriangle(arr,n,n);
        printf("%d",maxsumtriangle(arr,n,n));

        return 0;

}