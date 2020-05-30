#include<stdio.h>

int max(int a,int b){
    return (a>b)?a:b;
}
int pattern(int arr[],int n){
    
    int dp[n];

    
     
     if(n>=1)
     dp[0]=arr[0];
     if(n>=2)
     dp[1]=arr[0]+arr[1];
     if(n>2)
     dp[2]=max(dp[1],max(arr[1]+arr[2],arr[0]+arr[2]));



      for(int i=3;i<n;i++){
          dp[i]=max(max(dp[i-1],dp[i-2]+arr[i]),arr[i]+arr[i-1]+dp[i-3]);
      }  

      return dp[n-1];
    
   



}

int main(){

    int arr[8]={1,2,3,4,5,6,7,8};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d",pattern(arr,n));
}