#include<stdio.h>

void product(long arr[],long n){
    long product=1,count=0;
    
    
    for(long i=0;i<n;i++){
     if(arr[i]==0)
     continue;
     else{
        for(long j=i+1;j<n;j++){
            if(arr[j]==0)
            continue;
            else{
            product =(arr[i]*arr[j]);
            
            if(product%10==0)
                count++;
            }
        }
     }
    }
    printf("%ld\n",count);

}


int main(){
    long n, arr[20];
    long count=0;
    scanf("%ld",&n);
     
     if(n == 0)
     printf("%ld\n",count);
     else{
    
    for(int i=0;i<n;i++)
    scanf("%ld",&arr[i]);


     }
     
     product(arr,n);
     

}