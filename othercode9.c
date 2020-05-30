#include<stdio.h>
#include<stdlib.h>

struct pair{
    int a;int b;
};

int maxChain(struct pair arr[],int n){

    int max=0;
    int *mcl = (int *) malloc (sizeof(int)*n);

    for(int i=0;i<n;i++){
        mcl[i]=1;
    }

    for(int i=1;i<n;i++){
        for(int j=0;j<i;j++){
            if(arr[i].a>arr[j].b && mcl[i]<mcl[j]+1){
                mcl[i]=mcl[j]+1;
            }
        }
    }





    for(int i=0;i<n;i++){
        if(max<mcl[i]){
        max=mcl[i];
        }
    }


    free(mcl);
    return max;
}


int main(){
    struct pair arr[]={{5,25},{15,25},{27,40},{50,60}};
    int n=sizeof(arr)/sizeof(arr[0]);

    printf("%d",maxChain( arr,n));

    return 0;
}

