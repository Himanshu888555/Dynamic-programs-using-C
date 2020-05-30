#include<stdio.h>

int cover(int number){

    int a[number+1];

    a[0]=1;
    a[1]=1;
    a[2]=2;

for(int i=3;i<=number;i++){
a[i]=a[i-1]+a[i-2]+a[i-3];
}

return a[number];


}


int main(){
    int number= 4 ;


int n=cover(number);
 printf("%d",n);
}