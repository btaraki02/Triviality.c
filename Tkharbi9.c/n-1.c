#include <stdio.h>
int main(void){
    printf(" enter your number : ");
     long int a;
    scanf("%lu",&a);
    if(a > 0){
    long int i = 1;
     long int sum = 0;
    int l;
    while(i <= a){
        sum  += i;
        i++;
    }
    printf("%lu",sum);
}
else{printf("please enter positive number\n");}
}