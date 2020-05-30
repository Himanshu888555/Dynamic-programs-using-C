#include<stdio.h>

int main(){
   
   int binary,decimal=0,base=1,rem;

  printf("enter the number : "); 
scanf("%d",&binary);

int binary_cal=binary;
   
   while(binary>0){

       rem=binary%10;
       decimal=decimal+rem*base;
       binary=binary/10;
       base=base*2;
   }

   printf("binary number: %d\n",binary_cal);
printf("decimal number is: %d",decimal);


}