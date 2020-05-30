#include<stdio.h>

int main(){
int n,evenlen,oddlen,temp;
int arr[100],even[50],odd[50];
printf("enter the number of array: ");
scanf("%d",&n);

for(int i=0;i<n;i++)
{printf("enter element of %d index: ",i);
scanf("%d",&arr[i]);
}

if(n%2==0)
{
 oddlen=n/2;
 evenlen=n/2;
}
else
{
oddlen=n/2;
evenlen=(n/2)+1;
}

for(int i=0;i<n;i++){
    if(i%2==0 && arr[i]%2==0)
    even[i/2]=arr[i];
    else
    odd[i/2]=arr[i];
}

for(int i=0;i<evenlen;i++){
    for(int j=0;j<evenlen;j++){
        temp=0;
        if(even[i]>even[j]){
            temp=even[i];
            even[i]=even[j];
            even[j]=temp;
        }
    }
}

for(int i=0;i<oddlen;i++){
    for(int j=0;j<oddlen;j++){
        temp=0;
        if(odd[i]>odd[j]){
            temp=odd[i];
            odd[i]=odd[j];
            odd[j]=temp;
        }
    }
}

for(int i=0;i<evenlen;i++){
    printf("%d ",even[i]);
}
printf("\n");

for(int i=0;i<oddlen;i++){
    printf("%d ",odd[i]);
}


printf("\n\n%d",even[evenlen-2]+odd[1]);





}
