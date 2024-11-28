#include <stdio.h>
#include <stdlib.h>

int main(){
int jk[5] = {6,6,9,3,1};
int n =5;
int h;
int *p = jk;
int *k = jk;
printf("enter your number :");
scanf("%d",&h);
for(p = jk;p< jk +n ;p++){
    *k   = *p;
    if(*k!= h )
    k++;
}
n = k - jk;
for(p = jk;p < jk +n ;p++){
printf("%d\n",*p);

}}