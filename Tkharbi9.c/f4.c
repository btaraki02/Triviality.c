#include <stdio.h>
int a,b;//global
int popo(){
    int p;
    if(a > b){
        p =1;
    }
    else if(b > a){
        p = 0;
     
    }
    else{
        p = 2;
    }
   return p;
}
int main(){
    int p;
    printf("hh a :");
    scanf("%i",&a);
    printf("hh b :");
    scanf("%i",&b);
   p = popo(a,b);
   if(p == 1){
     printf("  a is big");
   }
   else if(p == 0){
printf("  b is big ");
   }
   else{
    printf(" ==");
   }
    return 0;
}