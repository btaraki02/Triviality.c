#include <stdio.h>

int main(void){
    int n;

int i;

printf("enter your number : ");
scanf("%d",&n);
int man[n];
for(i= 1;i <= n;i++){
if(i % 2 != 0){
    printf(" man[%d] = %i \n",i,i);
}

}

}