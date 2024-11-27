#include <stdio.h>
#include <math.h>
int main(void){
   int val;
    int i ;
printf("enter number : ");
scanf("%i",&val);
for(i = 1 ;i <=val;i++){
    if(val %i == 0){
    printf("%i\t\n",i);
}
}
}