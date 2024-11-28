#include <stdio.h>

int  main(){
int  a;
int *P;
P = &a;
printf("enter your number please a: ");
scanf("%i",P);
if(*P %  2 == 0){
    printf("your number %i is pair",*P);
}
else{
    printf("your number %i is not pair",*P);
}
}