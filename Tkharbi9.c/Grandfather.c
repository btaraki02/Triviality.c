#include <stdio.h>
int main(void){
   int val;
    int i ;
    int s = 0 ;
    lolo:
printf("enter your age : ");
scanf("%i",&val);
if (val <= 0)
goto lolo;
for(i = 1 ;i <=val;i++){
    s = s + 500 + i*3;
}
 printf("%iDH",s);
}