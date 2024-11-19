#include <stdio.h>
int main(void){
    int A;
    int B;
    printf("enter your number A:");
    scanf("%i",&A);
    printf("enter your number B:");
    scanf("%i",&B);
    if((A < 0 &&  B < 0 )|| (A > 0 && B > 0)){printf("They have the same signal.(%i) and (%i)..\n ",A,B);}
    else {printf("They have not the same signal.(%i) and (%i)..\n",A,B);} 
    return 0;
}