#include <stdio.h>

int main(){
int T[6];
int S;
int *P;
P = T;// P = &T[0];
for(P =T;P < T + 6;P++){
    printf("enter your number T[%d] : ",P -T);
    scanf("%d",P);
}
        S = 0;
        for(P =T;P < T + 6;P++){
        S = S + *P;
        }
printf("%d",S);
}