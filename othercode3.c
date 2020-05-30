#include<stdio.h>

int solve(int n,int r,int p){
    int fact=1;
    int a=(n-r);
     for(int i=n;i>a;i--,n--){
           fact*=n;
     }

     return (fact/r)%p;

    

}
int main(){
    int n=3,r=2,p=13;
    
    
    printf("%d",solve(n,r,p));


     
}
