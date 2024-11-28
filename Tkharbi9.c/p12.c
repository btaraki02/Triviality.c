#include <stdio.h>

int main(){
   int n = 5;
    int t[5];
    int *p1;
    int *p2;
    p1 = t ;
    p2 = t + n -1;
    for(p1 = t ; p1 < t + n; p1++){ 
        printf("enter your [%d] :",p1 - t);
        scanf("%d",p1);
        }
        for(p1 = t ,p2 = t + (n-1); p1 <p2;p2-- ,p1++){
         int tmp;
         tmp = *p1;
         *p1 = *p2;
         *p2 = tmp;
        }
    

         for(p1 = t  ;p1 <t + n  ;p1++){
            printf("%d\n",*p1);
         }}