#include <stdio.h>
#include <string.h>


int main() {
        int n,S=0,K=0,count=0;
        scanf("%d",&n);
        int a[10][10];
      
        if(  n<31 && n>3){
            
            for(int i=0;i<n;i++)
                for(int j=0;j<n;j++)
                    scanf("%d",&a[i][j]);
                
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++)
                    {

                            if(a[i][j+1]<a[i+1][j]){
                                if(j==(n-1)){
                                //  printf("down %d \n",a[i+1][j]);

                                S=a[i][j];
                                // printf("S = %d \n",S);
                                K=a[i+1][j];
                                // printf("K = %d \n",K);
                                a[i+1][j]=((S/2)+K);
                                // printf("a[%d][%d] = %d \n",i+1,j,a[i+1][j]);
                                
                                count =a[i+1][j];


                                i++;
                                j--;
                            }else{
                                // printf("right %d \n",a[i][j+1]);
                                S=a[i][j];
                                // printf("S = %d \n",S);
                                K=a[i][j+1];
                                // printf("K = %d \n",K);
                                a[i][j+1]=((S/2)+K);
                                // printf("a[%d][%d] = %d \n",i,j+1,a[i][j+1]);
                                count=a[i][j+1];
                               
                            }
                                
                            }
                            else{  if(j==(n-1)){
                                //  printf("down %d \n",a[i+1][j]);

                                S=a[i][j];
                                // printf("S = %d \n",S);
                                K=a[i+1][j];
                                // printf("K = %d \n",K);
                                a[i+1][j]=((S/2)+K);
                                // printf("a[%d][%d] = %d \n",i+1,j,a[i+1][j]);
                                count=a[i+1][j];
                                


                                i++;
                                j--;
                            }
                            else{
                                    
                                // printf("down %d \n",a[i+1][j]);

                                S=a[i][j];
                                // printf("S = %d \n",S);
                                K=a[i+1][j];
                                // printf("K = %d \n",K);
                                a[i+1][j]=((S/2)+K);
                                // printf("a[%d][%d] = %d \n",i+1,j,a[i+1][j]);
                                count=a[i+1][j];
                                


                                i++;
                                j--;
                            }}
                            

                            if(i==(n-1) || j==(n-1))
                            break;


                    }
                    
                    
                    
                    }


                    printf("\n %d",count);



        }   
} 
            
        

             





  