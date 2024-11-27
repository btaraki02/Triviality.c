#include <stdio.h>
#include <math.h>
int main(void){
    //S^1 + S^2 + .... + N^2. ;}
   int val;
   int a = 2;
   int i = 1;
   float S = 0;
printf("enter 5 odd numbers : \n");
while(i <=5){
    printf("enter number %i : ",i);
    scanf("%i",&val);
    if(val % 2 == 0)
    continue;
    S +=pow(val,a);
    i++;
}
 printf("your r is %.0f",S);
}