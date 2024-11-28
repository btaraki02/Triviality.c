#include <stdio.h>

int main()
{
    int s =10;
    int ro[10]= {1,2,12,32,43,54,65,54,3,77};
    int n ;
    int *p = ro;
    printf("enter your number for array :");
    scanf("%d",&n);
   for(p = ro;p < ro + s-1;p++){
    if(*p == n){
        p--;
    }
   }
for(p = ro;p < ro + s-1;p++){
        printf("%d\n",*p);
}}