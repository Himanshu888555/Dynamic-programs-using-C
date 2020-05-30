#include<stdio.h>

const int M=10;

int max(int a,int b){
    return (a>b)?a:b;
}

int maxavg(int cost[M][M],int N){
    int dp[N+1][N+1];
    dp[0][0]=cost[0][0];

    for(int i=0;i<N;i++){
        dp[i][0]=dp[i-1][0]+cost[i][0];
    }
    for(int j=0;j<N;j++){
        dp[0][j]=dp[0][j-1]+cost[0][j];
    }



    for(int i=1;i<N;i++){
        for(int j=1;j<=N;j++){
            dp[i][j]=max(dp[i-1][j],dp[i][j-1]+cost[i][j]);
        }
    }
    return ((double)dp[N-1][N-1]/(double)(2*N-1));
}

int main(){

    int cost[4][4]={{1,2,3},{4,5,6},{7,8,9}};
    printf("%f",maxavg(cost,4));
    return 0;
}