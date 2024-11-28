#include <stdio.h>
int main(){
 int bob[10];
 int i =6;
 int s=1;
 int *p = bob;//p=&bob[0];
 for(p = bob;p < bob +i;p++){
    printf("enter bob[%i]: ",p-bob);
    scanf("%i",p);
 }
 for(p = bob;p < bob +i;p++){
    s = s * *p ;
 }
 printf("%i",s);
}