#include <stdio.h>
int main(){
int k = 6;
int t[10];
int *p1 = t;
int *p2 = t + 1;
for(p1 =  t ; p1 <  t + k; p1++){ 
        printf("enter your  t[%d] :",p1 -  t);
        scanf("%d",p1);}
        for(p2 = t + k-1,p1 =  t ; p1 < p2; p1++,p2--){
            //if(p1 > p2){
            int tm = *p1;
            *p1 =*p2 ;
            *p2 = tm;}
        }
        for(p2 = t ;p2 < t +k;p2++){
            printf("%d\n",*p2);
        }