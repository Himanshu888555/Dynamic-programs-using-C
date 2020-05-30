#include<stdio.h>
#include<string.h>

int min1(int a,int b){
    return (a<b)?a:b;
}

int min(int x,int y)
{
    return min(x,min1(x,y));
}
int editdistdp(char str1[],char str2[]){

    int n=strlen(str1);
    int m=strlen(str2);

    int DP[2][n+1];

    for(int i=0;i<2;i++){
        for(int j=0;j<n+1;j++){
            DP[i][j]=0;
        }
    }

    for(int i=0;i<=n;i++)
        DP[0][i]=i;

    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(j==0)
            DP[i%2][j]=i;
            else if(str1[j-1]==str2[i-1]){
                DP[i%2][j]=DP[(i-1)%2][j-1];
            }
            else{
                DP[i%2][j]= 1+min(DP[(i-1)%2][j],min(DP[i%2][j-1],DP[(i-1)%2][j-1]));
            }
        }
    }

printf(" %d",DP[m%2][n]);

}



int main(){

    char str1[10] = "food";
    char str2[10] = "money";

    editdistdp(str1,str2);

    return 0;
}