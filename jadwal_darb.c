#include <stdio.h>

int main(void){
int i,j;
for(i= 1;i<= 10;i++ )
    printf("%i ",i);
    printf("\n");
    for(i =1 ;i<=18;i++)
    printf("--");
printf("\n");
    for(i = 1 ; i <= 10;i++){
        printf("%d  | ",i);
        for(j = 1 ;j <=10;j++){
            printf("%i ",i*j);
        }
        printf("\n");
    }


}