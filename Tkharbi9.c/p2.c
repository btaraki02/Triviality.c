#include <stdio.h>
void comparison(int *x,int *y,int *max){
    if(*x > *y){
        *max = *x;
    }
    else{
        *max = *y;
    }
}
int main(){
int x;
int y;
int max;
printf("enter your number : ");
scanf("%d",&x);
printf("enter your number : ");
scanf("%d",&y);
comparison(&x,&y,&max);
printf("this number is big %d",max);
}