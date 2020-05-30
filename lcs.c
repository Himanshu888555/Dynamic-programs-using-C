#include<stdio.h>
#include<string.h>

int table[20][20];
char S1[20]="BCDAACD";
char S2[20]="ACDBAC",b[20][20];

void lcs(){

int m=strlen(S1);
int n=strlen(S2);

for(int i=0;i<=m;i++)
   table[i][0]=0;
for(int j=0;j<=n;j++)
   table[0][j]=0;


for(int i=1;i<=m;i++){
    for(int j=1;j<=n;j++){

if(S1[i-1]==S2[j-1])
  table[i][j]=table[i-1][j-1]+1;
else if(table[i-1][j]>=table[i][j-1])
    table[i][j]=table[i-1][j];
else
    table[i][j]=table[i][j-1];

    }
}

int index=table[m][n];
char lcs[index-1];
lcs[index]='\0';

int i=m,j=n;

while(i>0 && j>0){
    
    if (S1[i-1]==S2[j-1])
    {
        lcs[index-1]=S1[i-1];
        i--;
        j--;
        index--;
    }
    else if (table[i-1][j]>table[i][j-1])
        i--;
    else
        j--;


}



printf("s1 : %s   \ns2 : %s \n",S1,S2);
printf("lcs: %s",lcs);



}

int main(){
     
   lcs();
   printf("\n");

}