#include<stdio.h>
#include<string.h>


int max(int a,int b);

int longestsub(char *str,char *str1,int m, int n){

   if(m==0 || n==0)
   return 0;
   if(str[m-1]==str1[n-1])
   return 1+longestsub(str,str1,m-1,n-1);
   else
   return max(longestsub(str,str1,m,n-1),longestsub(str,str1,m-1,n));

}

    int max(int a,int b){
    return (a>b)?a:b;
                        }


int main()  {

    char str1[]="BCDAACD";
    char str2[]="ACDBAC";

    int m= strlen(str1);
    int n= strlen(str2);

    printf("length of lcs is %d",longestsub(str1,str2,m,n));

    return 0;

            }