#include <stdio.h>

int main (void){
    int R;
    int N = 0;
    printf("enter your number : ");
    scanf("%i",&R);
    if (R<0){
        R = -R;
    }
    do{
       R = R / 10;
       N++;
    }while(R != 0);
    printf("%i",N);
    return 0;
}