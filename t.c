#include<stdio.h>

int function_cal(int ,int ,int );

int function_cal(int t1,int t2,int dis){

int cal= t1*dis+t2*dis;
return cal;
}


int sumAll(int value){

  int sum=0;
   sum=sum+value;
   return sum;

}


int main(){

  int i,j;
  int player_record[100][100],distance_per_step[10][10];

  int candidates,total_time;
  scanf("%d\n%d",&candidates,&total_time);

  for(i=0;i<candidates;i++){
  for(j=0;j<total_time;j++){
    scanf("%d",&player_record[i][j]);
  }
  scanf("%d",&distance_per_step[i][total_time]);
  }

  
   int distance_covered=0, distance=0, time_interval=0 , time_interval_gap=0 ; 
    int sum=0,count=0,max=0,value=0,player=0;
      

  for(i=0;i<candidates;i++){
    for(j=0;j<total_time;j++){

    while(candidates--){

    time_interval=player_record[i][j];
    time_interval_gap=player_record[i][j+1];
    distance=distance_per_step[i][total_time];

    
    value=function_cal(time_interval,time_interval_gap,distance);
    
    
    printf("%d: %d\n",i+1,value);
    
    if(value>player){
      player=value;
      max=max+(j+1);
      
    }

    printf("max:%d\n",max);
    
    i++;
    }
    
    i=0;
    j++;
    
    
    
    
     


    }
    
  }


  






}