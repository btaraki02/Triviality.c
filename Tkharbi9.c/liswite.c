#include <stdio.h>
#include <math.h>
int main(void){
    //Un + .........:}
    int n;
    int Un;
    int i = 1,Ui = 6;
    printf("enter your n : ");
    scanf("%i",&n);
    while(i <= n){
        Un = 4*Ui +10 ;
        Ui = Un;
        i++;
    }
    printf("U%i = %i",n,Un);
}