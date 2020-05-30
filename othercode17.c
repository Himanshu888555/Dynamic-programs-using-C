#include<stdio.h>
#include<string.h>

void search(char *text,char *string){
char concat[100]="";
strcat(text,string);
strcat(concat,text);
for(int i=0;i<16;i++)
printf("%c",concat[i]+"$"+concat[16-i]);
}

int main(){
    char text[]="HELLO ITS RAM";
    char string[]="RAM";
    search(text,string);
    return 0;
}