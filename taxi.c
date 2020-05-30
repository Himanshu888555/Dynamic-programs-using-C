/*
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here
#include<stdio.h>

int  main(){

int D;
int Oc,Of,Od;
int Cs,Cb,Cm,Cd;

scanf("%d\n%d\t%d\t%d\n%d\t%d\t%d\t%d",&D,&Oc,&Of,&Od,&Cs,&Cb,&Cm,&Cd);

int subOnline = (D-Of);

if(subOnline<1)
subOnline=0;

printf("sub : %d\n",subOnline);

 int onlineTaxiCost = (subOnline*Od)+Oc;

 float proClassic = ((float)D*(float)Cd);

printf("pro : %f\n",proClassic);


 float divClassic = ((float)D/(float)Cs)*(float)Cm;

printf("div : %f\n",divClassic);


 int classicTaxiCost = Cb+divClassic+proClassic;

printf("online : %d\n",onlineTaxiCost);
printf("classic : %d\n",classicTaxiCost);



if(onlineTaxiCost<=classicTaxiCost)
    printf("Online Taxi");
else
    printf("Classic Taxi");
    




    return 0;
}