#include <stdio.h>

int main(){
    int t[10];
    int *p;
    p = t ;
    int n = 6;
    for(p = t ; p <t + n; p++){
        printf("enter your [%d] :",p -t);
        scanf("%d",p);
    }
    for(p = t ; p <t + n; p++){
   printf("%d\n",*p);
}}