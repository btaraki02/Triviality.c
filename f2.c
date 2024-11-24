#include <stdio.h>
int popo(int n){
    int p;
    p = n * n;
    return p;
}
int main(){
    int n;
    int p;
    printf("hh");
    scanf("%i",&n);
   p = popo(n);
   printf("your number is %d and popo is %d",n,p);
    return 0;
}