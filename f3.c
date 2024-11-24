#include <stdio.h>
void popo(int a ,int b){
    int p;
    if(a < 0 && b < 0 || a > 0 && b >0){
         printf("  %d and popo is %d yes",a,b);
    }
    else {
        printf("  %d and popo is %d not",a,b);
     
    }
   
}
int main(){
    int a,b;
    printf("hh a :");
    scanf("%i",&a);
    printf("hh b :");
    scanf("%i",&b);
    popo(a,b);
    return 0;
}