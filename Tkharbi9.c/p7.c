#include <stdio.h>

int  main(){
int  a;
int *P;
P = &a;
int i = 1;
do{
printf("enter your number please a: ");
scanf("%i",P);}while(*P <=0 );
for(i =1;i <=*P;i++){
if(*P %  i == 0){
    printf("%i\n",i);
}
}
}