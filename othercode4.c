#include<stdio.h>

int board(int n){
  
  int A[n+1],B[n+1];
  A[0]=B[1]=1,A[1]=B[0]=0;
   for(int i=2;i<=n;i++){
       A[i]=A[i-2]+2*B[i-1];
       B[i]=A[i-1]+B[i-2];
   }
return A[n];

}


int main(){
    int n=4;

    printf("%d",board(n));
    return 0;
}