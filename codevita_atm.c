#include<stdio.h>





int main(){
   
int total=0,number,amount,hun100,two200,five500,thou1000,count=0,notes=0;

scanf("%d",&number);
if(number<100){
    scanf("%d",&amount); 
    total=amount;
    if(amount%100==0){
        // printf("e");
         scanf("%d\n%d\n%d\n%d",&hun100,&two200,&five500,&thou1000);
     
          if(total>1000 && total!=0 && (amount/1000)<=thou1000){
              count=count+1000;
              notes++;
            //   printf("amount : %d ,notes=%d",count,notes);
              thou1000--;
              total= amount-count;
          }
         if(   total>500 && total!=0 &&(total/500)<=five500){
              count=count+500;
              notes++;
            //   printf("amount : %d ,notes=%d",count,notes);
              five500--;
              total=amount-count;

          }

          if(total >200 && total!=0 && (total/200)<=two200){
              count=count+200;
              notes++;
            //   printf("amount : %d ,notes=%d",count,notes);
              two200--;
              total= amount-count;

          }
          if(total >= 100 && total!=0 && (total/100)<=hun100){
              count=count+100;
              notes++;
            //   printf("amount : %d ,notes=%d",count,notes);
              hun100--;
              total= amount-count;

          }

              printf("amount : %d ,notes=%d",count,notes);



         

     

    }
    else
    printf("amount should be in multiple of 100");


}

// printf("number is :%d\namount is : %d\n100's note: %d\n200's note: %d\n500's note: %d\n1000's note: %d\n",number,amount,hun100,two200,five500,thou1000);


}