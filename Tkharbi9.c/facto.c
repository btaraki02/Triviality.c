#include <stdio.h>
int main(void){
int X;
int  i = 23;
long long S = 1;

printf("enter your number : ");
scanf("%i",&X);
printf("%i! =",X);
if(X > 0){
for(i = 2;i <= X;i++){
    S =S*i;
}
printf("%lld.",S);
}
else if(X == 0){printf("1");}
else{printf("ooo my god");}
}