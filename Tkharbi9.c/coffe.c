#include <stdio.h>
int main(void){
    //s/1 + s/2 +....+s/n;
int k;
float  i = 1 ;
float s = 0;
printf("enter your number k : ");
scanf("%i",&k);
while(i <= k){
    s =  s +(1 / i);
i++;
}
printf("%.2f",s);
return 0;

}