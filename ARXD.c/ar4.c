#include <stdio.h>
int main(){
    int mom[5][3];
    int dod[3][5];
    int i = 0,j;
    while(i < 5){
        j =0 ;
        while(j < 3){
            printf("size[%d][%d] :",i,j);
            scanf("%d",&mom[i][j]);
            j++;
        }
        i++;
    }
    printf("\n\n");
    i =0;
    while(i < 5){
        j =0 ;
        while(j < 3){
            printf("\t%d\t",mom[i][j]);
            j++;
        }
        printf("\n\n\n");
        i++;
    }
    i = 0;
    while(i < 5 ){
        j =0;
        while(j < 3){
            dod[j][i]= mom[i][j];
            j++;
        }
        i++;
    }
    printf("\t\t\tswap\n\n");
    i =0;
    while(i < 3){
        j = 0;
        while(j < 5){
            printf("\t%d\t",dod[i][j]);
            j++;
        }
        printf("\n\n\n");
        i++;
    }
    return 0 ;
}