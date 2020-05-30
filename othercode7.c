#include<stdio.h>

int max(int a,int b){
    return (a>b)?a:b;
}
int sum(int arr[],int n){

    int dp[n];
    for(int i=0;i<n;i++)
    dp[i]=1;

    for(int i=0;i<n;i++){
        for(int j=0;j<i;j++){

            if(( arr[i]==arr[j]+1) || ( arr[i]==arr[j]-1 )){
                dp[i]=max(dp[i],dp[j]+1);
            }
        }
    }


    int result=1;
    for(int i=0;i<n;i++)
        if(result<dp[i])
            result=dp[i];
        
        return result;
    
}







int main(){
    int arr[7]={1,2,3,4,5,3,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("%d",sum(arr,n));
    return 0;
}