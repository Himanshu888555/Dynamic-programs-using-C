#include<stdio.h>
#include<string.h>

int main(){
int bin[10],i,n;


printf("enter the number : ");
scanf("%d",&n);

for(i=0;n>0;i++)
{
bin[i]=n%2;
n=n/2;
}

printf("binary is : ");
for(i=i-1;i>=0;i--){
    printf("%d",bin[i]);
}
return 0;
}