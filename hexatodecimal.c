#include<stdio.h>
#include<string.h>
#include<math.h>

int main(){

        char hexa[17];

        long long decimal=0;
int i,len,val;

printf("enter hexa number: ");
gets(hexa);

len=strlen(hexa);
len--;

for(i=0;hexa[i]!='\0';i++)
{

if(hexa[i]>='0' && hexa[i]<='9')
val=hexa[i]-48;
else if(hexa[i]>='a' && hexa[i]<='f')
val=hexa[i]-97+10;
else if(hexa[i]>='A' && hexa[i]<='F')
val=hexa[i]-65+10;

decimal+=val*pow(16,len);
len--;
}

printf("hexa number : %s\n",hexa);
printf("decimal number : %lld",decimal);
}
