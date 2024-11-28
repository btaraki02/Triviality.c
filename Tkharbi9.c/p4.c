#include <stdio.h>

int main(){
int T[6];
int *P;

for(P =T;P < T + 6;P++){
    printf("enter your number T[%d] : ",P -T);
    scanf("%d",P);
}
int Max = T[0];
int Min = T[0];
        for(P =T;P < T + 6;P++){
        if(*P > Max ){
            Max = *P;
        }
        if(*P < Min){
            Min = *P;
        }
        }
printf("max is %d\n",Max);
printf("min is %d\n",Min);
}