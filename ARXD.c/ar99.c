#include <stdio.h>
int main(){
    int pool[5][5];
    int *p = (int *)pool;
    int i,j,m = 0;
    int zero = 0;
    i = 0;
    while(i < 5){
        j = 0;
        while(j < 5){
            printf("enter your number : ");
            scanf("%d",(p + i *5 + j ));
            j++;
        }
        i++;
    }
     i = 0;
    while(i < 5){
        j = 0;
        while(j < 5){
            if(*(p + i *5 + j ) == 0){
                zero++;
            }
            else{
                m++;
            }
            j++;
        }
        i++;
    }
    printf(" zero numbers is : %d\n",zero);
    printf("others numbers : %d\n",m);
    if(zero > m/2){
        printf("\t\tzero is a lot!! ");
    } 
}