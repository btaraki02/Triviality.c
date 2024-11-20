#include <stdio.h>

int main (void){
    int bon;
    int N = 0;
    printf("enter your number : ");
    scanf("%i",&bon);
   // if (bon<0){
    //    bon = -bon;
   // }
    do{  
     N = (N*10) + (bon % 10);
       bon = bon / 10;
       }while(bon != 0);
    printf("%d",N);
}
      