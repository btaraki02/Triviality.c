#include <stdio.h>
int main(void){
    int val;
    int S =0;
    int i = 1;
    printf("enter number 1 -> 7 : ");
    for(i= 1;i <=7;i++){
        piece :
printf(" NOT %i IS : ",i);
scanf("%d",&val);
if(val < 0)
goto piece;
S = S + val;
    }
    printf(" S is %d\n",S);
    printf("Min is %.1f",(float)S/7);
}