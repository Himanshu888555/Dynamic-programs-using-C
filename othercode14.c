#include<stdio.h>
#include<math.h>

int sunarray(int a[],int n){
    int maxfar=0,maxend=0,start =0,end=0,s=0;

for(int i=0;i<n;i++){
maxend+=a[i];

if(maxfar<maxend){
    maxfar = maxend;
    start=s;
    end=i; 
}
if(maxend<0){
    maxend=0;
    s=i+1;
}
}

return (end-start+1);

}


int main(){
    int a[8]={-2,-3,4,-1,-2,1,5,-3};
    int n=sizeof(a)/sizeof(a[0]);

    printf("%d",sunarray(a,n));

    return 0;
}