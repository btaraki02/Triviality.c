#include <stdio.h>

int  main(){
float a,b;
float *poia,*poib;
poia = &a;
poib = &b;
float Multiplication,Division,Addition,Subtraction;
printf("enter your number please a: ");
scanf("%f",poia);
printf("\nenter your number please b: ");
scanf("%f",poib);

    Multiplication = *poia * *poib;
    Division = *poia / *poib;
    Addition = *poia + *poib;
   Subtraction  = *poia - *poib;
    printf("Multiplication is %.2f\n",Multiplication);
    printf(" Addition is %.2f\n",Addition);
    printf("Subtraction is %.2f\n",Subtraction);

if( *poib != 0){
    printf("Division is %.2f\n",Division);
}
else if(*poib == 0){
    printf("its zero men !");
}
}