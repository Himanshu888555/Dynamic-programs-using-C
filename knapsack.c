#include<stdio.h>

int max(int a,int b){
    return (a>b)?a:b;
}

int knapsack(int value[],int weight[],int totalweight,int n){
    
    if(n==0 || totalweight==0)
    return 0;
    if(weight[n-1]>totalweight)
    return knapsack(value,weight,totalweight,n-1);
    else
    return max(knapsack(value,weight,totalweight,n-1),value[n-1]+knapsack(value,weight,totalweight-weight[n-1],n-1));

}






int main(){
    int value[10]={60,100,120};
    int weight[10]={10,20,30};
    int totalweight=10;
    int n=sizeof(value)/sizeof(value[0]);

    // knapsack(value,weight,totalweight,n);
        printf("%d",knapsack(value,weight,totalweight,n));
        return 0;

}