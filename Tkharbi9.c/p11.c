#include <stdio.h>

int main(){
    int n=10;
int vim[10] ={12,12,12,3,3,1,3,3,3,3};
int *P1 ;
int *P2 = vim;
P1 = vim;
int U;
printf("enter U please : ");
scanf("%d",&U);
for(P1 = vim;P1 < vim + n;P1++){
    *P2 = *P1;
    if(*P2 != U)
        P2++;
    
    }
    n = P2 - vim;

for(P1 = vim;P1 < vim + n;P1++){
    printf("%d\n",*P1);
}


}