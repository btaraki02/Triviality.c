#include <stdio.h>
#include <math.h>
int main(void){
    //10^0 + 10^1 +....+10^n;
int k;
int  i = 0 ;
double s = 0;
printf("enter your number k : ");
scanf("%i",&k);
while(i <= k){
    s =  s + pow(10,i);
i++;
}
printf("%.0lf\n",s);
return 0;
}