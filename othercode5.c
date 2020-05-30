#include<stdio.h>

int fibo(int n){
    int a[n+1];
    a[0]=0;
    a[1]=1;
    a[2]=1;
    for(int i=3;i<=n;i++){
        a[i]=a[a[i-1]]+a[i-a[i-1]];
    }
    for(int i=n-1;i>=0;i--){
         printf("%d",a[i]);
    }

}



int main(){

int n=10;

fibo(n);

}