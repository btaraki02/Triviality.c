#include <stdio.h>
int main(){
    int kook[3][6];
    int i = 0,j;
    while(i < 3){
        j =0 ;
        while(j < 6){
                    kook[i][j] = 0;
            printf("\t%d\t",kook[i][j]);
            j++;
        }
        printf("\n\n\n");
        i++;
    }}