#include <stdio.h>
#include <math.h>
int main(void){
    //Un + .........:}
    int n = 1;
    int Un;
    int Ui = 0;
    int Uj = Ui + 1;
    int i = 2;
    do{
    printf("enter your n : ");
    scanf("%i",&n);
 }while(n < 2);
    
    printf("Un = 1\n");
    while(i <= n){
        Un =Ui + Uj ;
        printf("U%i = %i\n",i,Un);
        Ui = Uj;
        Uj = Un;
        i++;
    }
    
}