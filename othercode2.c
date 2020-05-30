#include<stdio.h>




int pairs(int n){

int A[n+1];

for(int i=0;i<=n;i++){
if(i<=2)
A[i]=i;
else
A[i]=A[i-1]+(i-1)*A[i-2];
}

return A[n];


}


int main(){

    int n=3;

printf("%d",pairs(n));  

    return 0;

}